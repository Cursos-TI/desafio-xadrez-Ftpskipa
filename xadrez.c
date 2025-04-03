#include <stdio.h>

int main()
{	
	const int movTorre = 5; // 5 casas para direita
	const int movBispo = 5; // 5 casas para cima direita
	const int movRainha = 8; // 8 casas para esquerda

	printf("\nMovimentando a Torre:\n");
	for (int i = 0; i < movTorre; i++)
		printf("Direita\n");
	
	printf("\nMovimentando o Bispo:\n");
	int moveuBispo = 0;
	while (moveuBispo < movBispo)
	{
		printf("Cima Direita\n");
		moveuBispo++;
	}
	
	printf("\nMovimentando a Rainha:\n");
	int moveuRainha = 0;
	do {
		printf("Esquerda\n");
		moveuRainha++;
	} while(moveuRainha < movRainha);
	
	printf("\n");
	return 0;
}
