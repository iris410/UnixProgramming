#include <stdio.h>
#include<stdlib.h>
void printTable(int start, int end, int (*fp) (int));
int square(int x);

int main(int argc, char *argv[]){
   int(*square_function)(int) = &square;

  if(argc != 3){
    printf("wrong number of inputs" );
  }
  else if(argv[2] <= argv[1]){
    printf("End should be greater than start." );
  }
  else{
    printTable(atoi(argv[1]),atoi(argv[2]),square_function);
  }
return 0;
}

int square(int x) {
        return x * x;
}

void printTable(int start, int end, int (*fp) (int)){
  int i;
  for(i = start; i <= end; i++){
    printf("%d %d\n",i,fp(i));
  }
}
