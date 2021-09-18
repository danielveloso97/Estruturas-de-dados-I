#include <stdio.h>
#include <stdlib.h>

double media(double vet[], int n, int* i){ //Assinatura da função
  int j, k=0; // J e k são contadores
  float somaVetor=0, mediaVetor=0; //Receberão a soma e a média do vetor, iniciado com 0, para nãoo pegar lixo de memória
  float maisp[n], menor; // variável para determinar o valor mais próxImo, e o menor valor

  for (j=0; j<n; j++){
    somaVetor=somaVetor+vet[j]; //Somando os valores do vetor
  }
	
  mediaVetor= somaVetor/n;
  
  for (j=0; j<n; j++){
    maisp[k]= vet[j]-mediaVetor; //subtraindo os valores do vetor pelo valor da média, o valor mais aproximado de 0 é o valor mais próximo
    k++; //contador, para não correr o risco do contador pegar buffer
  }
  
  for (j=0; j<n; j++){
    printf("\n|%f| ", maisp[j]);
  }

  menor = maisp[0]; //iniciando menor com o primeiro valor do vetor maisp

  k=0; //zerando k
  for (j=0; j<n; j++){
    if(menor >= maisp[j]){ // Verificando qual valor é o menor do vetor de subtrações
      menor = maisp[j];
      *i = k; //Salvando índice do vetor
    }
    k++; //incrementando k para a próxima repetição do For
  }

  return mediaVetor;
}

int main () {
  int n, l; // N é o tamanho do vetor, L um contador
  int *i; //*i é a variável de referência
  float a=5.0; //usado para inicializar o random de float, o 5.0 é aleatorio
  double resultado;

  printf("\n Informe o tamanho do vetor: ");
  scanf("%d",&n); // Recebe o tamanho do vetor informado pelo usuário
  double vet[n]; // criando e definindo tamanho do vetor double

  for (l=0; l<n; l++){
    vet[l] = (((double)rand()/(double)(RAND_MAX))* a); // Definindo valores floats para o vetor, de forma aleatória
  }
  
  for (l=0; l<n; l++){
    printf("\n |%lf| ",vet[l]);
  }

  resultado= media(vet, n, i); // chamando a função e recebendo o resultado da média e o índice do vetor
  
  printf("\nMedia do Vetor %lf e indice do valor mais proximo %d", resultado, *i); //chamando a função média

  return 0;
}