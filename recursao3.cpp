#include<stdio.h>

 int fatorial(int numero)
{
	
	printf("%d\n",numero);
	if(numero==0)
	{
		return 1;
	}else
	{
		
		return(numero*fatorial(numero-1));
	}
}


int main()
{
	int aux;
	aux=fatorial(10);
	printf("aux=%d\n",aux);
	
	return 0;
}
