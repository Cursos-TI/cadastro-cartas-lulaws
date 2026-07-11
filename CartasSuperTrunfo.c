#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
	int popul1,turismo1,popul2,turismo2;
	float area1,pib1,area2,pib2;
	char cidade1[25],estado1,codigo1[5],cidade2[25],estado2,codigo2[5]; // Tamanhos variados para as arrays, mas estado é só uma letra
	
	// fim da declaração de variáveis inicial
	
	printf("Cadastro da Primeira Carta\n\n");
	
	printf("Digite o estado (A ate H): ");
	scanf(" %c", &estado1); // lendo o estado
	
	printf("Digite o codigo da carta (Letra + Numero, por exemplo: B03): ");
	scanf("%s",codigo1); // lendo o código, não precisa de & por ser uma array de caracteres
	
	printf("Digite o nome da cidade: ");
	scanf("%s",cidade1); // lendo o nome da cidade, não precisa de & por ser uma array de caracteres
	
	printf("Digite a populacao: ");
	scanf("%d",&popul1); // lendo o número da população
	
	printf("Digite a area (em km2): ");
	scanf("%f",&area1); // lendo o valor da área
	
	printf("Digite o PIB (em bilhoes): ");
	scanf("%f",&pib1); // lendo o valor do pib
	
	printf("Digite o numero de pontos turisticos: ");
	scanf("%d",&turismo1); // lendo o número de pontos turísticos
	
	// fim do recolhimento dos dados da primeira carta
	
	printf("Cadastro da Segunda Carta\n\n");
	
	printf("Digite o estado (A ate H): ");
	scanf(" %c", &estado2);
		
	printf("Digite o codigo da carta (Letra + Numero, por exemplo: B03): ");
	scanf("%s",codigo2);
	
	printf("Digite o nome da cidade: ");
	scanf("%s",cidade2);
	
	printf("Digite a populacao: ");
	scanf("%d",&popul2);
	
	printf("Digite a area (em km2): ");
	scanf("%f",&area2);
	
	printf("Digite o PIB (em bilhoes): ");
	scanf("%f",&pib2);
	
	printf("Digite o numero de pontos turisticos: ");
	scanf("%d",&turismo2);
	
	// fim do recolhimento dos dados da segunda carta

	printf("Carta 1:\n");
	printf("Estado: %c\n", estado1);
	printf("Codigo: %s\n", codigo1);
	printf("Nome da Cidade: %s\n", cidade1);
	printf("Populacao: %d habitantes \n",popul1);
	printf("Area: %.2fkm2\n", area1);
	printf("PIB: %.2f bilhoes de reais\n", pib1);
	printf("Numero de pontos turisticos: %d\n\n",turismo1);
	
	printf("\nCarta 2:\n");
	printf("Estado: %c\n", estado2);
	printf("Codigo: %s\n", codigo2);
	printf("Nome da Cidade: %s\n", cidade2);
	printf("Populacao: %d habitantes \n",popul2);
	printf("Area: %.2fkm2\n", area2);
	printf("PIB: %.2f bilhoes de reais\n", pib2);
	printf("Numero de pontos turisticos: %d\n\n",turismo2);

}