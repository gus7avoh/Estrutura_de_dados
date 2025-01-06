#ifndef COMPLEMENTS_H
#define COMPLEMENTS_H

#include <string>

using namespace std;
// Verifica se uma string contém apenas números
int getNumber(const string& prompt);

// Limpa a tela (depende do sistema operacional)
void clear();

// Pergunta ao usuário uma questão e retorna true para "sim" e false para "não"
bool ask();

// Exibe um menu e retorna a escolha do usuário
int menu();

#endif // COMPLEMENTS_H

