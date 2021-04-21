#include <stdio.h>

int main(void){
  int i;
  i = 0;
  while(++i, i <= 10){
    printf("%d ", i);
  }
  return (0);
}
