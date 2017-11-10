#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args(char * line){
  char ** thing = malloc(sizeof(char *) * 5);
  char * s1 = line;
  int i = 0;
  while(s1){
    thing[i] = strsep(&s1, " ");
    i++;
  }
  return thing;
}
  
int main(){
  char line[100] = "cat arg.c";
  char ** args = parse_args(line);
  execvp(args[0], args);
}
