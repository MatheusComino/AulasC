#include <stdio.h>


int numero1;

int main(){
    printf("Matheus Henrique Comino da Silva\n");
    printf("Escola Senai Euclides Facchini Votuporanga\n");

    char *meses[20];
    meses[0] = "Janeiro";
    meses[1] = "Fevereiro";
    meses[2] = "Março";
    meses[3] = "Abril";
    meses[4] = "Maio";
    meses[5] = "Junho";
    meses[6] = "Julho";
    meses[7] = "Agosto";
    meses[8] = "Setembro";
    meses[9] = "Outubro";
    meses[10] = "Novembro";
    meses[11] = "Dezembro";

    printf("Digite um numero inteiro de 1 a 12 correspondente ao mes desejado: ");
    scanf("%d", &numero1);

    if(numero1 <= 12){
        printf("O numero corresponde ao mes de: %s", meses[numero1 - 1]);
    }
    else{
        printf("O numero nao corresponde a nenhum mes do ano");
    }
    

}