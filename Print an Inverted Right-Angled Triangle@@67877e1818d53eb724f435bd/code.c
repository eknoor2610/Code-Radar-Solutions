#include <stdio.h>

int i,j,k;
scanf("%d",&k);
for(i=k;i<=1;i--){
    for(j=1;j<=k;j++){
        if(j>=1 && j<=i){
            printf("*");
        }
    }
    printf(" ");
}