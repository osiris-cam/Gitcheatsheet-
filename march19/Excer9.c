#include <stdio.h>

int main(int argc, char *argv[]){
	int numbers[4] = {0}; //Declare my array with int value
	char name[4] = {'a'}; //Declaere my array with a char value with a capacity of 4 index (all of them have the value 'a')

	// first, print them out raw
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]); // print each each content of the index
	printf("name each: %c %c %c %c\n",name[0], name[1], name[2], name[3]); //It just has 'a'
	printf("name: %s\n", name); //Print name, that is 'a'

	// setup the numbers
	numbers[0] = 1; //It is assigned a new value
	numbers[1] = 2; //It is assigned a new value
	numbers[2] = 3; //It is assigned a new value
	numbers[3] = 4; //It is assigned a new value

	// setup the name (ZED)
	name[0] = 'Z'; //It is assigned a new value
	name[1] = 'e'; //It is assigned a new value
	name[2] = 'd'; //It is assigned a new value
	name[3] = '\0'; //It is assigned a new value (is null)

	// then print them out initialized
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]); //Print the new values
	printf("name each: %c %c %c %c\n",name[0], name[1], name[2], name[3]); //print the new values

	// print the name like a string
	printf("name: %s\n", name); //print all the string

	// another way to use name
	char *another = "Zed"; //Her we have the string in a general way, but is the same.
	printf("another: %s\n", another);

	printf("another each: %c %c %c %c\n",another[0], another[1], another[2], another[3]);

    return 0;
}

								//EXTRAPOINTS//

// QUESTION 1:
//* Assign the characters into numbers and then use printf to print them a character at a time. What kind of compiler warnings did you get?:
	/*
	Run with Valgrind:
	==1192== Memcheck, a memory error detector
	==1192== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
	==1192== Using Valgrind-3.9.0 and LibVEX; rerun with -h for copyright info
	==1192== Command: ./Excer9
	==1192==
	numbers: o s i r
	==1192==
	==1192== HEAP SUMMARY:
	==1192==     in use at exit: 0 bytes in 0 blocks
	==1192==   total heap usage: 0 allocs, 0 frees, 0 bytes allocated
	==1192==
	==1192== All heap blocks were freed -- no leaks are possible
	==1192==
	==1192== For counts of detected and suppressed errors, rerun with: -v
	==1192== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 1 from 1) */

// QUESTION 2:
//Do the inverse for name, trying to treat it like an array of int and print it out one int at a time. What does Valgrind think of that?:
	/*
	Run with Valgrind:

	==1048== Memcheck, a memory error detector
	==1048== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
	==1048== Using Valgrind-3.9.0 and LibVEX; rerun with -h for copyright info
	==1048== Command: ./Excer9
	==1048==
	name each: 100 101 102 103
	==1048==
	==1048== HEAP SUMMARY:
	==1048==     in use at exit: 0 bytes in 0 blocks
	==1048==   total heap usage: 0 allocs, 0 frees, 0 bytes allocated
	==1048==
	==1048== All heap blocks were freed -- no leaks are possible
	==1048==
	==1048== For counts of detected and suppressed errors, rerun with: -v
	==1048== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 1 from 1) */

//QUESTION 3:
//If an array of characters is 4 bytes long, and an integer is 4 bytes long, then can you treat the whole name array like it's just an integer? How might you accomplish this crazy hack?:

	/*We know that in our array there are 4 bytes array and that means that it represents 8-bit in a 32-bit integer. Then we can use the first element in the array to represent the
	 first 8 bits, then the second element for the second 8 bits and continue in this way until we have our 32 bits.*/
//QUESTION 4:
	//Convert name to be in the style of another and see if the code keeps working:

	/*It just works to run *name like an array of int and print it out one "int" at a time.*/
