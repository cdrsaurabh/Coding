# include<stdio.h>

int main()
{
    printf("Hello world!");
    int num= 25;
    char star = '*';
    float pi = 3.14;
   /* int age = 18;
    // iz used to make single. line comment
    /* is used to
    make multi line3comment */
    
    printf("Hello C \n");
    printf("Hello Saurabh \n");
    
    printf("the num is %d \n", num ); 
    printf("the decimal is %f \n", pi);
    printf("the char is %c \n", star);
    /* int = %*/
    int age;
    printf("enter age : ");
    scanf("%d", &age);
    printf("the age is %d \n", age); 
    /*44:30*/
    int a,b;
    printf(" enter a : ");
    scanf("%d \n", &a);
    
    printf(" enter b :  ");
    scanf("%d \n", &b);
    
    int sum = a + b;
    printf(" sum is %d", sum);
    return 0;
}