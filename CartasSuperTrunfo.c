#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int Pturisticos1, Pturisticos2;
    float area1, pib1, area2, pib2, Dpopulacional1, Dpopulacional2, PIBperC1, PIBperC2;                         // duas cidades (por isso os sufixos 1/2)
    char nome1[80], nome2[80], estado1[40], codigo1[40], estado2[40], codigo2[40];
    unsigned long int populacao1, populacao2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    /*Analise das informações da primeira carta*/
    
    printf(":Cadastro das cidades: \nInsira as informações da primeira cidade a seguir. \n");

    printf("Insira o Estado da primeira cidade: \n");
    scanf("%s", &estado1);

    printf("Agora insira o Código da primeira cidade \n");
    scanf("%s", &codigo1);

    printf("Insira o nome da primeira cidade: \n");
    scanf(" %[^\n]", nome1);                    

    printf("Agora insira a população da primeira cidade: \n");
    scanf("%lu", &populacao1);

    printf("Agora insira a Área (KM²) da primeira cidade: \n");
    scanf("%f", &area1);

    printf("Agora insira o PIB da primeira cidade: \n");
    scanf("%f", &pib1);

    printf("Agora, para finalizar, digite o número de Pontos Turísticos da primeira cidade: \n");
    scanf("%d", &Pturisticos1);

    /*Analise das informações da segunda carta*/

    printf(" Muito bem, agora defina os dados da segunda cidade a seguir!\n");  // Aqui começam a ser definidos os dados da segunda carta

    printf("Insira o Estado da segunda cidade: \n");
    scanf("%s", &estado2);

    printf("Agora insira o Código da segunda cidade: \n");
    scanf("%s", &codigo2);

    printf("Agora insira o nome da segunda cidade: \n");
    scanf(" %[^\n]", nome2);

    printf("Agora insira a população da segunda cidade: \n");
    scanf("%lu", &populacao2);

    printf("Agora insira a Área (KM²) da segunda cidade: \n");
    scanf("%f", &area2);

    printf("Agora insira o PIB da segunda cidade: \n");
    scanf("%f", &pib2);

    printf("Agora, para finalizar, digite o número de Pontos Turísticos da segunda cidade: \n");
    scanf("%d", &Pturisticos2);

    /*Calculo das informações adicionais (Densidade populacional/PIB per Capita.)*/

    /*Primeira Carta*/

    if (area1 > 0){
        Dpopulacional1 = populacao1 / area1;
    }else{
        Dpopulacional1 = 0.0f;
        printf("⚠️ Atenção: Área da Carta 1 é zero! Densidade Populacional definida como 0. \n");
    }

    PIBperC1 = pib1 / populacao1;

    /*Segunda Carta*/

    if (area1 > 0){
        Dpopulacional2 = populacao2 / area2;
    }else{
        Dpopulacional2 = 0.0f;
        printf("⚠️ Atenção: Área da Carta 2 é zero! Densidade Populacional definida como 0. \n");
    }

    PIBperC2 = populacao2 / area2;

    printf("--------------------------------------------------------- \n \n"); //Deixa a exibição mais legível.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta 1: \n \n");                                //Exibe o cabeçalho da tela de visualização da primeira carta.
    printf("Estado: %s \n", estado1);                                   //Exibe o estado da primeira carta.
    printf("Código: %s \n", codigo1);                                //Exibe o Código da primeira carta.
    printf("Nome da cidade: %s \n", nome1);                   //Exibe o nome definido para a primeira carta.
    printf("Populacão: %d \n", populacao1);                  //Exibe o número populacional definido para a primeira carta.
    printf("Área : %f KM² \n", area1);                        //Exibe a área definida para a primeira carta.
    printf("PIB: R$ %.2f \n", pib1);                           //Exibe o PIB definido para a primeira carta.
    printf("Pontos Turísticos: %d \n", Pturisticos1);        //Exibe o número de pontos turísticos definido para a primeira carta.
    printf("Densidade Populacional: %f hab/KM² \n", Dpopulacional1); //Exibe a Densidade Populacional calculada da primeira carta.
    printf("PIB per Capita: R$ %.2f \n \n", PIBperC1);           //Exibe o PIB per Capita calculado da primeira carta.
    printf("Carta 2: \n \n");                                   //Exibe o cabeçalho da tela de visualização da segunda carta.
    printf("Estado: %s \n", estado2);                                   //Exibe o estado da cidade.
    printf("Código: %s \n", codigo2);                                //Exibe o Código da segunda carta.
    printf("Nome da cidade: %s \n", nome2);                   //Exibe o nome definido para a segunda carta.
    printf("Populacão: %d \n", populacao2);                  //Exibe o número populacional definido para a segunda carta.
    printf("Área : %f KM² \n", area2);                         //Exibe a área definida para a segunda carta.
    printf("PIB: R$ %.2f \n", pib2);                            //Exibe o PIB definido para a segunda carta.
    printf("Pontos Turísticos: %d \n", Pturisticos2);         //Exibe o número de pontos turísticos definido para a segunda carta.
    printf("Densidade Populacional: %f hab/KM² \n", Dpopulacional2); //Exibe a Densidade Populacional calculada da segunda carta.
    printf("PIB per Capita: R$ %.2f \n \n", PIBperC2);                //Exibe o PIB per Capita calculado da segunda carta.

    return 0;
}
// Exemplo para Densidade Populacional (após ler populacao1 e area1):if (area1 > 0) {    Dpopulacional1 = (float)populacao1 / area1;} else {    Dpopulacional1 = 0.0f; // Atribui 0 ou outro valor para indicar que não pôde ser calculado    printf("⚠️ Atenção: Área da Carta 1 é zero! Densidade Populacional definida como 0.\\n");}// Exemplo para PIB Per Capita (após ler pib1 e populacao1):if (populacao1 > 0) {    PIBperC1 = (pib1 * 1000000000.0f) / (float)populacao1; // Com a escala do PIB} else {    PIBperC1 = 0.0f;    printf("⚠️ Atenção: População da Carta 1 é zero! PIB per Capita definido como 0.\\n");}   