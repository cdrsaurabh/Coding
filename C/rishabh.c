#include <stdio.h>
int main()
{
    // reverse();
    fibonacci();
    return 0;
}
void reverse()
{
    int n; // 1234
    printf("Enter your number:");
    scanf("%d", &n);
    // to reverse
    int d, rev = 0;
    while (n > 0)
    {
        d = n % 10; // d=1234%10=4
        rev = (rev * 10) + d;
        n = n / 10; // 123
    }
    printf("%d", rev);
}
int fibonacci()
{
    int n, new, i;
    printf("Enter no. of terms\n");
    scanf("%d", &n);
    // 0,1,1,2,3,5,8.......
    int first = 0;
    int sec = 1;
    printf("%d\n%d", first, sec);
    for (i = 1; i <= n - 2; i++)
    {
        new = first + sec;   //
        printf("\n%d", new); // 0+1=1
        first = sec;         // 1
        sec = new;           // 1
    }
    return 0;
}