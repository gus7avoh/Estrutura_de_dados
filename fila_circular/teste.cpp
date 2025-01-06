#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vetor;
    vetor.reserve(5);
    vetor[0] = 0;
    for (int i =0 ; i< 5 ; i++ ){
        cout << vetor[i] << " ";
    }
    cout << "\n terminou" << endl;
    return 0;
}