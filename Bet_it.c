#include <stdio.h>
#include <time.h>
#include <string.h>

int main()
{
    int credit= 15;
    time_t t;
    srand(time(&t));

    //WELCOME MESSAGE
    printf("\t\t\tWELCOME TO BET IT - C\n\n\n\n");
    printf("########################################################################################################\n\n");
    printf("\tIn this game you can do what humans have done for centuries; bet!.\n");
    printf("\tDon't freak out, you will bet fake money, thanks god. So, in this very simple game you have\n");
    printf("\ttwo modes: wild bets and normal bets, where you can decide whether be careful\n");
    printf("\tor be totally careless and risk everything you have (It's funny when it's risky, ain't it?)\n");
    printf("\tBut pay attention that there's a catch. Though you won't lose real money, you will lose credits\n");
    printf("\tand you need credits to make a bet, if you don't have enough, unfortunely you'll have to recharge.\n\n\n");
    printf("########################################################################################################\n\n");


    //TOUR
    int choice;

    printf("\tLet's make a little tour in our very funny features, choose what you want to learn first\n\n");
    printf("\tThis is the tour\n\n");
    printf("1. How do credits and recharging work?\n");
    printf("2. How do normal bets work?\n");
    printf("3. How do wild bets work?\n");
    printf("4. Press 1 to continue\n");


do {

        scanf("%d", &choice);


    switch(choice) {

    case(1):
        {
            printf("\n\n1. How do credits and recharging work?");
            printf("\n You have a credit score. Which right now is a total of %d.", credit);
            printf("You need credits scores to make bets. If you don't have any, you'll have to recharge\n recharging is easy, press 3 after finishing the tour and every 5 seconds \n a credit will be added to your balance");
            printf("\n  Press 1 to continue\n");
            scanf("%d", &choice);




        }
        case(2):
        {
            printf("\n\n2. How do normal bets work?");
            printf("\n You have to guess a number between 1 and 10");
            printf("\n If you guess correctly, your credit will add 20 points" );
            printf("\n But don't celebrate yet, because every wrong guess will subtract one point from your balance");
            printf("\n If you guess correctly at first, kudos to you! You'll have 20 net points.");
            printf("\n Press 1 to continue.\n");
            scanf("%d", &choice);






        }
        case(3):
        {
            printf("\n\n3. How do wild bets work?");
            printf("\n You can choose to be totally careless and risk all you have, this is the deal:");
            printf("\n 1. Lose half or multiply by a factor of two. You need 10 credits to make a bet." );
            printf("\n Press 1 to finish the tour.\n");
            scanf("%d", &choice);



        }
        case (4): {
            break;
        }
        default: printf("\n%d is not a valid choice\n", choice);
 printf("Try again\n");


    }

} while((choice<1) || (choice>4));

//Setting the loop and switch

for (int i=0; ; i++) {


    int choice2;
//Mechanism to avoid giving an infinite welcome message after user enters first time
    char welcome[50] = {"Now you know how this works."};
if (i>0) {
    strcpy(welcome, " ");
}


        printf("\n\n\n\nWelcome %s\n\n Your credit balance is %d.  \nWhat would you like to do? \n1. Normal bets. \n2.Wild bets. \n3.Recharging.", welcome, credit);
        scanf("%d", &choice2);
        int choice3;
    switch (choice2) {
     case(1):
         {




            do {
                    //if mechanism to prevent user from playing without credits.
                    if(credit>0)
             {
                    int guessNumber;
                    int resultNumber;

            //Betting mechanism, generator of numbers and testing equals.

                    printf("\nThis is a normal bet. Tell me a number from 1 to 10\n");
             scanf("%d", &guessNumber);
             resultNumber = (rand() % 9) +1;
             char butAnd[10];
             (guessNumber == resultNumber)? (strcpy(butAnd, "and")):(strcpy(butAnd, "but"));
             printf("\nWell my dear, your guess was %d, %s the result was %d\n\n", guessNumber, butAnd, resultNumber);

             //setting a two cases if statement to add or to subtract credits from user

             if (guessNumber != resultNumber) {
                credit--;
                printf("\nYou lost one credit, now you have %d", credit);
             }
             else {
                credit = credit + 20;
                printf("\nYou have earned 20 credits, now you have %d", credit);
             }

             printf("\nWould you like to bet again? Press 1 if you want. Any other key to finish.\n");
             scanf("%d", &choice3);

             }
            else {
                printf ("\n\nI'm sorry, you don't have enough credits try recharging");
                break;
            }
            }while (choice3 == 1);
            break;
        };


     case (2):
        {
            do {
                    //if mechanism to prevent user from playing without credits.
                    if(credit>9)
             {
                    int guessNumber2;
                    int resultNumber2;

            //Betting mechanism, generator of numbers and testing equals.

                    printf("\nThis is a wild bet. Tell me a number from 1 to 5\n");
             scanf("%d", &guessNumber2);
             resultNumber2 = (rand() % 4) +1;
             char butAnd2[10];
             (guessNumber2 == resultNumber2)? (strcpy(butAnd2, "and")):(strcpy(butAnd2, "but"));
             printf("\nWell my dear, your guess was %d, %s the result was %d\n\n", guessNumber2, butAnd2, resultNumber2);

             //setting a two cases if statement to add or to subtract credits from user

             if (guessNumber2 != resultNumber2) {
                credit = credit/2;
                printf("\nYou lost half of your credits, now you have %d", credit);
             }
             else {
                credit = credit * 4;
                printf("\nYou have four times your credits, now you have %d", credit);
             }

             printf("\nWould you like to bet again? Press 1 if you want. Any other key to finish.\n");
             scanf("%d", &choice3);

             }
            else {
                printf ("\n\nI'm sorry, you don't have enough credits try recharging");
                break;
            }
            }while (choice3 == 1);
            break;

        }


    //Recharging feature.
case (3): {
    int choice4;
    int count = 0;
    time_t start_time = time(NULL);
    time_t current_time;

    printf("\nWelcome my dear gambler, you have ran out of credit, ain't you? \n Don't worry, listen to jazz and wait until your tank is filled up. ");

    do {

    for(int i=0; i<5 ; i++)
    {

    while (count < 5) {
        current_time = time(NULL);
        if (current_time - start_time >= 1) {
            start_time = current_time;
            count++;
        }
    }
    count = 0;
    credit++;
    printf("\nYou now have %d", credit);


    }

    printf("\nYou have added 5 precious coins, would you like to add 5 more? \n\n Press 1 if yes. Any other key if not. ");
    scanf("%d", &choice4);
    }while(choice4 == 1);

    break;
    }
    return 0;
}
}



}









