#include <iostream>
#include <vector>
#include "circular.h"
#include <string>

//criar o elemento 
circulo::circulo(){
    //clock.reserve(max_itens);
}

//verifica o tamanho do relogio
int circulo::currently(){
    return now%max_itens; // a posicao atual de incremento nunca vai passar de 5 e vai ser ciclica. 
}

//verifica o tamanho do relogio
int circulo::first(){
    return fi%max_itens; // indica a posicao que atualmente é o primeiro elemento 
}

void circulo::nowplus(){ // toda vez que eu adicionar um elemento esse deve ser incrementado para que o currently avance
    now++;
}

void circulo::fiplus(){ // toda vez que eu remover um elemento esse deve ser incrementado para que o first avance
    fi++;
}

//adicionar um elemento ao relogio
void circulo::push(int value){
   if(isfull()){
        cout << "Nao eh possivel adicionar mais nada" << endl;
   }else{
        //cout << "A real posição inserida foi: " << *(clock.begin() + first()) << endl;
        clock.insert(clock.begin() + currently(), value);
        //clock [ currently()] = value;
        nowplus();
        start = 1;
   }
}






//remover um elemento do relogio
int circulo::pop(){
    if(isempty()){
        cout << "nao eh possivel remover mais nada" << endl;
    }else{
        cout << "A real posição inserida foi: " << *(clock.begin() + first()) << endl;
        clock.erase(clock.begin() + first());
        fiplus();
    }
}

//verificar se o relogio está cheio
bool circulo::isfull(){
    if (start == 0){
        return false;
    }else{
        if (currently() == first()){
        return true;
        }else{
            return false;
        }
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
   return clock.size();
}

void circulo::print(){
    cout << "[";
      for (int valor : clock) {
        cout << valor << " ";
    }
    cout << "]";
}

