
#include <stdio.h>
#include <conio.h>

int main( void ) {

    char nome[30];
    
    printf(" Qual seu nome?: ");
    gets( nome );
    

    printf(" O nome digitado foi %s", nome );
    

    return 0;
}

/*
#include <iostream>

using namespace std;

int main() {

    int valor;

    cout << "Qual o valor? ";

    cin >> valor;

    cout << "O valor digitado foi "<< valor << endl;

    return 0;
}
*/
