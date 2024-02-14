#include <locale.h>

int main(){

    setlocale(LC_ALL, "");

    int *x, valor, y;
    valor = 35;
    x = &valor; // Atribuindo o endereço de valor a x;
    y = *x; // Atribuindo o conteudo da variavel apontada por x a y;

    printf("Endereco de uma variavel comoum valor: %p\n", &valor);
    printf("Lendo o conteudo do ponteiro x: %p\n", x);
    printf("Endereco da variavel ponteiro x: %p\n", &x);
    printf("Conteudo da variavel apontada por x: %d\n", *x);
    printf("Conteudo da variavel comum y: %d\n", y);


}