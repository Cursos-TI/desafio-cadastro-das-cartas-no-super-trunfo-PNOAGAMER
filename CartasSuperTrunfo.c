#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int populacao1, Pturisticos1, populacao2, Pturisticos2; // Estabelece as variáveis de cada uma das
    float area1, pib1, area2, pib2;                         // duas cidades (por isso os sufixos 1/2)
    char nome1[80], nome2[80];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    /*Analise das informações da primeira carta*/

    printf(":Cadastro das cidades: \nInsira as informações da primeira cidade a seguir. \n");

    printf("Insira o nome da primeira cidade: \n");
    scanf("%s", &nome1);

    printf("Agora insira a população da primeira cidade: \n");
    scanf("%d", &populacao1);

    printf("Agora insira a Área (KM²) da primeira cidade: \n");
    scanf("%f", &area1);

    printf("Agora insira o PIB da primeira cidade: \n");
    scanf("%f", &pib1);

    printf("Agora, para finalizar, digite o número de Pontos Turísticos da primeira cidade: \n");
    scanf("%d", &Pturisticos1);

    /*Analise das informações da segunda carta*/

    printf(" Muito bem, agora defina os dados da segunda cidade a seguir!\n");  // Aqui começam a ser definidos os dados da segunda carta

   printf("Insira o nome da segunda cidade: \n");
    scanf("%s", &nome2);

    printf("Agora insira a população da segunda cidade: \n");
    scanf("%d", &populacao2);

    printf("Agora insira a Área (KM²) da segunda cidade: \n");
    scanf("%f", &area2);

    printf("Agora insira o PIB da segunda cidade: \n");
    scanf("%f", &pib2);

    printf("Agora, para finalizar, digite o número de Pontos Turísticos da segunda cidade: \n");
    scanf("%d", &Pturisticos2);

    printf("--------------------------------------------------------- \n \n"); //Deixa a exibição mais legível.

    /*Nível aventureiro*/

    //Carta 1

    float Dpopulacional1 = populacao1 / area1, Dpopulacional2 = populacao2 / area2;
    float PIBperC1 = pib1 / populacao1, PIBperC2 = pib2 / populacao2;
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta 1: \n \n");                                   //Exibe o cabeçalho da tela de visualização da primeira carta.
    printf("Estado: A \n");                                   //Exibe o estado da primeira carta.
    printf("Código: A01 \n");                                //Exibe o Código da primeira carta.
    printf("Nome da cidade: %s \n", nome1);                   //Exibe o nome definido para a primeira carta.
    printf("Populacão: %d \n", populacao1);                  //Exibe o número populacional definido para a primeira carta.
    printf("Área : %f KM² \n", area1);                         //Exibe a área definida para a primeira carta.
    printf("PIB: R$ %f \n", pib1);                            //Exibe o PIB definido para a primeira carta.
    printf("Pontos Turísticos: %d \n", Pturisticos1);      //Exibe o número de pontos turísticos definido para a primeira carta.
    printf("Densidade Populacional: %f hab/KM² \n", Dpopulacional1); //Exibe a Densidade Populacional calculada da primeira carta.
    printf("PIB per Capita: R$ %f \n \n", PIBperC1);           //Exibe o PIB per Capita calculado da primeira carta.
    printf("Carta 2: \n \n");                                   //Exibe o cabeçalho da tela de visualização da segunda carta.
    printf("Estado: B \n");                                   //Exibe o estado da cidade.
    printf("Código: B02 \n");                                //Exibe o Código da segunda carta.
    printf("Nome da cidade: %s \n", nome2);                   //Exibe o nome definido para a segunda carta.
    printf("Populacão: %d \n", populacao2);                  //Exibe o número populacional definido para a segunda carta.
    printf("Área : %f KM² \n", area2);                         //Exibe a área definida para a segunda carta.
    printf("PIB: R$ %f \n", pib2);                            //Exibe o PIB definido para a segunda carta.
    printf("Pontos Turísticos: %d \n", Pturisticos2);         //Exibe o número de pontos turísticos definido para a segunda carta.
    printf("Densidade Populacional: %f hab/KM² \n", Dpopulacional2); //Exibe a Densidade Populacional calculada da segunda carta.
    printf("PIB per Capita: R$ %f \n \n", PIBperC2);                //Exibe o PIB per Capita calculado da segunda carta.

    return 0;
}
