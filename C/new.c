#include<stdio.h>
#include<stdbool.h>
int main(){
    // int a;
    // if (scanf("%d",&a)!=1){
    //     printf("Hello World");
    // } else {
    //     printf("error");
    // }
    int b;
    while (true){
        printf("Enter a number");
        if(scanf("%d",&b)!=1){
            printf("Your input is wrong");
            printf("Please input valid data");
        }
        else{
            printf("next code is running");
                    break;
        }
    }
return 0;
}
