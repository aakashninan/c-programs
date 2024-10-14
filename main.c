#include <stdio.h>
int main() {
    int a,v,age,AKSH=0,VIV=0,chp=0,chs=0,JOH=0,PRN=0;
    printf("Enter the no of voters");
    scanf("%d",&v);
    a=1;
    while (a<=v)
    {
        printf("Enter your age");
        scanf("%d",&age);
        if (age>=18)
        {
            printf("You are eligible to vote");
            printf("\n President");
            printf("\n1.for Aakash \n2.for Vivek");
            printf("\nEnter your choice");
            scanf("%d",&chp);
            switch (chp)
            {
                case 1:
                    AKSH++;
                break;
                case 2:
                    VIV++;
                break;
                default:
                    printf("Invalid choice");
            }
            printf("\n Secretary");
            printf("\n1.for John \n2.for Prnav");
            printf("\nEnter your choice");
            scanf("%d",&chs);
            switch (chp)
            {
                case 1:
                    JOH++;
                break;
                case 2:
                    PRN++;
                break;
                default:
                    printf("Invalid choice");
            }
        }
        else {
            printf("You are not eligible to vote");
        }
        a++;
    }
    printf("\n President \nAakash secured %d votes\nVivek Secured %d Votes",AKSH,VIV);
    if (AKSH>VIV)
        {
        printf("\nAakash won");
    }
    else if (AKSH==VIV)
    {
        printf("\nIts a tie");
    }
    else
    {
        printf("\nVivek won");
    }
    printf("\nSecretary \n John Secured %d Votes\nPranav Secured %d votes",JOH,PRN);
    if (JOH>PRN)
    {
        printf("\nJohn won");
    }
    else if (JOH==PRN)
    {
        printf("\nIts a tie");
    }
    else
    {
        printf("\nPranav won");
    }

    return 0;
}

