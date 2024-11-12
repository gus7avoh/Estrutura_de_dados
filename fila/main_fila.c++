#include <iostream>
#include "fila.h"
#include "complement.h"
// possivel erro no import, que normalmente importamos o obj e as fu;oes complementares nao tem liga;ao com o obj
// modificar a estrutura inteira da main, uma vez que ela foi feita para a pilha

using namespace std;

int main(){

    fila queue;
    int indice;

    do{
        cout << endl;
        indice = menu();
        switch (indice) {

        case 1: {
            int value;
            while(true){
                clear();
                value = getNumber("Digite o valor que deseja adicionar: ");
                queue.push(value);
                queue.print();
                if(!ask()){
                    break;
                }
            } 
            break;                  
        }      
        
        case 2:
            clear();
            cout << "Removendo o elemento da fila..." << endl;
            queue.pop();
            queue.print();
            cout << "\n" << endl;
            break;

        case 3:
            clear();        
            cout << "fila: " << endl;
            queue.print();
            cout << endl;
            break;

        case 4:
            clear();
            cout << "O tamanho da fila eh: " << queue.length() <<"\n"<< endl;
            break;

        case 5:
            clear();        
            cout << "Elementos excluidos: " << endl;
            queue.delElements();
            cout << endl;
            break;

        default:
            cout << "Valor invalido!!!" << endl;
            break;
        }

    }while (indice != 0);
   
    return 0;
}
