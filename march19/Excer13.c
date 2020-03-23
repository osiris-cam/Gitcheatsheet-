#include <stdio.h>
int main(int argc, char *argv[])
{
	if(argc != 2) { //If we have one argument, it means that the user didnt write an argument
		printf("ERROR: You need one argument.\n");
		// this is how you abort a program
		return 1;
	}
	int i = 0;
	for(i = 0; argv[1][i] != '\0'; i++) {
		char letter = argv[1][i]; // [] [] this to take only a letter
		switch(letter) { //to check if there is a vowel in the argument
			case 'a': //are there a's?
			case 'A':
				printf("%d: 'A'\n", i);
				break;
			case 'e': //are there e's?
			case 'E':
				printf("%d: 'E'\n", i);
				break;
			case 'i': //are there i's?
			case 'I':
				printf("%d: 'I'\n", i);
				break;
			case 'o': //is there o's?
			case 'O':
				printf("%d: 'O'\n", i);
				break;
			case 'u':
			case 'U':
				printf("%d: 'U'\n", i);
				break;
			case 'y':
			case 'Y':
				if(i > 2) { //if this happens, so take it like a vowel
				// it's only sometimes Y
					printf("%d: 'Y'\n", i);
				}
				break;
			default:
				printf("%d: %c is not a vowel\n", i, letter); //The letter is not a vowel
			}
		}
	return 0;
}

								//EXTRA CREDIT//

//QUESTION 1: Write another program that uses math on the letter to convert it to lowercase, and then remove all the extraneous uppercase letters in the switch:

	/* 

char lowercase(char letter)
{
    if (letter >= 97 && letter <= 122) { //We need to use ASCII characters. The lowercase letters range from 97 to 122 (a- z)
        return letter; //Return the letter if it is in the range
    } else if (letter >= 65 && letter <=90) { //In ASCII, capital letters range from 65 to 90 (A-Z).
        return letter + 32; //To those letters we need to make a change to lowercase. From 65 to 97 (From A to a) we need to advance 32 for this reason we add 32
    } else {
        return letter; //If the letter is already lowercase, return it
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("ERROR: You need one argument.\n");
        
        // this is how you abort a program
        return 1;
    }

    int i = 0;
    for (i = 0; argv[1][i] != '\0'; i++) {
        char letter = argv[1][i];
        char letter_lowercase = lowercase(letter); //We assign the previous analysis to this variable

        switch (letter_lowercase) {
            case 'a':
                printf("%d: 'A'\n", i);
                break;
            case 'e':
                printf("%d: 'E'\n", i);
                break;
            case 'i':
                printf("%d: 'I'\n", i);
                break;
            case 'o':
                printf("%d: 'O'\n", i);
                break;
            case 'u':
                printf("%d: 'U'\n", i);
                break;
            case 'y':
                if (i > 2) {
                    // it's only sometimes Y
                    printf("%d: 'Y'\n", i);
                }

                break;
            default:
                printf("%d: %c is not a vowel\n", i, letter);
        }
    }

PRINT:
$ ./prueba.exe Osiris
0: 'O'
1: s is not a vowel
2: 'I'
3: r is not a vowel
4: 'I'
5: s is not a vowel
*/

//QUESTION 2: Use the ',' (comma) to initialize letter in the for-loop: It prints the same

	/*
    int i = 0;
    char letter = 0;
    for (i = 0; letter = argv[1][i], letter != '\0'; i++) { //HEREEEEEEE
        switch (letter) {
            case 'a':
            case 'A':
                printf("%d: 'A'\n", i);
                break;
            case 'e':
            case 'E':
                printf("%d: 'E'\n", i);
                break;
            case 'i':
            case 'I':
                printf("%d: 'I'\n", i);
                break;
            case 'o':
            case 'O':
                printf("%d: 'O'\n", i);
                break;
            case 'u':
            case 'U':
                printf("%d: 'U'\n", i);
                break;
            case 'y':
            case 'Y':
                if (i > 2) {
                    // it's only sometimes Y
                    printf("%d: 'Y'\n", i);
                }*/

//QUESTION 3: Make it handle all of the arguments you pass it with yet another for-loop.

	/*

    int j = 0;
    int i = 0;
    char letter = 0;
    char *arg1;
    
    for (j = 1; j < argc; j++) {
        numarg = argv[j]; //I want to count my arguments, for example: "OSIRIS CAMARA". Here we have 2 and for each argument, we print
        printf("Argument %d: %s\n", j, numarg);
        
        for (i = 0; letter = numarg[i], letter != '\0'; i++) { //We analyze for each argument 
            switch (letter) {
                case 'a':
                case 'A':
                    printf("%d: 'A'\n", i);
                    break;
                case 'e':
                case 'E':
                    printf("%d: 'E'\n", i);
                    break;
                case 'i':
                case 'I':
                    printf("%d: 'I'\n", i);
                    break;
                case 'o':
                case 'O':
                    printf("%d: 'O'\n", i);
                    break;
                case 'u':
                case 'U':
                    printf("%d: 'U'\n", i);
                    break;
                case 'y':
                case 'Y':
                    if (i > 2) {
                        // it's only sometimes Y
                        printf("%d: 'Y'\n", i);
                    }
    
                    break;
                default:
                    printf("%d: %c is not a vowel\n", i, letter);
            }
        }
    }

PRINT:
$ ./prueba Osi Cam
Argument 1: Osi
0: 'O'
1: s is not a vowel
2: 'i'
Argument 2: Cam
0: C is not a vowel
1: 'a' 
2: m is not a vowel 
3: w is not a vowel*/

//QUESTION  4: Convert this switch-statement to an if-statement. Which do you like better? 
//R= Well it depends, because the switch is for particular cases. Obvious that for an argument it is very comfortable, but for more arguments it cannot. I prefer the if-else.

	/*
	int i = 0;
  	for (i = 0; argv[1][i] != '\0'; i++) {
        char letter = argv[1][i];

        if (letter == 'a' || letter == 'A') {
            printf("%d: 'A'\n", i);
        }
	else if (letter == 'e' || letter == 'E') {
            printf("%d: 'E'\n", i);
        }
	else if (letter == 'i' || letter == 'I') {
            printf("%d: 'I'\n", i);
        }
	else if (letter == 'o' || letter == 'O') {
            printf("%d: 'O'\n", i);
        }
	else if (letter == 'u' || letter == 'U') {
            printf("%d: 'U'\n", i);
        }
	else if (letter == 'y' || letter == 'Y') {
            if (i > 2) {
                printf("%d: 'Y'\n", i);
            }
        }
	else {
            printf("%d: %c is not a vowel\n", i, letter);
        }
    }

    return 0;
} */


//QUESTION 5: In the case for 'Y' I have the break outside the if-statement. What's the impact of this and what happens if you move it inside the if-statement. 
//Prove to yourself that you're right.

	/*If it is outside the switch ends correctly. If it is inside, the code continues executing in that part.


break inside:

$ ./prueba jiji
0: j is not a vowel
1: 'I'
2: j is not a vowel
3: 'I'


break outside:

$ ./prueba jiji
1: 'I'
2: 'I' */
