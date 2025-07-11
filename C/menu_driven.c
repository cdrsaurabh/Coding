// Menu Driven Program*
#include <stdio.h>
#include <stdlib.h>
int a, b, n, m, d1, d2, d3, d4, i;
int num, count = 0;
float r, h;
void main()
{
     int ch;
     while (1)
     {
          printf("\n1. To perform addition.");
          printf("\n2. To perform subtraction.");
          printf("\n3. To perform division.");
          printf("\n4. To perform multiplication.");
          printf("\n5. To check for even and odd.");
          printf("\n6. To find area of triangle");
          printf("\n7. To find sum of 4digit no.'s digits ");
          printf("\n8. To find volume of cylinder");
          printf("\n9. To check eligibility for voting");
          printf("\n10.To find perimeter of rectangle");
          printf("\n11.To find factorial of any no.");
          printf("\n12.To check whether no is prime or not");
          printf("\n13.To print table of entered no.");
          printf("\n14.To Exit.");
          printf("\n Enter your choice:");
          scanf("%d", &ch);
          switch (ch)
          {
          case 1:
               printf("\n Enter two number:");
               scanf("%d%d", &a, &b);
               printf("\n Sum=%d", a + b);
               break;
          case 2:
               printf("\n Enter two number:");
               scanf("%d%d", &a, &b);
               printf("\n Difference=%d", a - b);
               break;
          case 3:
               printf("\n Enter two number:");
               scanf("%d%d", &a, &b);
               printf("\n Divsion=%d", a / b);
               break;
          case 4:
               printf("\n Enter two number:");
               scanf("%d%d", &a, &b);
               printf("\n Product=%d", a * b);
               break;
          case 5:
               printf("\n Enter any number:");
               scanf("%d", &a);
               if (a % 2 == 0)
                    printf("%d is Even.", a);
               else
                    printf("%d is Odd.", a);
               break;
          case 6:
               printf("\n Enter length:");
               scanf("%d", &a);
               printf("\n Enter breadth:");
               scanf("%d", &b);
               printf("\n Area of triangle is:%f", 0.5 * a * b);
               break;
          case 7:
               printf("Enter any 4-digit number:");
               scanf("%d", &n);
               m = n;
               d1 = n % 10;
               n = n / 10;
               d2 = n % 10;
               n = n / 10;
               d3 = n % 10;
               n = n / 10;
               d4 = n % 10;
               printf("Sum of the digit of %d=%d", m, d1 + d2 + d3 + d4);
               break;
          case 8:
               printf("\nEnter radius:");
               scanf("%f", &r);
               printf("\nEnter height:");
               scanf("%f", &h);
               printf("\nvolume of the cylinder= %f", 3.14 * r * r * h);
               break;
          case 9:
               printf("\nenter age");
               scanf("%d", &a);
               if (a >= 18)
               {
                    printf("\nyou are eligible for voting");
               }
               else
               {
                    printf("\nyou are not eligible for voting");
               }
               break;
          case 10:
               printf("\nEnter length of rect.:");
               scanf("%d", &a);
               printf("\n Enter breadth of rect. :");
               scanf("%d", &b);
               printf("\nPerimeter of rect is :%d", 2 * a + 2 * b);
               break;
          case 11:
               printf("\nEnter any no.: ");
               scanf("%d", &a);
               for (b = a - 1; b >= 1; b--)
               {
                    a = a * b;
               }
               printf("\n%d", a);
               break;
          case 12:
               printf("Enter any number\n");
               scanf("%d", &num);
               for (int i = 1; i <= num; i++)
               {
                    if (num % i == 0)
                    {
                         count++;
                    }
               }
               if (count == 2)
               {
                    printf("it is prime \n");
               }
               else
               {
                    printf("it is not prime\n");
               }
               break;
          case 13:
               printf("enter any number");
               scanf("\n %d", &n);
               for (i = 1; i <= 10; i++)
               {
                    printf("\n %d", n * i);
               }
               break;
          case 14:
               exit(1);
          default:
               printf("\n Wrong Choice.");
          }
     }

     // return 0;
}