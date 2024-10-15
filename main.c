#include <stdio.h>
int main () {
    int p,r,t,si;
    printf("Enter the Principal Amount :" );
    scanf("%d",&p);
    printf("Enter the Rate :" );
    scanf("%d",&r);
    printf("Enter the Time Period  :" );
    scanf("%d",&t);
    si=(p*r*t)/100;
    printf("The Simple Interest is : %d",si);
    return 0;
}