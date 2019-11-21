#include <stdio.h>
#include<process.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
void calculator();  //calculator function prototype.
void quiz();  //quiz function prototype.
char name[50];
void main()
{
    int pass,ch,ch2;
    printf("\n\t\t====================================================");
    printf("\n\t\t|      Hello: Welcome to jarvis version 1.         | ");
    printf("\n\t\t====================================================");
    xy:
    printf("\n\n\t\tEnter Password or 0 to exit: ");  //asking to enter password.
    scanf("%d",&pass);
    if(pass == 3501213)   //checking the correct password.
    {   
		system("cls");
		printf("\n\t\t\tEnter Your name: ");
		scanf("%s",name);
		printf("\n\n\t\t\tWelcome %s",name);
		printf("\n\t\t\tPress Any key to Enter: ");
		getch();
        yz:
        system("cls");
        printf("\n\n\n\t\t\tMain Menu");
        printf("\n\t\t\t1. Calculator\n\t\t\t2. Play Quiz");
        printf("\n\t\t\t0. Exit!");
        printf("\n\t\t\tEnter 1 for Calculation and 2 for Play a quiz game: ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:  //case for open calculator
                calculator();   //calculator function call.
                system("cls");
                printf("\n\t\t====================================================");
                printf("\n\n\t\t\t1. Main Menu\n\t\t\t0. Exit");
                printf("\n\t\t\tEnter your choise: ");
                scanf("%d",&ch2);
                switch (ch2)
                {
                    case 1:
                        goto yz;
                    case 0:
                        goto exit;
                }
            case 2:
                quiz();   //quiz function call.
                system("cls");
                printf("\n\t\t====================================================\n");
                printf("\n\t\t\t1. Main Menu\n\t\t\t0. Exit");
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
        exit:
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








