#include <stdio.h>
int  main() {
    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);

    i=2;
    do {
        printf("%d\n",i);
        i=i+2;
    }
    while(i<=n);
    return 0;


}
