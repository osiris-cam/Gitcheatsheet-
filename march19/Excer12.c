#include <stdio.h>
int main(int argc, char *argv[]){
	int i = 0;
	if(argc == 1) { //If we have one argument the do this:
		printf("You don't have an argument.\n");//we know that the like default the first argument is ./Excer12.exe
	}
	else if (argc == 2) {
        	printf("You only have one argument. You suck.\n"); //Two because our "first" thing that we write is the second
	}
	else if(argc > 1 && argc < 4) { //if the argument is greater than 1 and less than 4, print the arguments
		printf("Here's your arguments:\n");
		for(i = 0; i < argc; i++) {
			printf("%s ", argv[i]);
		}
		printf("\n");
	}
	else {
		printf("You have too many arguments. You suck.\n"); //Is greater than 4
	}
	return 0;
}


							//EXTRA CREDIT//
//QUESTION 1: You were briefly introduced to &&, which does an "and" comparison, so go research online the different "boolean operators":

/* Boolean operators form the basis of mathematical sets and database logic.

They connect your search words together to either narrow or broaden your set of results.
The three basic boolean operators are: AND (&&), OR( ||) , and NOT (!). */

//QUESTION 2: Write a few more test cases for this program to see what you can come up with:

				/*
					if (argc == 1) {
        					printf("You only have one argument. You suck.\n");
					}
					else if (argc > 1 && argc < 7  argc ! 2) {
        					printf("Here's your arguments:\n");
        						for (i = 0; i < argc; i++) {
            							printf("%s ", argv[i]);
        						}
					} */
//QUESTION 3: Go back to Exercises 10 and 11, and use if-statements to make the loops exit early. You'll need the break statement to do that. Go read about it.

						/* EXERCISE 10

						#include <stdio.h>

int main (int argc, char *argv[])
{
    int i = 0;
    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    // let's make our own array of strings
    char *states[] = {"California", "Oregon","Washington", "Texas"};

    int num_states = 4;

    for (i = 0; i < num_states; i++) {
        if (i == 3) { //HEREEEEEE
            break;
        }

        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
} */

						/* EXERCISE 11

#include <stdio.h>

int main(int argc, char *argv[])
{

    int i = 0;
    while (i < argc) {
        printf("arg %d: %s\n", i, argv[i]);
        i++;
    }
    char *states[] = {"California", "Oregon","Washington", "Texas"};

    int num_states = 4;
    i = 0;
    while (i < num_states) {
        printf("state %d: %s\n", i, states[i]);
        i++;

        if (i == 3) { //HEREEEEEEEEE
            break;
        }
    }

    return 0;
} */

//QUESTION 4: Is the first test really saying the right thing? To you the "first argument" isn't the same first argument a user entered. Fix it.
		//Teacher, I decided  fixed it in the original code. So my answer is there :)
