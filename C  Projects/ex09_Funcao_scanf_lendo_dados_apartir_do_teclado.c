int main(){

    int inteiro1;
    float F1, F2;
    char letra;
    char frase[15];

    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro1);
    printf("Digite dois numero de ponto flutuante: ");
    scanf("%f%f", &F1, &F2);
    printf("Digite um caractere: ");
    scanf(" %c", &letra);
    printf("Digite uma frase: ");
    scanf("%s", &frase);


    printf("\nNumero inteiro: %d\n", inteiro1);
    printf("Ponto flutuante: %.2f e %.2f\n", F1, F2);
    printf("Caracter %c\n", letra);
    printf("Frase: %s\n\n", frase);

    return 0;
}