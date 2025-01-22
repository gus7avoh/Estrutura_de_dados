#include <iostream>
#include <vector>
using namespace std;

int main(){

vector < int> oi;
oi[0] = 1;
oi[1] = 2;
oi[2] = 3;

for ( int a : oi){
    cout <<  a << " ";
}

    return 0;
}