//Menu Driven Program*
#include<stdio.h>
#include<stdlib.h>
int a,b;
void main()
{
	int ch;
	while(1)
	{
	 printf("\n1. To perform addition.");
	 printf("\n2. To perform subtraction.");
	 printf("\n3. To perform division.");
	 printf("\n4. To perform multiplication.");
	 printf("\n5. To check for even and odd.");
     printf("\n6. To find area of triangle");
	 printf("\n7. To Exit.");
	 printf("\n Enter your choice:");
	 scanf("%d",&ch);
	 switch(ch)
	 {
	 	case 1:
	 		 printf("\n Enter two number:");
	 		 scanf("%d%d",&a,&b);
	 		 printf("\n Sum=%d",a+b);
	 		 break;
	 	case 2:
	 		 printf("\n Enter two number:");
	 		 scanf("%d%d",&a,&b);
	 		 printf("\n Difference=%d",a-b);
	 		 break;
	 	case 3:
	 		 printf("\n Enter two number:");
	 		 scanf("%d%d",&a,&b);
	 		 printf("\n Divsion=%d",a/b);
	 		 break;
	 	case 4:
	 		 printf("\n Enter two number:");
	 		 scanf("%d%d",&a,&b);
	 		 printf("\n Product=%d",a*b);
	 		 break;
	 	case 5:
	 		printf("\n Enter any number:");
	 		scanf("%d",&a);
	 		if(a%2==0)
	 		printf("%d is Even.",a);
	 		else
	 		printf("%d is Odd.",a);
	 		break;
         case 6: 
             printf("\n Enter length:");
             scanf("%d", &a);
             printf("\n Enter breadth:");
             scanf("%d", &b);
             printf("\n Area of triangle is:%f", 0.5*a*b);
             break;
	 	case 7:
	 		  exit(1);
	 	default:
	 		   printf("\n Wrong Choice.");
	  }
	}

 // return 0;
  }