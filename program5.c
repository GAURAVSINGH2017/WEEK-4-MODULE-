//wap in c to print the largest and smallest digit present in a numnber

#include<stdio.h>
int main(){
  long long n;
  printf("enter the number:");
  scanf("%lld",&n);

  //change the number to positive if it is negative 
  if(n<0){
    n=-n;
  }
  if(n==0){
    printf("The largest and smalest digit in the number %lld is 0",n);
  }


  long long largest=0;
  long long smallest=9;
  long long temp=n;
  
  //find the largest and smallest digit in the number
  while(n>0){
    long long digit=n%10;
    
    if(digit>largest){
      largest=digit;
    }
    if(digit<smallest){
      smallest=digit;
    }
    n=n/10;
  }
  printf("The largest digit in the number %lld is %lld",temp,largest);
  printf("\nThe smallest digit in the number %lld is %lld",temp,smallest);

  return 0;
}