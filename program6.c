// wap in c to print prime numbers between two given positive numbers 
#include<stdio.h>
int main(){
  long long n1,n2;
  printf("enter the first number:");
  scanf("%lld",&n1);
  printf("enter the second number:");
  scanf("%lld",&n2);

  //change the number to positive if it is negative 
  if(n1<0){
    n1=-n1;
  }
  if(n2<0){
    n2=-n2;
  }
  long long count=0;
  
  //print the prime numbers between the two given numbers
  printf("Prime numbers between %lld and %lld are:\n", n1, n2);
  for(long long i = n1; i <= n2; i++){
    int isPrime = 1;
    if(i == 0 || i == 1){
      isPrime = 0;
    }
    for(long long j = 2; j <= i/2; j++){
      if(i % j == 0){
        isPrime = 0;
        break;
      }
    }
    if(isPrime){
      printf("%lld ", i);
    }
    if(isPrime==1){
      count++;
    }
  }
  printf("\nTotal prime numbers between %lld and %lld are: %lld", n1, n2, count);
  return 0;
}