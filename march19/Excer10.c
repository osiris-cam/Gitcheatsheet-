#include <stdio.h>
int main(int argc, char *argv[]){
	int i = 0;
	// go through each string in argv
	// why am I skipping argv[0]?
	for(i = 1; i < argc; i++) {
	printf("arg %d: %s\n", i, argv[i]);
	}
	// let's make our own array of strings
	char *states[] = { "California", "Oregon","Washington", "Texas"};
	int num_states = 4;
	for(i = 0; i < num_states; i++) {
	printf("state %d: %s\n", i, states[i]);}
	return 0;
	}
						//EXTRAPOINTS//
//QUESTION 1:
	//Figure out what kind of code you can put into the parts of a for-loop .
	/*
	1.	{ int i = 0;
		char *states[] = {"California", "Oregon","Washigton", "Texas"};
	i++*/ 	

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
	*/

//QUESTION 3:
	//Read what a NULL is and try to use it in one of the elements of the states array to see what it'll print.

	/* It prints (null)
		{
    					int i = 0;
    					char *states[] = {"California", "Oregon","Washington", NULL};
	*/

//QUESTION 4:
	//See if you can assign an element from the states array to the argv array before printing both. Try the inverse.

	/*
		1.
			 argv[1] = states[1];
    			for (i = 1; i < argc; i++) {
        		printf("arg %d: %s\n", i, argv[i]);

	2.
			states[0] = argv[1];
    			for (i = 1; i < argc; i++) {
        		printf("arg %d: %s\n", i, argv[i]);
    			}*/
