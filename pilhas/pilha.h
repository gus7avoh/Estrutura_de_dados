typedef int Itemtype; // basicamente criou uma variavel para o inteiro, assim caso queira trocar o tipo das outras variaveis eh so procar o tipo do TipoItem

const int max_itens = 100; //macimo de elementos da pilha

class stack {// pilha
private:
    Itemtype size;
    Itemtype* structure;

public:
    stack(); //funcao construtura
    ~stack(); //funcao destrutora
    bool isfull(); //verifica se a pilha esta cheia
    bool isempty(); //verifica se a pilha esta vazia
    void push(Itemtype item);
    Itemtype pop();
    void print();
    int length();

};

