#include <stdio.h>
#include "funcoes.h"

float mediar = 0.0;
int i;

//Recebe os alunos e armazena
void recebeDados(Estudante v[], int tam){
  int i;


  // Estrutura de dados por aluno
  for(i = 0; i < tam; i++){

  do{ //Recebe e verifica a idade do estudante
   printf("Entre com a idade do estudante %d: ", i + 1);
    scanf("%d", &v[i].idade);
     } while (v[i].idade <= 0);

    
    do{//fazendo a verificação da entrada da média 1
      printf("Entre com a média 1 do estudante %d: ", i + 1);
       scanf("%f", &v[i].medias[0]);
        } while (v[i].medias[0]<0 || v[i].medias[0]>10 );

    //fazendo a verificação da entrada da média 2
    do{
      printf("Entre com a média 2 do estudante %d: ", i + 1);
      scanf("%f", &v[i].medias[1]);
    }while(v[i].medias[1] < 0.0 || v[i].medias[1] > 10.0);
    
    //fazendo a verificação da entrada da frequência
    do{
      printf("Entre com a frequência do estudante %d: ", i + 1);
      scanf("%f", &v[i].frequencia);
    }while(v[i].frequencia < 0.0 || v[i].frequencia > 100.0);

    v[i].mediaFinal = calculaMediaFinal(v[i]);//preenchendo a variável do respectivo aluno com a média final
    printf("\n\n");
  }
}

// Função que apresenta o menu na tela
void apresentaMenu(void){
   // Opções do menu
    printf("Opção 1: Média de idade da turma;");
    printf("\nOpção 2: Média de frequência da turma;");
    printf("\nOpção 3: Quantidade de reprovados por frequência;");
    printf("\nOpção 4: Quantidade de aprovados por média final;");
    printf("\nOpção 5: Média da Média Final da turma;");
    printf("\nOpção 6: Maior Média Final da turma;");
    printf("\nOpção 7: Menor Média Final da turma;");
    printf("\nOpção 8: Finaliza o programa.");
    printf("\nEntre com o opção desejada: \n");
}

// Função que calcula a média de idade entre os estudantes
float mediaIdade(Estudante v[], int tam){

float aux=0;

  for( i=0; i<tam ; i++ ){
  aux = aux + v[i].idade;}

  mediar = aux/tam;
  
  return mediar/tam;
}

// Função que retorna a média de frequência dos estudantes
float mediaFrequencia(Estudante v[], int tam){

float aux=0;

  for(i = 0; i < tam; i++){

    aux = aux + v[i].frequencia;
  }

  mediar = aux/tam;

  return mediar;
}

// Função que retorna a quantidade de estudantes com frequência menor de 75%
int quantidadeReprovadosFreq(Estudante v[], int tam){
  
  int reprovados = 0;

  for(i = 0; i < tam; i++){
    if(v[i].frequencia < 75){
      reprovados ++;
    }
  }

  return reprovados;
}

// Função que retorna a quantidade de estudantes com média final >= 6,0
int quantidadeAprovados(Estudante v[], int tam){
  
  int i, aprovados = 0;

  for(i = 0; i < tam; i++){

    if(v[i].mediafinal >= 6){//verificando se o aluno atual possui média final maior ou igual a 6
      aprovados = aprovados +1;//se possui a somatória irá adicionar +1
    }
  }

  return aprovados;
}

// Função que retorna a média das médias finais da turma
float mediaDaTurma(Estudante v[], int tam){

int i;
float mediatotal=0;
float mediadoaluno;

for(i=0;i<tam;i++){

mediadoaluno = calculaMediaFinal(v);

mediatotal = mediatotal + mediadoaluno;


}

return mediatotal;

}

// Função que retorna a maior média final entre os estudantes
float maiorMediaFinal(Estudante v[], int tam){

 printf("\nFunção incompleta...\n");
 

   
  return 0.0;
}



// Função que retorna a menor média final entre os estudantes
float menorMediaFinal(Estudante v[], int tam){
  printf("\nFunção incompleta...\n");







  return 0.0;
}

// Função que calcula a média das médias finais dos estudantes
float calculaMediaFinal(Estudante v[]){
  printf("\nFunção incompleta...\n");
  //Média Final = Média1 * 0,4 + Média2 * 0,6

   float mediafinal;
   mediafinal = (v[i].medias[0] * 0.4  +  v[i].medias[1] * 0.6)/2 ;

  return mediafinal;

}