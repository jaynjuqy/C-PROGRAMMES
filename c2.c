#include <stdio.h>
int main(void){
    int a,b,c;
    float d;
    printf("Enter the First Value: ");
    scanf("%d",&a);
    printf("Enter the Second Value: ");
    scanf("%d",&b);
    printf("Enter the third value: ");
    scanf("%f",&d);
    c=d*(a+b);
    printf("%f*(%d+%d)=%d\n",d,a,b,c);
    return 0;
}
