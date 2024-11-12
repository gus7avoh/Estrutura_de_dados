#include <iostream>
#include <vector>
#include "pilha.h"

using namespace std;

void clear();
bool ask();
int menu();

int main() {
    stack stack1;
    int indice;

    do{
        indice = menu();

        switch (indice) {
        case 1: {
            // Adicionar um valor à pilha
            // o primiro o ultimo valor que eu adiciono a pilha nao é contabilizado somente a partir do segundo valor que o primiro vai ser contabilizado 
            while (true)
            {
                clear();
                int valor;

                while(true){  
                         
                    cout << "Digite o valor que deseja adicionar: ";
                    cin >> valor;
                    if(cin.fail()){
                        cin.clear();  // Limpa o erro de entrada
                        cin.ignore(800, '\n');  // Ignora o restante da entrada
                        clear();  
                        cout << "Valor invalido, digite novamente!" << endl;       
                    }
                    else{
                        stack1.push(valor);
                        stack1.print();
                        break;
                    }
                }
                if(ask()==false){
                    break;
                }
            } 
            break;   
        }      
        
        case 2:
            clear();
            cout << "Removendo o topo da pilha..." << endl;
            stack1.pop();
            break;

        case 3:
            clear();        
            cout << "Pilha: " << endl;
            stack1.print();
            break;

        case 4:
            clear();
            cout << "O tamanho da pilha eh: " << stack1.length() <<"\n"<< endl;
            break;

        default:
            cout << "Valor invalido!!!" << endl;
            break;
        }

    }while (indice != 0);
   
    return 0;
}

void clear() {
    system("cls"); 
}

bool ask() {
    //quando eu falei nao o sistema fechou 

    string pergunta;
    while ((true))
    {
        cout << "\nQuer adicionar outro numero? (S/N) " << endl;
        cin >> pergunta;

        for (char &c : pergunta) {
            c = toupper(c);
        }
        if (pergunta == "S" || pergunta == "SIM") {
            return true;
            break;
        } else if (pergunta == "N" || pergunta == "NAO") {
            return false;
            break;
        } else {
            clear();
            cout << "Resposta invalida!" << endl;
        }
    }
    
}

int menu() {
    bool validacao = false;
    int indice;
    do {
        cout << "0 - Parar o programa\n";
        cout << "1 - Adicionar um valor a pilha" << endl;
        cout << "2 - Remover um valor da pilha" << endl;
        cout << "3 - Ver a pilha" << endl;
        cout << "4 - Tamanho da pilha\n" << endl;
        cout << "--> ";
        cin >> indice;

        if (cin.fail() || (indice < 0 || indice > 4)) {
            cin.clear();  // Limpa o erro de entrada
            cin.ignore(1000, '\n');  // Ignora o restante da entrada
            cout << "Valor invalido, digite novamente!" << endl;
            validacao = false;
        }
        else {
            validacao = true;
        }
    } while (!validacao);

    return indice;
}

