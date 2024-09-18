#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    if (a < b) {
        printf("%d is greater than %d\n",b,a);
    } else{
        printf("%d is greater than %d\n",a,b);
    }
    for (int i=0;i<5;i++){
        a=a+1;
        c=a;
    }
    printf("The first number added by one 5 times is %d\n",c);
    d = b + b + 5;
    printf("The second number added to itself and 5 is %d\n", d);
    return 0;
}
