#include <stdio.h>

int main() {

  int idade = 21;
  // float preco = 299.99;
  char nome[7] = "Gustavo";
  double pi = 3.14159265358979323846;

  int num1 = 1;
  int num2 = 10;
  // int num2 = -10;
  int num3 = 100;

  float price1 = 0.99;
  float price2 = 2.99;
  float price3 = 12.99;

  printf("Bem vindo, sujeito %.7s. Vamos fazer alguma ciência?\n", nome);
  // printf("%d\n", idade);
  // printf("%.2f\n", preco);
  // printf("%.20lf\n", pi);

  printf("%03d\n", num1);
  printf("%03d\n", num2);
  printf("%03d\n", num3);

  printf("%+7.2f\n", price1);
  printf("%+7.2f\n", price2);
  printf("%+7.2f\n", price3);

  return 0;
}
