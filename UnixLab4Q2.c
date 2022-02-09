#include <stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
  int opt;
  int K = 10;
  while((opt = getopt(argc,argv,"hivn:")) != -1){
    switch (opt) {
      case 'h':
        printf("-h Print this help message and nothing else.\n-i Print: \"Interactive mode.\"\n-v Print: \"Verbose mode.\"\n-n K Set the value K. K should default to 10.\n");
        break;
      case 'i':
        printf("Interactive mode.");
        break;
      case 'v':
        printf("Verbose mode" );
        break;
      case 'n':
        K = atoi(optarg);
        break;
      default:
        printf("-h Print this help message and nothing else.\n-i Print: \"Interactive mode.\"\n-v Print: \"Verbose mode.\"\n-n K Set the value K. K should default to 10.\n");
        break;
    }
  }
  return 0;
}
