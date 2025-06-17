#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Desafio Super Trunfo!\n");
    printf("Você deve cadastrar duas cartas\n");
    printf("Cadastre a primeira carta:\n");
    
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int npt1, npt2;

    // Calculo da Densidade populacional
    float dspop1, dspop2;
    float pibpc1, pibpc2;

    // Cadastrar a primeira carta
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Números de pontos turísticos: ");
    scanf("%d", &npt1);

    // Cadastrar a segunda carta
    printf("Primeira carta cadastrada com sucesso!\n");
    printf("Agora, cadastre a segunda carta:\n");
   
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Números de pontos turísticos: ");
    scanf("%d", &npt2);

    printf("Segunda carta cadastrada com sucesso!\n");

    //Mostra a carta cadastrada 01    
    printf("\n");
    printf("\n");
    printf("CARTA 01\n");
    printf("Estado: A\n");
    printf("Código: A01\n");
    printf("Nome da Cidade: São Paulo\n");
    printf("População: %d \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Números de pontos turísticos: %d \n", npt1);
    // Calculo da Densidade populacional
    dspop1 = (float) populacao1 / area1;
    printf("Densidade Populacional: %.2f \n", dspop1);
    // Calculo do PIB per Capita
    pibpc1 = (float) pib1 / populacao1;
    printf("PIB per capita: %.2f \n", pibpc1);
    

    //Mostra a carta cadastrada 02
    printf("\n");
    printf("\n");
    printf("CARTA 02\n");
    printf("Estado: B\n");
    printf("Código: B01\n");
    printf("Nome da Cidade: Recife\n");
    printf("População: %d \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Números de pontos turísticos: %d \n", npt2);
    // Calculo da Densidade populacional
    dspop2 = (float) populacao2 / area2;
    printf("Densidade Populacional: %.2f \n", dspop2);
    // Calculo do PIB per Capita
    pibpc2 = (float) pib2 / populacao2;
    printf("PIB per capita: %.2f \n", pibpc2);


    //Comparação de cartas
    printf("\n");
    printf("\n");
    printf("Comparação de cartas - Atributo: População\n");
    printf("CARTA 01 - São Paulo: %d \n", populacao1);
    printf("CARTA 02 - Recife: %d \n", populacao2);
    if (populacao1 > populacao2){
        printf("Resultado: CARTA 01 - VENCEU!!!!\n");
    }else{
        printf("Resultado: CARTA 02 - VENCEU!!!!\n");
    } 
    }


    



    return 0;
}
