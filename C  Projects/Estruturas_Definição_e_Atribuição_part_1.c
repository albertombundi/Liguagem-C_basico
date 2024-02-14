#include <locale.h>

struct livro {
    char nome[30];
    char autor[50];
    int paginas;
    float preco;

};

struct livro livro1;
int main(){

    setlacale(LC_ALL, "");
    printf("Cadastrando o livros\n"); 
}