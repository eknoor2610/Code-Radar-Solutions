#include <stdio.h>
int main(){
    char a[10];
    int b;
    char c[10];
    scanf("%s %d %s",&a,&b,&c);
    printf("Name: %s",a);
    printf("Age: %d",b);
    printf("Hobby: %s",c);
    return 0;
}