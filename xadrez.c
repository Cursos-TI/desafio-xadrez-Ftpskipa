#include <stdio.h>

int main()
{	
	const int movTorre = 5; // 5 casas para direita
	const int movBispo = 5; // 5 casas para cima direita
	const int movRainha = 8; // 8 casas para esquerda
	const int movCavaloBai = 2; // 2 casas para baixo
	const int movCavaloEsq = 1; // 1 casa para esquerda

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
	
	int movCavaloCompleto = 1;
	int moveuCavaloBai = 0;
	int moveuCavaloEsq = 0;
	printf("\nMovendo o Cavalo:\n");
	for (int i = 0; i < movCavaloCompleto; i++)
	{
		while(moveuCavaloBai < movCavaloBai)
		{
			printf("Baixo\n");
			moveuCavaloBai++;
		}

		do {
			printf("Esquerda\n");
			moveuCavaloEsq++;
		} while(moveuCavaloEsq < movCavaloEsq);
	}

	printf("\n");
	return 0;
}
