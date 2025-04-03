#include <stdio.h>

void moverTorre(int direita)
{
	if (direita > 0)
	{
		printf("Direita\n");
		moverTorre(direita - 1);
	}
}

void moverBispo(int cimaEsquerda)
{
	for (int i = 0; i < 1 && cimaEsquerda > 0; i++)
	{
		printf("Cima, ");
		for (int j = 0; j < 1 && cimaEsquerda > 0; j++)
		{
			printf("Direita\n");
		}
	}
	if (cimaEsquerda > 0)
		moverBispo(cimaEsquerda - 1);
}

void moverRainha(int esquerda)
{
	if (esquerda > 0)
	{	
		printf("Esquerda\n");
		moverRainha(esquerda - 1);
	}
}

int main()
{	
	printf("\nMovendo torre:\n");
	moverTorre(5);
	printf("\nMovendo bispo:\n");
	moverBispo(5);
	printf("\nMovendo rainha:\n");
	moverRainha(8);

	printf("\nMovendo cavalo: \n");
	int mvCavaloCima = 2;
	int mvCavaloDireita = 1;
	for (int i = 0; i < (mvCavaloCima + mvCavaloDireita); i++)
	{
		if (i < mvCavaloCima)
		{
			printf("Cima\n");
		} else {
			for (int j = 0; j < mvCavaloDireita; j++)
			{
				printf("Direita\n");
			}
		}
	}

	printf("\n");
	return 0;
}
