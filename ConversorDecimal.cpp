#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


//função para converter o numero decimal em binario
void conversor(int decimal, int i)
{
	
	int binario[i];
	int numAtual = decimal;
	
	// loop para que o calculo seja feito e a cada iteração seja adicionado um dos digitos pertencentes ao número binario ao vetor.
	for(int j = 0; j <= i; j++ ){
		binario[j] = decimal % 2;
		decimal /= 2;
	}
	printf("\n===================================================");
	printf("\n%d convertido para binario eh: ", numAtual);
	
	//loop para que o numero binario alocado no vetor seja exibido.
	for(int j = i - 1; j >= 0; j--){
		printf("%d", binario[j]);
	}
	printf("\n===================================================");
	
	printf("\n\n");
}

// função para descobrir o numero de casas serão necessarias para o vetor.
int verificaIndice(int decimal)
{
	int i = 0;
	
	while(decimal > 0) // divite e adiciona +1 ao indice enquanto o numero a ser dividido for maior que 0.
	{	
		decimal = decimal / 2;
		i++;		
	}
	
	return i;
}

main(void)
{
	
	//declaração de variáveis
	bool repete = true;
	int decimal;
	
	
	//loop para que o usuário escolha se quer continuar verificando outros numeros decimais e convertendo em binário.
	while(repete != false){
		
		int resp = 0;
		
		printf("----CONVERSOR DE DECIMAL PARA BINARIO----\n");
		printf("\ninforme um numero decimal: ");
		scanf("%d", &decimal);
		
		int i = verificaIndice(decimal);
		
		conversor(decimal, i); //executa a função de converção de decimal para binário.
		
		//repete esse bloqco de codigo enquanto a resposta for diferente de 1 ou 2.
		while(resp != 1 && resp != 2){
			
			printf("\n deseja verificar outro numero?\n\n [1]sim / [2]nao");
			printf("\n resposta: ");
			scanf("%d", &resp);
			
			if (resp != 1 && resp != 2){
				printf("\nOpcao invalida!\n");
			}
		}
		if (resp == 2){
			repete = false;
		}
				
	}	
}
