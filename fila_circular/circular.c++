#include <iostream>
#include <vector>
#include "circular.h"
#include <string>

//criar o elemento 
circulo::circulo(){
    clock.reserve(max_itens);
}

//verifica o tamanho do relogio
int circulo::currently(){
    return now%max_itens; // a posicao atual de incremento nunca vai passar de 5 e vai ser ciclica. 
}

//verifica o tamanho do relogio
int circulo::first(){
    return fi%max_itens;
}

void circulo::nowplus(){
    now++;
}

void circulo::fiplus(){
    fi++;
}

//adicionar um elemento ao relogio
void circulo::push(int value){
   start = 1;
   if(isfull()){
        cout << "Nao eh possivel adicionar mais nada" << endl;
   }else{
        if(value == 00){
            clock[currently()] = 0;
        }else{
            clock[currently()] == value;
            nowplus();
        }        
   }
}

//remover um elemento do relogio
int circulo::pop(){
    if(isempty()){
        cout << "nao eh possivel remover mais nada" << endl;
    }else{
        clock[first()] = 00;
        fiplus();
    }

}

//verificar se o relogio está cheio
bool circulo::isfull(){
   if (start != 0){
        if (currently() == first()){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}

//verificar se o relogio está vazio
bool circulo::isempty(){
   if (length() == 0){
    return true;
   }else{
    return false;
   }
}

int circulo::length(){ /// se o numero for diferente de 00 vou contar como um numero 
    int number;
    for(int i : clock){
        if (i != 00){
            number++;
        }
    return number;
    }
}

void circulo::print(){
    cout << "[";
    for (int i = 0; i <= 5; i++){     
        if (i != 00){
            cout << clock[i] << " ";
        } 
    }
    cout << "]";
}

 //// o relogio esta apontando sempre cheio para novos dados 
 //// o print está mostarando 0 para os valores vazios
