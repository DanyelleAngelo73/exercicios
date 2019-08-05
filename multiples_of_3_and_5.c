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
