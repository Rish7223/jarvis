#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
void calculator();  //calculator function prototype.
void quiz();  //quiz function prototype.
void main()
{
    int pass,ch,ch2;
    printf("\n\t====================================================");
    printf("\n\n\t\tHello: Welcome to jarvis version 1. ");
    xy:
    printf("\n\t\tEnter Password: ");  //asking to enter password.
    scanf("%d",&pass);
    if(pass == 3501213)   //checking the correct password.
    {   
		printf("\n\t\t\tWelcome Rishabh Tyagi!");
        yz:
        printf("\n\t\t\tMain Menu");
        printf("\n\t\t\t1. Calculator\n\t\t\t2. Play Quiz");
        printf("\n\t\t\t0. Exit!");
        printf("\n\t\t\tEnter 1 for Calculation and 2 for Play a quiz game: ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:  //case for open calculator
                calculator();   //calculator function call.
                printf("\t\t\t1. Main Menu\n\t\t\t0. Exit");
                printf("\n\t\t\tEnter your choise: ");
                scanf("%d",&ch2);
                switch (ch2)
                {
                    case 1:
                        goto yz;
                    case 0:
                        break;
                }
               
                
            case 2:
                quiz();   //quiz function call.
                printf("\t\t\t1. Main Menu\n\t\t\t0. Exit");
                printf("\n\t\t\tEnter your choise: ");
                scanf("%d",&ch2);
                switch (ch2)
                {
                    case 1:
                        goto yz;
                    case 0:
                        break;
                }
                
            case 0:
                break;
            default:
                printf("\t\t\tInvalid Option.. Try Again");
                goto yz;
        }
        printf("\n\t\t\t\t\tThankYou!!!!");
    }
    else if(pass == 0)
    {
        exit;
    }
    else
    {    printf("\t\tWrong Password! Error.... please try again");
        goto xy;}
}

void calculator()     //calculator function defination.
{
    float x,y,add,sub,mul,di;
    int ch;
    printf("\n\t\t\tWelcome to a two ditit operation calculator");
    xy:
    printf("\n\t\t\tEnter Two digits: ");
    scanf("%f, %f",&x,&y);
    printf("\t\t\t1. Adition(+)\n\t\t\t2. subtracion(-)");
    printf("\n\t\t\t3. Multipication\n\t\t\t4. Adition(/)\n\t\t\t0. exit");
    printf("\n\t\t\tEnter your choice: ");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
            add = x+y;
            printf("\t\t\t%.2f",add);
            goto xy;
        case 2:
            sub = x-y;
            printf("\t\t\t%.2f",sub);
            goto xy;
        case 3:
            mul = x*y;
            printf("\t\t\t%.2f",mul);
            goto xy;
        case 4:
            di = x/y;
            printf("\t\t\t%.2f",di);
            goto xy;
        case 0:
            break;
        default :
            printf("\t\t\tInvalid option!");
            goto xy;
    }
}
void quiz()  //Quiz function defination.
{
    int ch;
    xy:
    printf("\n\t\t=============================================");
    printf("\n\t\t\tWelcome to Quiz Show");
    printf("\n\t\t\t1. Computer Quiz\n\t\t\t2. Space Quiz");
    printf("\n\t\t\t3. General Quiz\n\t\t\t4. Help/Rules\n\t\t\t0. Exit");
    printf("\n\t\t\tEnter your choise: ");
    scanf("%d",&ch);
    switch (ch)
    {
        case 4:
            printf("\t\t\tRULES of the QUIZ GAME:-");
            printf("\n\t\t\t-> There are total 5 quizs related to your quiz.");
            printf("\n\t\t\t-> Every correct answer will give you 1 point.");
            printf("\n\t\t\t-> Result will be shown you at the end.");
            printf("\n\t\t\t-> Happy Playing\n");
            goto xy;
        case 0:
            break;
        default:
            printf("\t\t\tInvalid option! try again.");
            goto xy;
            
    }
}




