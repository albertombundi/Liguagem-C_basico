#include <locale.h>

int main(){

setlocale(LC_ALL, "");

int a = 40;
int *pont1;
int **pont2;

pont1 = &a;
pont2 = &pont1;
printf("O endereco da variavel a e: %p\n", &a);
printf("O endereco do ponteiro pont1 e: %p\n", &pont1);
printf("O endereco do ponteiro pont2 e: %p\n", &pont2);
printf("O endereco apontado por pont1 e: %p\n", pont1);
printf("O endereco apontado por pont2 e: %p\n", pont2);
printf("E o valor armazenado em a e: %d\n", **pont2);

return 0;

}