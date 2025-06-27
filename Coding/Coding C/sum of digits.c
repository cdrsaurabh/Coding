#include<stdio.h>
  void main()
  {
  int n,m,d1,d2,d3,d4;
  printf("Enter any 4-digit number:");
  scanf("%d",&n);
  m=n;
  d1= n%10;
  n=n/10;
  d2=n%10;
  n= n/10;
  d3= n%10;
  n= n/10;
  d4= n%10;
  printf("Sum of the digit of %d=%d",m,d1+d2+d3+d4);
   }