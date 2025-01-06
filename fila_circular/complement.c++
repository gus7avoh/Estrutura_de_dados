#include <iostream>
#include <string>
#include <cctype> 
#include "complement.h"

using namespace std;

int getNumber(const string& prompt){
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
        cout << "1 - Adicionar um valor ao relogio" << endl;
        cout << "2 - Remover um valor ao relogio" << endl;
        cout << "3 - Ver o relogio" << endl;
        cout << "4 - Tamanho do relogio" << endl;
        indice = getNumber("--> ");

        if (indice < 0 || indice > 4) {
            validacao = false;
        }
        else {
            validacao = true;
        }
    } while (!validacao);

    return indice;
}


