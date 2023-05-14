int main (int argc, char *argv[]){
  
  int codigoPeca1, qtdePecas1;
  float precoPecas1;

  int codigoPeca2, qtdePecas2;
  float precoPecas2;

  //printf("Insira o codigo, qtde de peças e o preço da peça: ");
  scanf("%d %d %f",&codigoPeca1, &qtdePecas1, &precoPecas1);

  //printf("Insira o codigo, qtde de peças e o preço da peça: ");
  scanf("%d %d %f",&codigoPeca2, &qtdePecas2, &precoPecas2);

  float total1,total2,resultado;

  total1=qtdePecas1*precoPecas1;
  total2=qtdePecas2*precoPecas2;

  resultado=total1+total2;

  printf("VALOR A PAGAR: R$ %.2f\n",resultado);

  return 0;
}
