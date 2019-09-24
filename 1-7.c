#include <stdio.h>

int IsPalindrom (int n){
  int is_p;

  int i =1;
  int count =1; 
 

  int temp =n;
  while (temp >=10){
    temp/=10;
    i*=10;
  }
  
  while (n>=10){
    if(n%10 !=n/i){
      count=0;
      break;
      
    }
    n=(n%i)/10;
    i/=100;
  }

  if (count==1){
    is_p=1;
  }
  else{
    is_p=0;
  }

  return is_p;

}



int main(void) {

   int n, count ;
   int max=0;
  scanf("%d",&n );
  for (int i =2; i<=n; i++ ){
    count=1;
    for (int j=2; j<(i/2)+1 ; j++){
        if (i%j == 0){
          count=0;
        }
    }
    if (count==1){
      if(IsPalindrom(i)==1 ){
        max =i;
      }
    }
  }
  printf("%d" , max);
  return 0;
}
