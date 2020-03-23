#include <stdio.h>

int main(int argc, char *argv[])
{
    // create two arrays we care about
    int ages[] = { 23, 43, 12, 89, 2 };
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    // safely get the size of ages
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    // first way using indexing
    for (i = 0; i < count; i++) {
        printf("%s has %d years alive.\n", names[i], ages[i]);
    }

    printf("---\n");

    // setup the pointers to the start of the arrays
    int *cur_age = (int*)names;
    char **cur_name = names;

    // second way using pointers
    for (i = 0; i < count; i++) {
        printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
    }

    printf("---\n");

    // third way, pointers are just arrays
    for (i = 0; i < count; i++) {
        printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
    }

    printf("---\n");

    // fourth way with pointers in a stuipd conplex way
    for (cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++) {
        printf("%s lived %d years so far.\n", *cur_name, *cur_age);
    }

    for (i = 0; i < count; i++) { //QUESTION 5
        printf("The address of value %d is: %p, and the address of value %s is: %p\n", ages[i], ages + i, names[i], names + i);
    }


    return 0;
}




										//EXTRA CREDITS//

//QUESTION 1: Rewrite all the array usage in this program so that it's pointers.

/* 

for (i = 0; i < count; i++) {
    printf("%s has %d years alive.\n", *(names + i), *(ages + i));
}*/


//QUESTION 2: Rewrite all the pointer usage so they're arrays.
/*
But it's already included in the original code. The only one missing is this, but it doesn't make much sense to do it:*/

//QUESTION 3: Go back to some of the other programs that use arrays and try to use pointers instead:

/* EXCER  11

#include <stdio.h>
int main(int argc, char *argv[])
{
	// go through each string in argv
	int i = 0;
	while(i < argc) {
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}
	// let's make our own array of strings
	char *states[] = {"California", "Oregon","Washington", "Texas"};
	char *pointerstate=  *states[]
	int num_states = 4;
	i = 0; // watch for this
	while(i < num_states) {
		printf("state %d: %s\n", i, states[i]);
		 printf("pointer state %d: %s\n", *pointerstate[i]) //HEREEEEEE
		i++;
	}
return 0;
}*/

//QUESTION 3: Process command line arguments using just pointers similar to how you did names in this one.

/* EXCER 14:

#include <stdio.h>
#include <ctype.h>

// forward declarations
int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
    int i = 0;

    for (i = 0; i < argc; i++) {
        print_letters(*(argv + i)); //HEREEEEEEEE
    }
} ...

PRINTS:
$ ./Excer15  ji
'E' == 69 'x' == 120
'c' == 99 'e' == 101
'r' == 114 '1' == 49 '5' == 53 'j' == 106
*/

//QUESTION 4: Play with combinations of getting the value of and the address of things.


/*

#include <stdio.h>

int main(int argc, char *argv[])
{
    char *names[] = { "Ronaldo","Victor", "Isabel", "Juan"};

    int i = 0;
    for (i = 0; i < 4; i++) {
        printf("value: %s, address: %p\n", *(names + i), names + i);
    }

    return 0;
} 
PRINTS:
$ ./prueba.exe
value: Ronaldo, address: 0061FF0C
value: Victor, address: 0061FF10
value: Isabel, address: 0061FF14
value: Juan, address: 0061FF18
*/

//QUESTION 5: Add another for-loop at the end that prints out the addresses these pointers are using. You'll need the %p format for printf.

/*
I've add this question in the origin code
PRINTS:
$ ./Excer15.exe
Alan has 23 years alive.
Frank has 43 years alive.
Mary has 12 years alive.
John has 89 years alive.
Lisa has 2 years alive.
---
Alan is 4214852 years old.
Frank is 4214857 years old.
Mary is 4214863 years old.
John is 4214868 years old.
Lisa is 4214873 years old.
---
Alan is 4214852 years old again.
Frank is 4214857 years old again.
Mary is 4214863 years old again.
John is 4214868 years old again.
Lisa is 4214873 years old again.
---
Alan lived 23 years so far.
Frank lived 43 years so far.
Mary lived 12 years so far.
John lived 89 years so far.
Lisa lived 2 years so far.
The address of value 23 is: 0061FEFC, and the address of value Alan is: 0061FEE8
The address of value 43 is: 0061FF00, and the address of value Frank is: 0061FEEC
The address of value 12 is: 0061FF04, and the address of value Mary is: 0061FEF0
The address of value 89 is: 0061FF08, and the address of value John is: 0061FEF4
The address of value 2 is: 0061FF0C, and the address of value Lisa is: 0061FEF8
*/

//QUESTION 6: Change all with functions 

/*#include <stdio.h>

void funcion1(int ages[], char *names[], int count)
{
    int i = 0;
    
    for (i = 0; i < count; i++) {
        printf("%s has %d years alive.\n", names[i], ages[i]);
    }
}

void funcion2(int *ages, char **names, int count)
{
    int i = 0;
    
    for (i = 0; i < count; i++) {
        printf("%s is %d years old.\n", *(names + i), *(ages + i));
    }
}

void funcion3(int *ages, char **names, int count)
{
    int i = 0;
    
    for (i = 0; i < count; i++) {
        printf("%s is %d years old again.\n", names[i], ages[i]);
    }
}

void funcion4(int ages[], char *names[], int *cur_age, char **cur_name, int count)
{
    for (cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++) {
        printf("%s lived %d years so far.\n", *cur_name, *cur_age);
    }
}

int main(int argc, char *argv[])
{
    // create two arrays we care about
    int ages[] = { 23, 43, 12, 89, 2 };
    char *names[] = {"Alan", "Frank","Mary", "John", "Lisa"
    };
    
    // safely get the size of ages
    int count = sizeof(ages) / sizeof(int);
    
    // first way using indexing
    funcion1(ages, names, count);
    
    printf("---\n");
    
    // setup the pointers to the start of the arrays
    int *cur_age = ages;
    char **cur_name = names;
    
    // second way using pointers
    fucnion2(cur_age, cur_name, count);
    
    printf("---\n");
    
    // third way, pointers are just arrays
    funcion3(cur_age, cur_name, count);
    
    printf("---\n");
    
    // fourth way with pointers in a stuipd conplex way
    funcion4(ages, names, cur_age, cur_name, count);
    
    return 0;
}
*/

//QUESTION :Change the for-loops to while-loops and see what works better for which kind of pointer usage.

/*

...
int count = sizeof(ages) / sizeof(int);
    int i = 0;
    
    // first way using indexing
    while (i < count) { //HEREEEE
        printf("%s has %d years alive.\n", names[i], ages[i]);
        i++;
    }
    
    printf("---\n");
    
    // setup the pointers to the start of the arrays
    int *cur_age = ages;
    char **cur_name = names;
    
    // second way using pointers
    i = 0;
    while (i < count) { //HEREEEE
        printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
        i++;
    }
    
    printf("---\n");
    
    // third way, pointers are just arrays
    i = 0;
    while (i < count) { //HEREEEE
        printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
        i++;
    }
    
    printf("---\n");
    
    // fourth way with pointers in a stuipd conplex way
    while (cur_age - ages < count) { //HEREEEE
        printf("%s lived %d years so far.\n", *cur_name, *cur_age);
        cur_name++;
        cur_age++;
    }
    
    return 0;

PRINTS:
THEE SAMEE */


