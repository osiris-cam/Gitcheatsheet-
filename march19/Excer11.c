#include <stdio.h>
int main(int argc, char *argv[]) { // argc contains the number of arguments that have been entered. argv is my array of character pointers.
// go through each string in argv
	int i = 0;
	while(i< argc) {
		printf("arg %d: %s\n", i, argv[i]); //here arc 0 the first thing you write to run it
		i++;
	}

// let's make our own array of strings
	char *states[]= {"California", "Oregon","Washington", "Texas"}; //This entire array contains these elements
	int num_states = 4; // how many states are there
	i = 0; // watch for this
	while(i < num_states) {
		printf("state %d: %s\n", i, states[i]);
		i++;
	}
	return 0;
}


								//EXTRA CREDIT//

//QUESTION 1: Make these loops count backward by using i-- to start at argc and count down to 0. You may have to do some math to make the array indexes work right:

/*	 								int i = argc - 1;
    									while (i > 0) {
        									printf("arg %d: %s\n", i, argv[i]);
    										i--;
    									}

   									char *states[] = {"California", "Oregon","Washington", "Texas"};

    									int num_states = 4;
									i = num_states - 1;
    									while (i >= 0) {
        									printf("state %d: %s\n", i, states[i]);
        									i--;

    									}
								IMPRIME:
arg 3: Estado3
arg 2: Estado2
arg 1: Estado1
state 0: California
state 1: Oregon
state 2: Washington
state 3: Texas
*/

//QUESTION 2:Use a while loop to copy the values from argv into states.

/*
			int num_states = 4;
			i = 0;
    			while (i < argc) {
        			states[i] = argv[i];
        			i++;
			}
    			i = 0;
    			while (i < num_states) {
        			printf("state %d: %s\n", i, states[i]);
        			i++;
    			}

PRINT:
arg 0: ./Excer
state 0: ./Excer11
state 1: Oregon
state 2: Washington
state 3: Texas

$ ./Excer11 a b c d
arg 0: ./Excer11
arg 1: Estado1
arg 2: Estado2
arg 3: Estado3
arg 4: Estado4
state 0: ./Excer11
state 1: Estado1
state 2: Estado2
state 3: Estado3	*/

//QUESTION 3: Make this copy loop never fail such that if there's too many argv elements it won't put them all into states.

/*
				int i=0, j=0; //we declare variables so that our indexes are accounted
				while (i < argc) {
        			printf("arg %d: %s\n", i, argv[i]);
        			states[j+4] = argv[j]; //We know that in the variable states we have 4 variables, we need to add 1 for 
							//each index so that they are gradually interchanged with the argv
        			j++;
        			i++;
    				}
    				int num_states = 4+argc;//auxiliary variable to count each index
    				i = 0;// we initialize this variable again so we can loop
    				while (i < num_states) {// the loop
        			printf("state %d: %s\n", i, states[i]); //print
        			i++;
    			}
PRINT:
arg 0: ./Excer11
arg 1: Estado1
arg 2: Estado2
arg 3: Estado3
arg 4: Estado4
state 0: California
state 1: Oregon
state 2: Washington
state 3: Texas
state 4: ./Excer11
state 5: Estado1
state 6: Estado2
state 7: Estado3
state 8: Estado4 */

//QUESTION 4: Research if you've really copied these strings. The answer may surprise and confuse you though.
	//No, it didn't copied strings, it made the pointers in *states[] point to different string in memory.//

