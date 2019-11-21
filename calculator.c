#include<stdio.h>
#include<stdlib.h>

void calculator()     //calculator function defination.
{
    float x,y,add,sub,mul,di;
    int ch,ch1;
    system("cls");
    printf("\n\t\t   ====================================================");
    printf("\n\t\t  |                     CALCULATOR                     |");
    printf("\n\t\t   ====================================================");
    printf("\n\n\t\t\tWelcome to a two ditit operation calculator");
    z:
    printf("\n\t\t\tEnter Two digits: ");
    scanf("%f, %f",&x,&y);
    printf("\t\t\t1. Adition(+)\n\t\t\t2. subtracion(-)");
    printf("\n\t\t\t3. Multipication(*)\n\t\t\t4. Division(/)\n\t\t\t0. exit");
    printf("\n\t\t\tEnter your choice: ");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
            add = x+y;
            printf("\t\t\t%.2f",add);
            printf("\n\t\t\tEnter 1 to Restar 0 to exit: ");
            scanf("%d",&ch1);
            if(ch1==1)
            {
            	goto z;
			}
			else
			{
				break;
			}
        case 2:
            sub = x-y;
            printf("\t\t\t%.2f",sub);
            goto z;
        case 3:
            mul = x*y;
            printf("\t\t\t%.2f",mul);
            goto z;
        case 4:
            di = x/y;
            printf("\t\t\t%.2f",di);
            goto z;
        case 0:
            break;
        default :
            printf("\t\t\tInvalid option!");
            goto z;
    }
}

