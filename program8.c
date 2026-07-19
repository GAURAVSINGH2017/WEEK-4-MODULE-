// wap in c to print all the factors  of the given number in ascending order
#include<stdio.h>
int main(){
  long long n;
  printf("enter the number:");
  scanf("%lld",&n);

  //change the number to positive if it is negative
  if(n<0){
    n=-n;
  }

  //print all the factors of the number in ascending order

  printf("The factors of the number %lld in ascending order are:\n",n);
  for(long long i=1;i<=n;i++){
    if(n%i==0){
      printf("%lld ",i);
    }
  }
  return 0;
}