#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void startGame();
void repeatGame();

void startGame()
{
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100 + 1; // Generates a random number between 1 and 100
    // printf("\n\t\t\tThe number is %d\n", number);

    // Keep running the loop until the number is guessed
    do{
        printf("\n\t\t\t==> Guess the number between 1 to 100 <==\n\t\t\t");
        scanf("%d", &guess);
        if(guess>number){
            printf("\t\t\tLower number please!\n");
        }
        else if(guess<number){
            printf("\t\t\tHigher number please!\n");
        }
        else{
            printf("\n\t\t\t## Congratulations.......!!!!! \n\t\t\tYou guessed it in %d attempts!\n", nguesses);
        }
        nguesses++;
    }while(guess!=number);

    repeatGame();
}

void repeatGame()
{
    char ch;
    printf("\n\n\t\t\t==> Do you want to play it again?? [y/n] --> ");
    ch = getch();
    
    if(ch == 'y' || ch == 'Y')
    {
        printf("\n");
        startGame();
    }
    else if (ch == 'n' || ch == 'N')
    {
        printf("\n\n\t\t\t ******* Thank You ******* \n");
        exit(0);
    }
    else{
        printf("Invalid Choice....Please Enter correct key...");
        repeatGame();
    }
}

int main()
{
    system("cls");
    printf("\n\t\t\t ***** Number Guessing Game *****\n");
    startGame();
    return 0;
}