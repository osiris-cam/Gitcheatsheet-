#include <stdio.h>
#include <ctype.h>
// forward declarations
	int can_print_it(char ch); //change the letter to ascii numbers (the parameters)
	void print_letters(char arg[]);
void print_arguments(int argc, char *argv[]){
	int i = 0;
	for(i = 0; i < argc; i++) { //loop the argumets
		print_letters(argv[i]); //print the elements
	}
}

void print_letters(char arg[]){
	int i = 0;
	for(i = 0; arg[i] != '\0'; i++) { 
		char ch = arg[i]; //this parameter ascii, now is taken like arg[]
		if(can_print_it(ch)) { // print if is the value
			printf("'%c' == %d ", ch, ch); // if exist the equivalence, print. 
		}
	}
	printf("\n");
} 

int can_print_it(char ch){
	return isalpha(ch) || isblank(ch); // isalpha is for checks whether a character is an alphabet or not. Isblank returns non-zero if ch is a character for which isspace() returns true and is used to separate words.
}

int main(int argc, char *argv[]){
	print_arguments(argc, argv); //print out the characters and ASCII codes for any that are "alpha" or "blanks".
	return 0;
}

					//EXTRACREDIT//

//QUESTION 1: Rework these functions so that you have fewer functions. For example, do you really need can_print_it?: R= No it is not neccesary. It print the same

/* ...

void print_letters(char arg[])
{
    int i = 0;
    
    for (i = 0; arg[i] != '\0'; i++) {
        char ch = arg[i];
        
        if (isalpha(ch) || isblank(ch)) { //I can do te function of can_print_it in this function
            printf("'%c' == %d ", ch, ch);
        }
    }
    
    printf("\n");
}

int main(int argc, char *argv[])
{
    int i = 0;
    
    for (i = 0; i < argc; i++) { // I can do the function of print_arguments in this function
        print_letters(argv[i]);
    }
    
    return 0;
}
*/

//QUESTION 2: Have print_arguments figure how long each argument string is using the strlen function, and then pass that length to print_letters. 
//Then, rewrite print_letters so it only processes this fixed length and doesn't rely on the '\0' terminator. You will need the #include <string.h> for this: R= It prints the same

/*
void print_arguments(int argc, char *argv[])
{
    int i = 0;
    
    for (i = 0; i < argc; i++) {
        print_letters(argv[i], strlen(argv[i]));
    }
} */



//QUESTION 3: Use man to lookup information on isalpha and isblank. Use the other similar functions to print out only digits or other characters:

/*
int can_print_it(char ch){
    return isdigit(ch) || ispunct(ch); //HEREEEEEEEE
}

int main(int argc, char *argv[]){
    print_arguments(argc, argv);
    return 0;
}

PRINTS: Print ASCII values
$ ./Excer14
'.' == 46 '/' == 47 '1' == 49 '4' == 52*/


//QUESTION 4: Go read about how different people like to format their functions. Never use the "K&R syntax" as it's antiquated and confusing, 
//but understand what it's doing in case you run into someone who likes it.

/*
K&R code also allowed: int foo(a, p) char *p; { … }. Arguments for which a type was not explicitly defined 
were assumed to be int. Note, too, that you could write: foo (a, b, c, d, e, f, g) double f; char *e, *b; { … }, 
not only missing the return type (assumed to be int) but also missing explicit types*/
//for a number of arguments (a, c, d, g — assumed to be int, therefore), and listing the types of the other arguments in an order unrelated to the sequence in which the arguments appear in the parameter list.
