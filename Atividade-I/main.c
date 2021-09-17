#include <stdio.h>
#include <stdlib.h>

double media(double vet[], int n, int* i){ //Assinatura da função
  int j, k=0; // J é um contador
  float somaVetor=0, mediaVetor=0; //Receberá a soma e a media do vetor, iniciado com 0, para não pegar lixo de memoria
  float maisp[n], menor; // variavel para determinar o valor mais proxímo, e o menor valor
  printf("jjjjjjj");
  for (j=0; j<n; j++){
    somaVetor+=vet[j]; //Somando os valores do vetor
  }
  printf("---------%f ", mediaVetor=somaVetor/n); // calculando a media do vetor

  for (j=0; j<n; j++){
    maisp[k]= mediaVetor = vet[j]; //subtraindo os valores do vetor pelo valor da media, o valor mais aproximado de 0 é o valor mais proximo
    k++; //contador, para não correr o risco do contador pegar buffer
  }

  menor = maisp[0]; //iniciando menor com o primeiro valor do vetor maisp

  k=0; //zerando k
  for (j=0; j<n; j++){
    if(menor >= maisp[j]){ // Verificando qual valor é o menor do vetor de subtrações
      menor = maisp[j];
      *i = k; //Salvando indice do vetor
      k++; //incrementando k para a próxima repetição do For
    }
  }

  printf("%d", *i);

  return mediaVetor;
}

int main () {
  int n, l; // N é o tamanho do vetor, l é um contador
  int *i; //*i é a variavel de referencia
  float a=5.0; //usado para incializar o random de float, o 5.0 é aleatorio
  double resultado;

  printf("\n Informe o tamanho do vetor: ");
  scanf("%d",&n); // Recebe o tamanho do vetor informado pelo usuário
  printf("fffff");
  double vet[n]; // criando e definindo tamanho do vetor double

  printf("fffff");
  for (l=0; l<n; l++){
    vet[l] = (((float)rand()/(float)(RAND_MAX))* a); // Definindo valores floats para o vetor, de forma aleatoria
  }
  printf("fffff");
  resultado= media(vet, n, i); // chamando a função e recebendo o resultado da media e o indice do vetor
  printf("fffff");
  printf("Media do Vetor %lf e indice do valor mais proximo %d", resultado, *i); //chamando a função media

  return 0;
}
