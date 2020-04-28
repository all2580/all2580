#include <stdio.h>

void swap(char* a, char* b){
char tmp = *b;
*b=*a;
*a=tmp;
}

int str_len( char str [] ){
  int len=0;
  while (str[len] != '\0'){
    len++ ;
  }
  return len;
}

void reverse_string(char str[]){
  int len = (str_len(str));
  for (int i=0;i<len/2;i++){
    swap(&str[i],&str[len-1-i]);
  }
}

int main(void) {
  char str[] ="hui na vorotnichek";
  reverse_string(str);
  printf("%s",str);
  
  return 0;
}
