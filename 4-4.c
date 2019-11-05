#include <stdio.h>

int str_len(const char word1[]) {
  int len = 0;
  while (word1[len] != '\0') {
    len++;
  }
  return len;
}

const char* _strstr(const char *str, const char *substr) {
  int len = str_len(str);
  int sub_len = str_len(substr);
  const char* ptr=NULL;

  for (int i=0; i<len; i++){
    ptr= &str[i];
    
    for (int j=0;j< sub_len;j++){
      if (str[i+j]!= substr[j]){
        ptr=NULL;
        break;
      }
    }

    if(ptr==(char*)&str[i]){
      break;
    }
  }
 
  return ptr;
}

void find_str(char const* str, char const* substr) {
    const char* pos = _strstr(str, substr);
    if(pos) {
        printf("found the string '%s' in '%s' at position: %ld\n", substr, str, pos - str);
    } else {
        printf("the string '%s' was not found in '%s'\n", substr, str);
    }
}
 
int main(void) {
    char* str = "one two three";
    find_str(str, "two");
    find_str(str, "");
    find_str(str, "nine");
    find_str(str, "n");
 
    return 0;
}
