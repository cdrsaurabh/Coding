#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fptr;
    fptr = fopen("new.txt", "r");
    char c[40];
    fscanf(fptr, "%s", c);
    printf("character = %s\n", c);
   
    fclose(fptr);
return 0;
}