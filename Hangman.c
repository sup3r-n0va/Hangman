//Hangman Game in C


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char USERINPUT[254];

int main(int argc, char *argv[]) 
{


	// word for the user to guess
	char CorrectWord[100] = "blackjacks";
	const int BLANKLINEARRAY = strlen(CorrectWord);
	//blank lines where the user has to type in
	//characters for the word
	char BlankWord[BLANKLINEARRAY];
	//user input for characters in the word
	char CharUserInput;
	//Users guess to for the word
	char UserGuess[BLANKLINEARRAY];
	//StickMan lives he starts off with 6 lives
	int StickManLives = 6;


	printf("***Welcome To The Hangman Game!***\n");
	printf("This is the word you have to guess\n");
	printf("Remember the letters are all lower case!");
	//Draw blank lines to show the number of characters in the word
	for(int i= 0; i < BLANKLINEARRAY; i++) {
		BlankWord[i] = '_';
		BlankWord[BLANKLINEARRAY] = printf("%c", BlankWord[i]);
		printf("%d", i + 1);
		printf("  ");
	}
	
	//Keeping asking the user for input until the user gets
	 //the right answer and fills in the word
	while(StickManLives > 0) {
		//First ask the user to guess the word
		printf("\nPlease guess the word: ");
		if(fgets(USERINPUT, sizeof(USERINPUT), stdin)) {
			if(1 == sscanf(USERINPUT, "%s", &UserGuess)) {
			}
		}
		//if the user gets the correct word
		if(UserGuess[BLANKLINEARRAY] == CorrectWord[BLANKLINEARRAY]) {
			printf("Well done that was the word!");	
			break;
		}
		else {
			//How many lives the stickman has
			printf("Stickman has %d lives!\n", StickManLives);
		}
			//ask the user for characters in for the word
			printf("\nPlease input a character: ");
			if(fgets(USERINPUT, sizeof(USERINPUT), stdin)) {
				if(1 == sscanf(USERINPUT, "%c", &CharUserInput)) {
				}
			}
			if((CharUserInput == CorrectWord[0]) || (CharUserInput == CorrectWord[1])  
			|| (CharUserInput == CorrectWord[2]) || (CharUserInput == CorrectWord[3])
			|| (CharUserInput == CorrectWord[4]) || (CharUserInput == CorrectWord[5])
			|| (CharUserInput == CorrectWord[6]) || (CharUserInput == CorrectWord[7])
			|| (CharUserInput == CorrectWord[8]) || (CharUserInput == CorrectWord[9])) {
				if(CharUserInput == CorrectWord[1]) {
					BlankWord[1] = CorrectWord[1];
					//print message to show user that this 
					//was the correct answer
					printf("That is the second letter in the word\n");
					printf("\n%s", BlankWord);
				}
				else if(CharUserInput == CorrectWord[0]) {
					BlankWord[0] = CorrectWord[0];
					printf("That is the first letter in the word");
					printf("\n%s", BlankWord);
				}
				else if(CharUserInput == (CorrectWord[2]) && (CorrectWord[3]) && (CorrectWord[8]) ) {
					BlankWord[2] = CorrectWord[2];
					BlankWord[3] = CorrectWord[3];
					BlankWord[8] = CorrectWord[8];
					printf("That is the third letter in the word\n");
					printf("Also that is the fourth letter in the word\n");
					printf("And that is the ninth letter in the word\n");
					printf("\n%s", BlankWord);
				}
				else if(CharUserInput == (CorrectWord[4]) && (CorrectWord[6])) {
					BlankWord[4] = CorrectWord[4];
					BlankWord[6] = CorrectWord[6];
					printf("That is the fifth letter in the word");
					printf("Also that is the seventh letter in the word");	
					printf("\n%s", BlankWord);
				}
				else if(CharUserInput == CorrectWord[5]) {
					BlankWord[5] = CorrectWord[5];
					printf("That is the sixth letter in the word");
					printf("\n%s", BlankWord);
				}
				else if(CharUserInput == CorrectWord[7]) {
					BlankWord[7] = CorrectWord[7];
					printf("That is the eigth letter in the word");
					printf("\n%s", BlankWord);
				}
				else {
					CharUserInput == CorrectWord[9];
					BlankWord[9] = CorrectWord[9];
					printf("That is the tenth letter in the word");
					printf("\n%s", BlankWord);
				}
			
			}	
			else {
				//decrement one life from the stickman
				if(StickManLives == 6) {
					StickManLives--;
				}
 				else if(StickManLives == 5) {
					StickManLives--;
					printf("  ----|");
					
				}
				else if(StickManLives == 4) {
					StickManLives--;
					printf(" ----|\n");
					printf("    (_)");
				}
				else if(StickManLives == 3) {
					StickManLives--;
					printf(" ----|\n");
					printf("    (_)\n");
					printf("  \\  | /\n");

				}
				else if(StickManLives == 2) {
					StickManLives--;
					printf(" ----|\n");
					printf("    (_)\n");
					printf("  \\  | /\n");
					printf("     |\n");
				}
				else {	
					StickManLives--;
					printf(" ----|\n");
					printf("    (_)\n");
					printf("  \\  | /\n");
					printf("     |\n");
					printf("    / \\");
					printf("\n");
				}
		
			}	
	}
            		
	return 0;
}


