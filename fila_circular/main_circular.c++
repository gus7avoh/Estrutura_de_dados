#include <iostream>
#include "circular.h"
#include "complement.h"

using namespace std;

int main(){

    circulo queue;
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
            cout << "Removendo o elemento do relogio..." << endl;
            queue.pop();
            queue.print();
            cout << "\n" << endl;
            break;

        case 3:
            clear();        
            cout << "Relogio: " << endl;
            queue.print();
            cout << endl;
            break;

        case 4:
            clear();
            cout << "O tamanho do relogio eh: " << queue.length() <<"\n"<< endl;
            break;

        default:
            cout << "Valor invalido!!!" << endl;
            break;
        }

    }while (indice != 0);
   
    return 0;
}
