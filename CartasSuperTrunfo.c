#include <stdio.h>


int main() {
    printf("Pronto para jogar Super Trunfo? Vamos lá!\n");

    char Cidade;
    float Populacao;
    float Area;
    float PIB;
    int Pontos_Turisticos;
 
    printf("Escolha uma cidade:\n");
    scanf("%s", &Cidade);

    printf("Qual a população?\n");
    scanf("%f", &Populacao);

    printf("Qual a Área?\n");
    scanf("%f", &Area);

    printf("Valor do PIB?\n", PIB);
    scanf("%f", &PIB);
    
    printf("Quantidade de Pontos Turisticos?\n", Pontos_Turisticos);
    scanf("%d", &Pontos_Turisticos);

    printf("Esta é sua carta:\n");

    return 0;
}

