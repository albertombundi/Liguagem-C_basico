
int main(){

int dia, mes, ano;

printf("Digite uma data no formato dd/mm/aa: ");

    scanf("%d%*c%d%*c%d", &dia, &mes, &ano);
    printf("\nDia: %d \n", dia);
    printf("\nMes: %d \n", mes);
    printf("\nAno: %d \n", ano);

    return 0;           
}