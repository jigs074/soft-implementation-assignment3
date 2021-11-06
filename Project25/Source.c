#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include "main.h"
#define SIZE 15



char rpsgame(char person1[SIZE], char person2[SIZE]) {
	char player1 = "Player1";
	char player2 = "Player2";
	char draw = "Draw";
	
	if (strcmp(person1, "Rock") == 0 && strcmp(person2, "Rock") == 0 || strcmp(person1, "Paper") == 0 && strcmp(person2, "Paper") == 0 || strcmp(person1, "Scissor") == 0 && strcmp(person2, "Scissor") == 0) {
		return "Draw";

	}


	// logic for outcome to be draw

	if (strcmp(person1, "Rock") == 0 && strcmp(person2, "Scissor") == 0 || strcmp(person1, "Paper") == 0 && strcmp(person2, "Rock") == 0 || strcmp(person1, "Scissor") == 0 && strcmp(person2, "Paper") == 0) {
		printf("player1\n");
	}
	// logic for the win of player 1

	if (strcmp(person1, "Rock") == 0 && strcmp(person2, "Paper") == 0 || strcmp(person1, "Paper") == 0 && strcmp(person2, "Scissor") == 0 || strcmp(person1, "Scissor") == 0 && strcmp(person2, "Rock") == 0) {
		printf("player2\n");
	}
	// logic for the win of player2

	if (strcmp(person1, "Rock") != 0 && strcmp(person1, "Paper") != 0 && strcmp(person1, "Scissor") != 0 && strcmp(person2, "Rock") != 0 && strcmp(person2, "Paper") != 0 && strcmp(person2, "Scissor") != 0) {
		printf("invalid\n");
	}
}

int main(void) {
	char person1[SIZE];
	char person2[SIZE];

	printf("enter the input of player1\n");
	gets(person1);     // taking an input from user of rock paper and scissors 
	printf("enter the input of player2\n");
	gets(person2);
	rpsgame(person1, person2);
}

