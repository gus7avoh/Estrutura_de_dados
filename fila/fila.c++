#include <iostream>
#include <vector>
#include "fila.h"
#include <string>

fila::fila(){
    queue.reserve(max_itens);
}

void fila::push(int value){
    if(isfull()){
        cout << "Nao eh possivel adicionar mais nada !!!" << endl;
    }else{
        queue.push_back(value);
    }
}

int fila::pop(){
    if(isempty()){
        cout << "Nao eh possivel remover mais nada !!!" << endl;
    }else{
        delQueue.push_back(queue[0]);
        if(queue.size() == 1){
            queue.pop_back(); 
        }else{
            for (int i=0; i< queue.size()-1; i++){
        queue[i] = queue[i+1];
        }
        queue.pop_back(); 
        }     
    }
    
}

bool fila::isfull(){
    if(queue.size() == max_itens){
        return true;
    }else{
        return false;
    }
}

bool fila::isempty(){
    if(queue.size() == 0){
        return true;
    }else{
        return false;
    }
}

int fila::length(){
    return queue.size();
}

void fila::print(){
    cout << "[";
    for (int i=0; i< queue.size(); i++){
    cout << queue[i] << " ";
    }
    cout << "]";
}

void fila::delElements(){
    cout << "[";
    for (int i=0; i< delQueue.size(); i++){
    cout << delQueue[i] << " ";
    }
    cout << "]";
}

