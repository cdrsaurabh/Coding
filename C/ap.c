#include<stdio.h>

void main(){
    // int a,n,d,tn;
    printf("Enter the no. of terms in the Ap :");
    int terms;
    scanf("%d",&terms);
    int t[terms]; //t[4]
    int i, j, k;

    //Term input by user
    for (i=0; i<terms; i++) {
        printf("Enter the term %d: ",i+1);
        scanf("%d",&t[i]);
    }
    int n = terms + 1;
    printf("n = %d\n",n); //n = 5
    int d = t[1]-t[0];
    printf("The common difference is: %d\n",d);
    int a[n]; //a[5]
    a[0] = t[0];
    for(j=1;j<=terms;j++){
       a[j] = a[0] + (j*d);
    }
    for(j=1;j<=terms+1;j++){
       printf("Term %d of actual Ap is %d\n",j,a[j-1]);
    }
    for(k=0;k<=terms;k++){
        if((a[k]!=t[k])==1){
            printf("\nYour missing no. is: %d\n",a[k]);
        break;
        }
        
    }
    printf("Bye..!");
}