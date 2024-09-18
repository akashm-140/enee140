//Task 2b
#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("Enter 3 numbers: \n");
    scanf("%d %d %d", &a,&b,&c);

    //Find the middle number (2nd in value) and print the difference of the largest and smallest numbers
    if (a>c && a<b) {
        printf("%d is the middle number\n", a);
        printf("The difference is %d\n",b-c);
    } else if (b>c && b<a) {
        printf("%d is the middle number\n", b);
        printf("The difference is %d\n",a-c);
    } else {
        if (b<c && b>a) {
            printf("%d is the middle number\n", b);
            printf("The difference is %d\n",c-a);
        } else if (c>a && c<b) {
            printf("%d is the middle number\n", c);
            printf("The difference is %d\n",b-a);
        }
    }
    //Sum of all inputs + itself
    d = a+b+c;
    d=d+d;
    printf("The sum of all the numbers + itself is %d\n",d);
}
