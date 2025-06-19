# include<stdio.h>
# include<math.h>
int main()
{
int y;
int z;
int x = y = z = 5;
int sum = x+y+z;
printf("%d \n", sum ) ;
int a, c, d;
c=5,d=4;
a = pow(c,d);
printf("%d \n",a);
/* % is known as modulo nd is used for giving remainder of division */
// eg :-
printf("%d \n", 12%5);

printf("%f \n", 10+2.5);
int g =(int) 1.999999;
printf("%d \n", g);

int f= 4+9*10;
printf("%d \n", f);

int r= 5+2/2*3;
printf("%d \n", r);
 // relational operators : 
 // +-*/
printf("%d \n", 4 == 2);/*0 is f and 1 is t */
// <, <=, >, >=
printf("%d \n", 4<3);
// != not equal to
printf("%d \n", 4!=4);
printf("%d \n", 4==4);

//logical operators;
// && and (1T,3F), || or ( 3T,1F), ! not answer ulta ayega

printf("%d \n", 4>3||4<2);
printf("%d \n",!4<2);

// precedence  !, (*, /, %) , (+, -) , (<, <=, >, >=), (==,!=),&&, ||, =
// program to check whether the no. is divisible by 2 or not
int k;
printf("enter a no.: ");
scanf("%d", &k);
printf("%d \n",k%2==0);

// 01:52:

return 0;
}