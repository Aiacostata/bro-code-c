#include <stdio.h>
#include <string.h>
// string.h? Acho que os tópicos estão avançando rápido, isso é bom.

double imc(float a, float b) { return b / (a * a); }
// Eu estava com dificuldade de realizar essa simples tarefa pois estava pondo b
// / a * a, ou (b / a * a), que foi a correção pois eu achava que só o valor de
// b estava sendo impresso... bom, devo voltar a estudar aritmética básica antes
// de programar? a resposta correta é b / (a * a) pois devo seguir sempre a
// ordem dos operadores e sempre prestar atenção nisso,eu deveria ser um
// estudante de exatas, porra.

int main() {

  int idade = 0;
  float peso = 0.0f;
  float altura = 0.0f;
  char name[30] = "\0";
  printf("Bem vindo ao laboratório da ciência, vamos fazer um teste simples, "
         "vamos medir o seu IMC.\nQual é o seu nome? Por favor "
         "digite: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';

  printf("Olá %s, vamos fazer ciência hoje?\n", name);
  printf("Por favor, insira a sua idade: ");
  scanf("%d", &idade);
  printf("Agora insira o seu peso: ");
  scanf("%f", &peso);
  printf("Agora insira a sua altura: ");
  scanf("%f", &altura);

  printf("Seu IMC é de: %2.2lf\n", imc(altura, peso));
  return 0;
}
