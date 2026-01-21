#include <stdio.h>
// preprocessor directive (input/output)
#include <stdbool.h>
// inclui valores booleanos
int main() {
  // variavéis:
  //     Um valor mutável atribuido a um nome e espaço de memória, defindo por
  //     tipos inteiro, real (ponto flutuante) ou caracteres.
  int idade = 21;
  float altura = 1.74;
  float peso = 69.9;
  double pi = 3.14159265358979;
  char inicial = 'G';
  char nome[7] = "Gustavo";
  char bebida[7] = "Café";
  bool isHungry = false;
  printf("Bem vindo, sujeito %.7s. Vamos fazer alguma ciência?\n", nome);
  // curioso %.7s ser a saida pro meu nome completo, estou escutando o album 7
  // sinners do helloween agora... será o destino?
  printf(
      "Sujeito de testes possui %d anos de idade, mede %.2f metros de altura "
      "e pesa %.1f quilogramas.\n",
      idade, altura, peso);
  printf("A inicial do nome do sujeito de testes é %c\n", inicial);
  printf("A bebida favorita do sujeito de testes é %s, deseja almoçar?\n",
         bebida);
  if (isHungry) {
    printf("Então hora de almoçar %s\n", bebida);
  } else {
    printf("Hora de programar\n");
  }
  printf("O sujeito de testes deseja aprender a programar na linguagem C.\n");
  printf("O valor de pi com 7 casas decimais é: %.7lf.\n", pi);
  printf("O valor de pi com 14 casas decimais é: %.14lf.\n", pi);
  //  printf:
  //    Função de saída de texto nativa da biblioteca.
  //    %d para saidas de Inteiros, %f para saidas de ponto flutuante, para
  //    definir quantas casas exatamente vocẽ quer de ponto flutuante, adicione
  //    .x em que x é a quantidade de casas, por exemplo, %.1f para uma casa
  //    decimal. Use %lf para long float. Use %s para Strings (note que c não
  //    possui um tipo String, use char = x[] para definir uma String. Você pode
  //    usar %.xs pra definir o tamanho da tring que você vai printar).
  return 0;
}
/* Em C, todas as variáveis devem ser declaradas antes de usadas, normalmente no
 * inicio da função, antes de qualquer comando executável. (O que será que
 * acontece se você ignorar essa regra?). O tipo int implica que as variáveis
 * listadas são inteiras, float define ponto flutuantes, isto é, números que
 * podem ter uma parte fracionada. C também provê vários outros tipos de
 * variáveis, como: char - caracteres - um unico byte; short - inteiro curto;
 * long - inteiro longo; double - ponto flutuante com dobra precisão.*/
