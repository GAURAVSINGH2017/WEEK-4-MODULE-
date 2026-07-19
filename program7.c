// wap in c to print the sum of all its proper divisors of a number
#include<stdio.h>
int main(){
  long long n;
  printf("enter the number:");
  scanf("%lld",&n);

  //change the number to positive if it is negative
  if(n<0){
    n=-n;
  }

  if(n==1){
    printf("The sum of all proper divisors of %lld is 0",n);
    return 0;
  }

  long long sum=0;

  //find the sum of all proper divisors of the number
  for(long long i=1;i<=n/2;i++){
    if(n%i==0){
      sum=sum+i;
    }
  }
  printf("The sum of all proper divisors of %lld is %lld", n, sum);
  return 0;
}