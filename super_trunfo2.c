#include <stdio.h>

int main () {
    char Estado = 'B';
    char Código [3] = "B02";
    char Cidade [20];
    int População = 67480000;
    float Área = 1200.25;
    float PIB = 300.50;
    int Pontos_Turísticos = 30;

    printf("Carta2\n");
    printf("Estado: %c\n", Estado);
    printf("Código da Carta: %s\n", Código);
    printf("Nome da Cidade: %s Rio de Janeiro\n", Cidade);
    printf("População: %d\n", População);
    printf("Área: %.2f km2\n", Área);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turísticos);

    return 0;
}
