#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int num=0, par=0, impar=0, soma_par=0, soma_impar=0, quant=0, maior=0; 
	float media=0;
	
	do
	{
		printf("Informe um n%cmero: ", 163);
		scanf("%d", &num);
		
		quant++;
		
		if(num % 2 == 0)
		{
			par++;
			soma_par += num;
		}
		else
		{
			impar++;
			soma_impar += num;
			media = soma_impar/impar;
		}
		
		if(quant==0)
		{
			maior = num;
		}	
		else if(maior < num)
		{
			maior = num;
		}
				
	} while(num!=0);

	printf ( "\nA quantidade de n%cmeros digitados %c: %d \n", 163, 130, quant);
	printf ( "\nA soma dos n%cmeros pares %c: %d \n", 163, 130, soma_par); 
	printf ( "\nA m%cdia dos n%cmero impares %c: %.2f \n", 130, 163, 130, media); 
	printf ( "\nO maior n%cmero %c: %d \n\n", 163, 130, maior);	
	
	system ("pause");
	return (0);
}

