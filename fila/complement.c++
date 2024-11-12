#include <iostream>
#include <string>
#include <cctype> 
#include "complement.h"

using namespace std;

int getNumber(const std::string& prompt){
    int number;

    while(true){
        cout << prompt;
        cin >> number;
        if(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            clear();
            cout << "Valor invalido, digite novamente!\n" << endl;
        }else{
            return number;
        }
    }
    
}

void clear(){
    system("cls");
}

bool ask(){
    string answer;

    while ((true))
    {
        cout << "\n\nQuer adicionar outro numero (S/N)?  ";
        cin >> answer;

        for (char &c : answer) {
            c = toupper(c);
        }
        if (answer == "S" || answer == "SIM") {
            return true;
            break;
        } else if (answer == "N" || answer == "NAO") {
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
        cout << "1 - Adicionar um valor a fila" << endl;
        cout << "2 - Remover um valor da fila" << endl;
        cout << "3 - Ver a fila" << endl;
        cout << "4 - Tamanho da fila" << endl;
        cout << "5 - Ver elementos excluidos\n" << endl;
        indice = getNumber("--> ");

        if (indice < 0 || indice > 5) {
            validacao = false;
        }
        else {
            validacao = true;
        }
    } while (!validacao);

    return indice;
}

