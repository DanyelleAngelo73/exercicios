/*
Foi escolhido o problema 1(Multiples of 3 and 5) do site https://projecteuler.net/ , este problema consiste em obter o somatório
dos múltiplos de 3 e 5 que são menores do que 1000. Este é um problema simples, iniciei a variável soma em 3 (pois sabe-se que 3 é o
menor múltiplo de 3), e iniciamos a variável i (que indica os números a serem testados) em 5, a partir daí incrementamos essa variável
de 1 em 1 até 1000, e a cada repetição testa-se se i mod 5 =0 ou i mod 3 =0, em caso afirmativo, a soma é acrescida de i, e assim ao
final teremos a soma de todos os múltiplos de 3 e 5 compreendidos entre a faixa de valores 3 e 1000.

*/
#include <stdio.h>

int main(){
  int soma=3, i=5;
  while(i<1000){
    if(i%5==0 || i%3==0){
      soma+=i;
    }
    i++;
  }
  printf("%d",soma);
}
