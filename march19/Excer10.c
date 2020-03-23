#include <stdio.h>
int main(int argc, char *argv[]){
	int i = 0;
	// go through each string in argv
	// why am I skipping argv[0]?
	for(i = 1; i < argc; i++) { // to print the argv, we need to verify our arguments. So while this loop is less the argument, the content is goig to print
	printf("arg %d: %s\n", i, argv[i]);
	}
	// let's make our own array of strings
	char *states[] = { "California", "Oregon","Washington", "Texas"}; //Here we have our elemements
	int num_states = 4; //and the arguments are defined
	for(i = 0; i < num_states; i++) { //here this will print the name of the states, as long as it is not greater than the 4 arguments
	printf("state %d: %s\n", i, states[i]);}
	return 0;
	}
						//EXTRAPOINTS//
//QUESTION 1:
	//Figure out what kind of code you can put into the parts of a for-loop .
	/*
	1.	{ int i = 0;
		char *states[] = {"California", "Oregon","Washigton", "Texas"};
	i++
PRINTS:
$ ./Excer10
state 0: California
state 1: Oregon
state 2: Washington
state 3: Texas*/ 	

//QUESTION 2:
	//Look up how to use the ',' (comma) character to separate multiple statements in the parts of the for-loop, but between the ';' (semicolon) characters.
	/*
	{
					int i = 0;

    					char *states[] = {"California", "Oregon","Washington", "Texas"};

    					int num_states = 0;

    					for (i = 0, num_states = 4; i<num_states; i++) {
       					printf("state %i: %s\n", i, states[i]);
    					}
PRINTS:
$ ./Excer10
state 0: California
state 1: Oregon
state 2: Washington
state 3: Texas*/

//QUESTION 3:Read what a NULL is and try to use it in one of the elements of the states array to see what it'll print.
	//Read what a NULL is and try to use it in one of the elements of the states array to see what it'll print.

	/* It prints (null)
		{
    					int i = 0;
    					char *states[] = {"California", "Oregon","Washington", NULL};
	*/

//QUESTION 4: See if you can assign an element from the states array to the argv array before printing both. Try the inverse.

			
				// STATES ARRAY TO ARGV ARRAY:
/*
     argv[1] = states[1]; //HEREEEEE
    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    int num_states = 4;

    for (i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }
PRINTS:
$ ./Excer10 lalala
arg 1: Oregon
state 0: California
state 1: Oregon
state 2: Washington
state 3: Texas*/

			//ARGV ARRAY TO STATES:
/*
    states[0] = argv[1]; //HEREEEEEEE
    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    int num_states = 4;

    for (i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

PRINTS:
$ ./Excer10 lalala
arg 1: lalala
state 0: lalala
state 1: Oregon
state 2: Washington
state 3: Texas*/
