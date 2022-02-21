#include <stdio.h>

int quadra (int x) /* Calcula o quadrado de X */
{
	printf("O quadrado é %d\n", (x*x));
	return(0);
}

int main()
{
	int num;
	printf("Entre com um número: \n");
	scanf("%d",&num);
	quadra(num);
	return(0);
}
