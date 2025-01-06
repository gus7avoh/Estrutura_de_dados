#include <iostream>
#include <vector>

using namespace std;

class circulo{
    private:
        const int max_itens = 5;
        int now = 5;
        int fi = 5;
        vector <int> clock {00,00,00,00,00};
        int start = 0;

    public:

        circulo();

        //verifica o ultimo elemento do relogio
        int currently();

        //verifica o primeiro elemento do relogio
        int first();

        void nowplus();

        void fiplus();

        void push(int value);

        int pop();

        bool isfull();

        int length();

        bool isempty();

        void print();

};