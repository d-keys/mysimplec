#include <stdio.h>

int main()
{
	int Dias;	/* Declaração de variáveis, nesse caso, 'Dias'. */
	float Anos;
	printf ("Entre com o número de dias: "); /*Entrada de dados.*/
		scanf ("%d",&Dias);
		Anos=Dias/365.25;	/*Conversão Dias -> Anos*/
	printf ("\n%d dias equivalem a %f anos.\n",Dias,Anos);
	return 0;
}
