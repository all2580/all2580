#include <stdio.h>

int word_len( char word1 [] ){
  int len=0;
  while (word1[len] != '\0'){
    len++ ;
  }
  return len;
}

int word_dist (char word1 [] , char word2[]){
  int dist =0;
  int len1 = word_len(word1);
  int len2 = word_len(word2);
  
  int min_len;
  if (len1> len2){
    min_len = len2;
    dist +=len1-len2;
  } else {
    min_len = len1;
    dist +=len2-len1;
  }

  for (int i = 0; i < min_len; i++){
    if (word1[i]!= word2[i]){
      dist ++;
    } 
  }

  return dist;
}

int main(void) {
  
  char* sentence[] = {"hello", "hel2lo", "hello"};
 
  int max_dist=0;
  char* first_el =NULL;
  char* second_el = NULL;
  int sentence_len = sizeof(sentence)/sizeof(char*);
  
  for (int i=0 ; i< sentence_len; i++){
    for (int j=i; j<sentence_len; j++){
      if ( word_dist(sentence[i], sentence[j] ) > max_dist) {
        max_dist= word_dist(sentence[i], sentence[j] );
        first_el= sentence[i];
        second_el = sentence [j];
      }
    }
  }

  printf("%d, %s, %s", max_dist, first_el, second_el);
  return 0;
}
