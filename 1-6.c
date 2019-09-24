#include <stdio.h>

int main(void) {
  int n;
  int i =1;
  int count =1; 
  scanf("%d",&n);

  int temp =n;
  while (temp >=10){
    temp/=10;
    i*=10;
  }
  
  while (n>0){
    if(n%10 !=n/i){
      count=0;
      break;
      
    }
    n=(n%i)/10;
    i/=100;
  }

  if (count==1){
    printf ("N is palindrom");
  }
  else{
    printf ("N is not palindrom");
  }

  return 0;
}
