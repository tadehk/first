/*
	- First thing to do is make a menu for which the user will choose from
	- Display menu options for user and have them input their selection
	- 'C' has a function that will convert ASCII to integera called atoi(),
		which will have to be used because the user might enter a number as
		their selection or a letter to leave the program
	- Once input is set, if the choice is 1 then a game will start where they
		will have to guess the number, with the option to quit the game
	- If 2 is selected, then they will get to set a max for them selves up to a 
		thousand
	-

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main() {

	int max;
    char input[] = "";
    char userGuess[] = "";
	time_t t;

    menu:
	printf("Press 1 to play a game\n");
    printf("Press 2 to change the max number\n");
    printf("Press 3 to exit\n");
    printf("Enter your choice:\n");
	scanf("%s", &input);

    while (strcmp(input, "3") != 0) {
       
	    srand((unsigned) time(&t));
        int randomNumber= rand() % 100 + 1;
       
	    char random[1000];

        sprintf(random, "%d", randomNumber); 
		
        if (strcmp(input, "1") == 0) {
               
			    while (strcmp(userGuess, random) != 0) {
                  
					printf("Press 'q' to leave at anytime\n");
				    printf("Guess the number: ");
                    scanf("%s", &userGuess);
                  
				    if (strcmp(userGuess, "q") == 0) {
                        goto menu;
                    }
                   
				    int guess = atoi(userGuess);
                  
				    if (guess > randomNumber) {
						printf("Press 'q' to leave at anytime\n");
                        printf("You are too high\n");
                    } 
                    if (guess < randomNumber) {
						printf("Press 'q' to leave at anytime\n");
                        printf("You are too low\n");
                    } 
					if (guess == randomNumber) {
						printf("You Guessed the Number\n");
                	goto menu;
					}
                } 
                
        }
        if (strcmp(input, "2") == 0) {
          
		    printf("Enter New Max That is NOT negitive or 0: \n");
            scanf("%d", &max);
          
		    while ( max < 1) {
            printf("Enter new max that is NOT negitive or 0: \n");
                scanf("%d", &max);
			}
			goto menu;
        }
        else {
            goto menu;
        }

    }
    printf("Thank you for playing our Guessing Game");
}