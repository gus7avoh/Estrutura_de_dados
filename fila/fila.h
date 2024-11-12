#include <vector>
#include <iostream>
using namespace std;

class fila{
    private:
        const int max_itens = 100;
        vector <int> queue;
        vector <int> delQueue;

    public:

        fila();

        void push(int value);

        int pop();

        bool isfull();

        bool isempty();

        int length();

        void print();

        void delElements();

};
