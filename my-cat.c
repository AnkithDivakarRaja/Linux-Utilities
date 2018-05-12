#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  if(argc < 2){
    exit(0);
  }

  int i;
  char buf[260];

  for(i=1; i<argc; i++ ){

      char *str = argv[i];

      FILE *fp = fopen(str, "r");
      if(fp == NULL){
        printf("my-cat: cannot open file\n");
        exit(1);
      }

      while(fgets(buf, sizeof(buf), fp))
      {
        printf("%s\n", buf);
      }
  }

  exit(1);
}
