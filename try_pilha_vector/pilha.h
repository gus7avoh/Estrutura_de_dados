#include <vector>
#include <iostream>
using namespace std;
class stack{
    private:
    const int max_itens = 100;
    vector <int> vetor;

    public:

    //criar o vetor
    stack();   
    //o vetor esta cheio
    bool isfull();
    //o vetor esta vazio
    bool isempty();
    //adicionar elementos ao vetor
    int push(int number);
    //remover elementos do vetor 
    int pop();
    //qual o tamanho do vetor
    int length();
    //mostrar o vetor
    void print();

};