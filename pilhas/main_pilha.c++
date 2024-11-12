#include <iostream>
# include "pilha.h"
#include <cstdlib>
#include <string>

using namespace std;

void clear(){
    system("cls");
}

bool repeat() {
    string pergunta;

    do {
        cout << "Deseja adicionar outro? (sim/nao/s/n): ";
        cin >> pergunta;

        // Verifica se a entrada é inválida
        if (cin.fail()) {
            cin.clear();                   // Limpa o estado de erro de cin
            cin.ignore(1000, '\n');        // Ignora o resto da entrada até o próximo '\n'
            cout << "Entrada invalida. Por favor, insira uma resposta de texto.\n";
            continue;                      // Pede a entrada novamente
        }

        if (pergunta == "sim" || pergunta == "SIM" || pergunta == "s" || pergunta == "S") {
            return true;
        } else if (pergunta == "nao" || pergunta == "NAO" || pergunta == "n" || pergunta == "N") {
            return false; 
        } else {
            clear();
            cout << "\nResposta invalida. Tente novamente." << endl;
        }
    } while (true);
}

int main(){
    stack stack1;

    Itemtype item;
    int option;
    cout << "Programa gerador de pilhas \n";
    

    do{ 
        cout << "\n\n";
        cout << "Digite uma opcao:\n";
        cout << "0 - Parar o programa\n";
        cout << "1 - Inserir um elemento\n";
        cout << "2 - Remover um elemento\n";
        cout << "3 - Imprimir a pilha\n";
        cout << "4 - Ver o tamanho da pilha\n";
        cout << "5 - excluir a estrutura da pilha\n";
        cout << "\n--> ";
        cin >> option;

        switch (option)
        {
        case 1:
            while (true)
            {
                clear();
                cout << "Digite o item que quer inserir: ";
                cin >> item;
                stack1.push(item);
                stack1.print();       
                if (repeat() == false){
                    break;
                }
            }
            break;
        case 2:
            clear();
            cout << "Removendo item... ";
            item = stack1.pop();
            stack1.print();
            break;

        case 3:
            clear();
            cout << "Pilha\n";
            stack1.print();
            break;

        case 4:
            clear();
            cout << "O tamanho da pilha eh: ";
            cout << stack1.length();        
            break;

        case 5:
            clear();
            cout << "Destruindo a pilha... \n";
            stack1.~stack();
            stack1.print();
            break;
        
        default:
            cout << "Por favor insira um valor valido!!!" << endl;
            break;
        }
    }while (option != 0);

    cout << "Fim da pilha";
    return 0;
}

