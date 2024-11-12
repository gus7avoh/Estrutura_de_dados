#include "pilha.h"
#include <vector>
#include <iostream>


//criar o vetor
stack::stack(){
    vetor.reserve(max_itens);
}

//o vetor esta cheio
bool stack::isfull(){
    if(max_itens == vetor.size()){
        return true;
    }
    else{
        return false;
    }
}

//o vetor esta vazio
bool stack::isempty(){
    if(vetor.size() == 0 ){
        return true;
    }
    else{
        return false;
    }
}

//adicionar elementos ao vetor
int stack::push(int number){

    if (isfull()){
        cout << "Voce nao pode adicionar mais nada!!!" << endl;
    }
    else{       
        vetor.push_back(number);
    }
    
}

//remover elementos do vetor 
int stack::pop(){
    if(isempty() == true){
        cout <<  "Voce nao pode remover mais nada!!!" << endl;
    }
    else{   
        vetor.pop_back();
    }
}

//qual o tamanho do vetor
int stack::length(){
    return vetor.size();
}

//mostrar o vetor

void stack::print(){
    cout << "[";
    for (int i = 0; i < vetor.size(); i++){
        cout << vetor[i] << " ";
    }
    cout << "]\n" <<  endl;
} 
