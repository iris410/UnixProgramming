#include <stdio.h>
int maths(int a, int b, int *sum, int *difference, int *division);

int main(){
  int a = 1;
  int b = 3;
  int sum, difference, division;
  maths(a, b, &sum, &difference, &division);
  printf("sum:%d, difference:%d, division:%d\n", sum, difference, division);
  return 0;
}

int maths(int a, int b, int *sum, int *difference, int *division){
*sum = a + b;
*difference = b - a;
*division = a / b;
return 0;
}
