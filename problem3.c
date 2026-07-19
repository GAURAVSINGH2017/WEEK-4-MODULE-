// wap in c to print the sum of digits in a number

#include<stdio.h>
int main(){
  
  //enter the number whose digits sum has to be calculated
  long long n;       
  printf("enter the number:");
  scanf("%lld",&n);

  //sum of digits in the number
  long long sum=0;
  long long temp=n;
  while(n>0){
    sum=sum+n%10;
    n=n/10;
  }
  printf("The sum of digits in the number %lld is %lld",temp,sum);
  return 0;
}