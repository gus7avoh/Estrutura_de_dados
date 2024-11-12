#include "pilha.h"
#include <iostream>
using namespace std;

stack::stack() {
    // Construtor
    size = 0;
    structure = new Itemtype[max_itens]; // array criado com um ponteiro 

}

stack::~stack() {
    // Destrutor

    delete [] structure; //deletando o array
       
}

bool stack::isfull() {
    // Implementação para verificar se a pilha está cheia

    return(size == max_itens); // se for igual vai retornar True
}

bool stack::isempty() {
    // Implementação para verificar se a pilha está vazia

    return(size == 0);
}

void stack::push(Itemtype item) {
    // Implementação para empilhar um item
    if(isfull()){
        cout << "A pilha esta cheia!! " << endl;
        cout << "Nao eh possivel inserir esse elemento " << endl;
    }else{
        structure[size] = item;
        size++;
    }
}

Itemtype stack::pop() {
    // Implementação para desempilhar e retornar o item

    if(isempty()){
        cout << "A pilha esta vazia!! " << endl;
        cout << "Nao eh possivel remover nada. " << endl;
        return 0;
    }else{
        size--; //tirei o elemento do tamanho
        return structure[size]; //retornei a estrutura sem aquele elemento        
    }
}

void stack::print() {
    // Implementação para imprimir a pilha

    cout << "Pilha: [";
    for (int i=0; i < size; i++){
        cout << structure[i] << " ";
    }
    cout << "]" << endl;
}

int stack::length() {
    // Implementação para retornar o comprimento da pilha
    return size;
}
