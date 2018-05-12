#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main(int argc, char *argv[]){

  if(argc < 2){
    printf("my-grep: searchterm [file ...]\n");
    exit(1);
  }

  int i;
  char *buf;
  size_t bufsize = 32;

  if(argc > 2){
    for(i=2; i<argc; i++ ){

        char *str = argv[i];

        FILE *fp = fopen(str, "r");
        if(fp == NULL){
          printf("my-grep: cannot open file\n");
          exit(1);
        }

        buf = (char *)malloc(bufsize * sizeof(char));
        while(getline(&buf, &bufsize, fp) != -1)
        {
          if(strstr(buf, argv[1]) != NULL){
              printf("%s\n", buf);
          }
        }
    }
  }
  else
  {
    char line[LINE_MAX];
    if(fgets(line, LINE_MAX, stdin) != NULL){
      if(strstr(line, argv[1]) != NULL){
          printf("%s\n", line);
      }
    }
  }


  exit(1);

}
