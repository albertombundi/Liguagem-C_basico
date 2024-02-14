int main(){

   int x, y, z, w;

    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite o valor a somar: ");
    scanf("%d", &y);

    z = x + y;
    w = pow(x, 3);
    printf("\nA soma de %d com %d equivale a %d\n", x, y, z, w);
    printf("\n%d elevado ao cubo e igual a: %d\n", x, w);

    return 0;
}
