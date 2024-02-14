int main(){
    
    int cont;
    float nota, media, total;
    total = 0;
    for(cont=1; cont<=4; cont++) {
        printf("digite a nota: ");
        scanf("%f", &nota);
        total = total + nota;
    }
    media = total / 4;
    printf("Nota media : %.2f\n", media);

    return 0;

}