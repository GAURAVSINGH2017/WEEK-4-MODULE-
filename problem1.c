// wap in c to count the number of digits in a number
#include<stdio.h>
int main(){
  
  //enter the number which digit has to be count                      

  
  long long n;
  printf("enter the number:");
  scanf("%lld",&n);
  
  //change the number to positive if it is negative 
  if(n<0){
    n=-n;
  }

  //count the number of digits in the number
  int  count =0;
  long long temp=n;
  while(n>0){
    n=n/10;
    count++;
  }
  
//print the number of digits in the number
printf("The number %lld contains %d digits",temp,count);

return 0;

}