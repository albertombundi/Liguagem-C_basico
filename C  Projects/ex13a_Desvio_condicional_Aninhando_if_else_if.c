int main(){
    
    float n1, n2;
    float media;
    printf("Digite a primeira nota: \n");
    scanf("%f", &n1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &n2);
    media = (n1 + n2) / 2.0;
    if (media >= 7.0) {
        printf("Aluno esta Aprovado! \n");
    } 
    else {
        if(media >= 5.0) {
            printf("Aluno esta em Recuperacao \n");
        }
        else { 
            printf("Aluno esta Reprovado... \n");

        }
            
    }
    return 0;
}