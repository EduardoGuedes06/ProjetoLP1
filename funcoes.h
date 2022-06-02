typedef struct {
  int idade;
  float medias[2];
  float frequencia;
  float mediafinal;
} Estudante;

void recebeDados(Estudante v[], int tam);
void apresentaMenu(void);
float mediaIdade(Estudante v[], int tam);
float mediaFrequencia(Estudante v[], int tam);
int quantidadeReprovadosFreq(Estudante v[], int tam);
int quantidadeAprovados(Estudante v[], int tam);
float mediaDaTurma(Estudante v[], int tam);
float maiorMediaFinal(Estudante v[], int tam);
float menorMediaFinal(Estudante v[], int tam);
float calculaMediaFinal(Estudante v[]);
