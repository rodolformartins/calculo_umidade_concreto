#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(void){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, "C");
    float areiaMedia, poDePedra, areiaFina, somaAreiaMedia, somaPoDePedra, somaAreiaFina;
    float mediaAreiaMedia, mediaPoDePedra, mediaAreiaFina;
    //váriaveis que irão armazenar a umidade
    float umidadeAreiaMedia, umidadePoDePedra, umidadeAreiaFina;
    //váriaveis que irão armazenar valor final da média calculada x valor da umidade de cada agregado.
    float agregadoAreiaMedia, agregadoPodePedra, agregadoAreiaFina, somaTotalUmidade, somaTotalMedia, resultadoFinal;
    int cond, mediaTracos;

    system("cls");
    printf("\n********************Pre Faz - Programa para calcular umidade do concreto**********************************");

    cond = 1;
    while(cond != 2){
        printf("\n\nQual a quantidade em kg/m³ da Areia Média? ");
        scanf("%f", &areiaMedia);
        somaAreiaMedia = areiaMedia + somaAreiaMedia;

        printf("\nQual a quantidade em kg/m³ do Pó de pedra? ");
        scanf("%f", &poDePedra);
        somaPoDePedra = poDePedra + somaPoDePedra;

        printf("\nQual a quantidade em kg/m³ da Areia Fina? ");
        scanf("%f", &areiaFina);
        somaAreiaFina = areiaFina + somaAreiaFina;

        printf("\nExiste mais algum agregado para calcular? se sim, digite 1 se não digite 2 : ");
        scanf("%d", &cond);
    }
    printf("\nExibir valor areia média %.2f", somaAreiaMedia);
    printf("\nExibir valor areia média %.2f", somaPoDePedra);
    printf("\nExibir valor areia média %.2f", somaAreiaFina);

    printf("\n\nQual a media de traços do concreto?");
    scanf("%d", &mediaTracos);
    mediaAreiaMedia = somaAreiaMedia / mediaTracos;
    mediaPoDePedra = somaPoDePedra / mediaTracos;
    mediaAreiaFina = somaAreiaFina / mediaTracos;

    printf("\nExibir média calculada - Areia Média: %.2f", mediaAreiaMedia);

    printf("\nExibir média calculada - Pó de Pedra: %.2f", mediaPoDePedra);

    printf("\nExibir média calculada - Areia fina: %.2f", mediaAreiaFina);


    printf("\nOBSERVAÇÃO USAR PONTO, NÃO USAR VÍRGULA!");
    printf("\nDigite a umidade da areia média: ");
    scanf("%f", &umidadeAreiaMedia);
    printf("\nDigite a umidade do pó de pedra: ");
    scanf("%f", &umidadePoDePedra);
    printf("\nDigite a umidade da areia fina: ");
    scanf("%f", &umidadeAreiaFina);

    agregadoAreiaMedia = mediaAreiaMedia * umidadeAreiaMedia;
    agregadoPodePedra = mediaPoDePedra * umidadePoDePedra;
    agregadoAreiaFina = mediaAreiaFina * umidadeAreiaFina;

    printf("\nMédias multiplicadas pela umidade:");
    printf("\nAreia Média: %.2f", agregadoAreiaMedia);
    printf("\nPó de pedra: %.2f", agregadoPodePedra);
    printf("\nAreia Média: %.2f", agregadoAreiaFina);

    somaTotalUmidade = agregadoAreiaMedia + agregadoPodePedra + agregadoAreiaFina;

    somaTotalMedia = mediaAreiaMedia + mediaPoDePedra + mediaAreiaFina;

    resultadoFinal = somaTotalUmidade / somaTotalMedia;
    system("cls");
    printf("\n********************Pre Faz - Programa para calcular umidade do concreto**********************************");
    printf("\n\nA umidade do concreto é: %.2f", resultadoFinal);

    return(0);
}