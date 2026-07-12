#include <stdio.h>

int main() {
	unsigned long int popul1,popul2; 									// mudado para long int
	int turismo1,turismo2;
	int populR,turismoR,areaR,pibR,densR,ppcR,poder;					// novas avriáveis para os resultados das comparações 
	float poder1,poder2; 												//mais variáveis novas
	float area1,pib1,area2,pib2,dens1,dens2,ppc1,ppc2; 					// novas variáveis adicionadas para densidade e pib per capita
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
	scanf("%lu",&popul1); // lendo o número da população
	
	printf("Digite a area (em km2): ");
	scanf("%f",&area1); // lendo o valor da área
	
	dens1 = popul1/area1; // calculando densidade populacional
	
	printf("Digite o PIB (em bilhoes): ");
	scanf("%f",&pib1); // lendo o valor do pib
	
	ppc1 = 1e9*pib1/popul1; // calculando pib per capita, convertendo para bilhões
	
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
	scanf("%lu",&popul2);
	
	printf("Digite a area (em km2): ");
	scanf("%f",&area2);
	
	dens2 = popul2/area2; // calculando densidade populacional
	
	printf("Digite o PIB (em bilhoes): ");
	scanf("%f",&pib2);
	
	ppc2 = 1e9*pib2/popul2; // calculando pib per capita
	
	printf("Digite o numero de pontos turisticos: ");
	scanf("%d",&turismo2);
	
	// fim do recolhimento dos dados da segunda carta

	printf("Carta 1:\n");
	printf("Estado: %c\n", estado1);
	printf("Codigo: %s\n", codigo1);
	printf("Nome da Cidade: %s\n", cidade1);
	printf("Populacao: %lu habitantes \n",popul1);
	printf("Area: %.2fkm2\n", area1);
	printf("PIB: %.2f bilhoes de reais\n", pib1);
	printf("Numero de pontos turisticos: %d\n",turismo1);
	printf("Densidade populacional: %.2f hab/km2\n",dens1); // exibindo a densidade calculada
	printf("PIB Per Capita: %.2f reais\n\n",ppc1); // exibindo o pib per capita calculado
	
	printf("\nCarta 2:\n");
	printf("Estado: %c\n", estado2);
	printf("Codigo: %s\n", codigo2);
	printf("Nome da Cidade: %s\n", cidade2);
	printf("Populacao: %lu habitantes \n",popul2);
	printf("Area: %.2fkm2\n", area2);
	printf("PIB: %.2f bilhoes de reais\n", pib2);
	printf("Numero de pontos turisticos: %d\n\n",turismo2);
	printf("Densidade populacional: %.2f hab/km2\n",dens2);
	printf("PIB Per Capita: %.2f reais\n\n",ppc2);

	// comparações de valores
	populR = popul1>popul2;
	areaR = area1>area2;
	pibR = pib1>pib2;
	turismoR = turismo1>turismo2;
	densR = dens2>dens1;
	ppcR=ppc1>ppc2;
	
	poder1=(float)popul1+area1+pib1+(float)turismo1+ppc1+(1.0f/dens1); // correção foi aqui
	poder2=(float)popul2+area2+pib2+(float)turismo2+ppc2+(1.0f/dens2); // e foi apenas o casting de turismo de int para float
	
	poder = (poder1>poder2);
	
	// exibição dos valores
	printf("Comparacao das Cartas:\n\n");
	
	printf("Populacao: Carta %d venceu (%d)\n",2-populR,populR);
	printf("Area: Carta %d venceu (%d)\n",2-areaR,areaR);
	printf("PIB: Carta %d venceu (%d)\n",2-pibR,pibR);
	printf("Pontos Turisticos: Carta %d venceu (%d)\n",2-turismoR,turismoR);
	printf("Densidade Populacional: Carta %d venceu (%d)\n",2-densR,densR);
	printf("PIB per Capita: Carta %d venceu (%d)\n",2-ppcR,ppcR);
	printf("Super Poder: Carta %d venceu (%d)\n",2-poder,poder);
	
	return 0;

}