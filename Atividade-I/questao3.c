#include <stdio.h>
#include <stdlib.h>

int main (){
  float v[3], soma=0; // declaração do vetor de notas, e a variavel para a soma
  float *media; //ponteiro da media
  int i;

  for (i=0; i<3; i++){
    printf ("Digite a Nota 1 do aluno: \n");
    scanf("%f",&v[i]); //recebe as notas
    soma = soma+v[i]; //soma a notas
  }

  *media=soma/3; //calcula a media

  if(*media < 4){ //Comparação da media
    printf("Aluno Reprovado com media %f \n", *media);
  } else if(*media >= 4 || *media <7){ //Comparação da media
    printf("Aluno na Final com media %f \n", *media);
  } else if(*media >=7){//Comparação da media
    printf("Aluno Aprovado com media %f \n", *media);

return 0;
}