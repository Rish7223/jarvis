#include<stdio.h>
#include<stdlib.h>

void calculator()     //calculator function defination.
{
    float x,y,add,sub,mul,di;
    int ch,ch1,n;
    int *ptr,i;
    system("cls");
    printf("\n\t\t   ====================================================");
    printf("\n\t\t  |                     CALCULATOR                     |");
    printf("\n\t\t   ====================================================");
    printf("\n\n\t\t\tWelcome to a integer operands calculator");
    z:
    //printf("\n\t\t\tEnter Two digits: ");
    //scanf("%f, %f",&x,&y);
    printf("\n\t\t\t1. Adition(+)\n\t\t\t2. subtracion(-)");
    printf("\n\t\t\t3. Multipication(*)\n\t\t\t4. Division(/)\n\t\t\t0. exit");
    printf("\n\t\t\tEnter your choice: ");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
            printf("\t\t\tEnter No. of Digits: ");
            scanf("%d",&n);
            ptr=(int*)malloc(n*sizeof(int));
            printf("\t\t\tEnter %d digits: \n",n);
            for(i=0;i<n;++i)
            {
            	scanf("%d",ptr+i);
            	add += *(ptr+i);
			}
			printf("\n\t\t\tThe Sum is %.2f",add);
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
            printf("\t\t\tEnter Two Digits: ");
            scanf("%f,%f",&x,&y);
            sub=x-y;
            printf("\n\t\t\tThe Subtraction is %.2f",sub);
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
        case 3:
        	mul=1;
            printf("\t\t\tEnter No. of Digits: ");
            scanf("%d",&n);
            ptr=(int*)malloc(n*sizeof(int));
            printf("\t\t\tEnter %d digits: \n",n);
            for(i=0;i<n;++i)
            {
            	scanf("%d",ptr+i);
            	mul *= *(ptr+i);
			}
			printf("\n\t\t\tThe multiplicatin is %.2f",mul);
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
        case 4:
        	printf("\t\t\tEnter Two Digits: ");
            scanf("%f,%f",&x,&y);
            di = x/y;
            printf("\t\t\tThe division is %.2f",di);
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
        case 0:
            break;
        default :
            printf("\t\t\tInvalid option!");
            goto z;
    }
}

