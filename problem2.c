// wap in c to reverse the digits of a number

#include<stdio.h>
int main(){
  
  //ENTER THE NUMBER WHOSE DIGITS IS TO BE REVERSED                      
  long long n;
  printf("enter the number:");
  scanf("%lld",&n);

  // change the number to positive if it is negative
  if(n<0){
    n=-n;
  }

  //reverse the digits of the number
  long long temp=n;
  long long rev=0;
  while(n>0){
    rev=rev*10+n%10;
    n=n/10;
  }

  printf("The reverse of the number %lld is %lld",temp,rev);

  // check the number is a pallindrome or not 
  if(temp==rev){
    printf("\nThe number %lld is a pallindrome",temp);
  }
  else{
    printf("\nThe number %lld is not a pallindrome",temp);
  }
  return 0;
}