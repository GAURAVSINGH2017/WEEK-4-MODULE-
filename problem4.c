// wap in c to count the total number of even and odd digits in a number

#include<stdio.h>
int main(){

  //enter the number whose even and odd digits has to be counted

  long long n;
  printf("enter the number:");
  scanf("%lld",&n);

  // odd  and even digit count

  long long odd=0;
  long long even=0;
  long long temp=n;

  if(n==0){
    even++;
  }

  while(n>0){
    long long digit=n%10;
    if(digit%2==0){
      even++;
    }
    else{
      odd++;
    }
    n=n/10;
  }
  printf("The number %lld contains %lld even digits and %lld odd digits",temp,even,odd);
return 0;
}