#include <iostream>

using namespace std;

int main(){

    int a, b;

    int adicao, subtracao, multiplicacao;
    float divisao, resto;
   
    a = 5;
    b = 2;

    adicao = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;
    resto = a % b;
    
    cout <<" Adição "<< adicao << endl;
    cout <<" Subtração "<< subtracao << endl;
    cout <<" Multiplicação "<< multiplicacao << endl;
    cout <<" Divisão "<< divisao << endl;
    cout <<" Resto da divisão (módulo) "<< resto << endl;

    return 0;
}