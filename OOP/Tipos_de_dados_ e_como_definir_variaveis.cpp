// C
/*
#include <stdio.h>

int main( void ) {

    char nome[ 30 ] = " Daves ";

    printf(" O valor do nome é %s\n ", nome);

}
*/


// C
#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int numero = 10;

    float pi = 3.1415;

    double numero_maior = 999999999999999999999999999999999999999999.999;

    char letra = 'a';

    string nome = " Daves ";
    
    cout << "O numero é " << numero << endl;

    cout << "O valor de PI é " << pi;

    cout << "\nO número gigante é " << numero_maior << endl;

    cout << "A letra é " << letra << endl;

    cout << "O nome é " << nome << endl;

    return 0;

}