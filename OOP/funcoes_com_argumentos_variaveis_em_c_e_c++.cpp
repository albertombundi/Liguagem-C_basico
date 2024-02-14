#include <iostream>
#include <conio.h>
#include <stdarg.h>

using namespace std;

  int soma(const int contador, ...);

  int main() {
    cout << soma(5, 3, 2, 5, 100, 1000);

    getch();
    return 0;
  }

  int soma( const int contador, ...) {

    va_list lista;
    int total = 0;

    va_start(lista, contador);
    for(int i = 0; i< contador; i++) {
       total += va_arg( lista, int);
    }
    va_end(lista);
    return total;
  }
