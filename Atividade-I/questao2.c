#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fatoraPotencia(int numero, int *b, int *c){
	int i, l, valor=0; // contadores e variavel que receberá valores a serem comparados com o que o usuario informou
	int qq=numero*100; // Gerando um valor superior ao informado, sera usado para limitar o contador
	for (i=0; i<qq; i++){ // primeiro laço, para encontra a base
		for (l=0; l<qq; l++){ // Segundo laço para encontrar o expoente
			valor=pow(i,l); // Calcula a exponeciação
			if(valor==numero){ //compara se o resultado da exponeciação é o valor informado pelo usuário
				*b=i; // b recebe a base
				*c=l; // c recebe o expo
				break; // força a parada da função
			}
		}
	}

}

int main(){
	int a; 
	int *b=0, *c=0; // declaração das variaveis
	
	printf("\nDigite um numero: "); /
	scanf("%d", &a);
	
	fatoraPotencia(a, b, c);
	
	printf("\nBase |%d| Expoente |%d|", *b, *c); //print do resultado
	
	return 0;
}