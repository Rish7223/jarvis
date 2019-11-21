#include<stdio.h>

void quiz()  //Quiz function defination.
{
    int ch;
    xy:
    system("cls");
    printf("\n\t\t\t\t=============================================");
    printf("\n\t\t\t\t|            Welcome to Quiz Show           |");
    printf("\n\t\t\t\t=============================================");
    printf("\n\n\n\t\t\t1. Computer Quiz\n\t\t\t2. Space Quiz");
    printf("\n\t\t\t3. General Quiz\n\t\t\t4. Help/Rules\n\t\t\t0. Exit");
    printf("\n\t\t\tEnter your choise: ");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
        	printf("\n\t\tComing Soon!  Sorry..");
        	goto xy;
        case 2:
        	printf("\n\t\tComing Soon!  Sorry..");
        	goto xy;
        case 3:
        	printf("\n\t\tComing Soon!  Sorry..");
        	goto xy;
		case 4:
			system("cls");
            printf("\n\n\n\t\t\tRULES of the QUIZ GAME:-");
            printf("\n\t\t\t-> There are total 5 quizs related to your quiz.");
            printf("\n\t\t\t-> Every correct answer will give you 1 point.");
            printf("\n\t\t\t-> Result will be shown you at the end.");
            printf("\n\t\t\t-> Happy Playing\n");
            printf("\n\n\t\t\tEnter Any Key to Exit: ");
            getch();
            goto xy;
        case 0:
            break;
        default:
            printf("\t\t\tInvalid option! try again.");
            goto xy;
            
    }
}
