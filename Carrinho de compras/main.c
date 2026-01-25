#include <stdio.h>
#include <string.h>
// Máquina de vendas ingênua...
// O objetivo é criar um programa que se comunica com o usuário para auxiliar a
// realizar uma compra, sem persistência de dados, sem segurança, e confiando
// que o usuário é incapaz de mentir.
//
int main() {
  char item[40] = "";
  float preco = 0.00f;
  int quantidade = 0;
  char currency = '$';
  float total = 0.00f;
  float pagamento = 0.00f;
  float troco = 0.00f;

  printf("Bem vindo ao carrinho de compras da ciência!!\n");
  printf("Insira um item ao seu carrinho. \n");
  fgets(item, sizeof(item), stdin);
  // Usar scanf("%s", &item); até funciona, mas sempre alega que há algo errado.
  item[strlen(item) - 1] = '\0';
  printf("Insira o preço do item. ");
  scanf("%f", &preco);
  printf("Agora insira a quantidade de itens que deseja. ");
  scanf("%d", &quantidade);

  total = preco * quantidade;

  printf("Você está comprando %d %s/s\n", quantidade, item);
  printf("Total: %c%.2f\n", currency, total);

  printf("insira o valor do pagamento.");
  scanf("%f", &pagamento);

  troco = (pagamento - total);

  printf("O seu troco será: %c%.2f \n", currency, troco);

  return 0;
}
