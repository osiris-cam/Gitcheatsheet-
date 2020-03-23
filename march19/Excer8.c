#include <stdio.h>

int main (int argc, char **argv[]){


	int areas []= {10, 12,13,14,20};
	char name []= "zed";
	char full_name[]= { 'Z', 'e','d',' ','A','.',' ','S','h','a','W','\0'};
	printf ("The size of an int: %ld\n", sizeof(int));
	printf("The size of areas (int[]):%ld\n", sizeof(areas));
	printf ("The number of inits in areas: %ld\n", sizeof(areas)/ sizeof(int));
	printf("The first area is &d, the 2nd %d.\n", areas[0], areas[1]);
	printf("The size of a char : %ld\n", sizeof(char));
	printf("The size of name (char[]): %ld\n", sizeof(name));
	printf ("the number of chars: %ld\n", sizeof(name)/ sizeof(char));
	printf ("The size of ful_name (char[]): %ld\n", sizeof (full_name));
	printf ("The number of chars: %ld\n", sizeof(full_name)/ sizeof(char));
	printf ("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

	return 0;
}
		//EXTRA CREDITS
//QUESTION 1: Try assigning to elements in the areas array with areas[0] = 100; and similar:
/*
	...
	areas[0] = 100;
	areas[1] = 200;
	printf("The area is %d, the 2nd %d.\n", areas[0], areas[1]); */

//QUESTION 2:Try assigning to elements of name and full_name:
/*
	name[0] = 'O';
	full_name[0] = 'O';
	printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);...
PRINT:
$ ./Excer8
name="Zed" and full_name="Zed A. Shawan" */

//QUESTION 3: Try setting one element of areas to a character from name.
	/*
	areas[0] = name[0];
	printf("First area is %d.\n", areas[0]);...
PRINTS:
$ ./Excer8
First area is 90.

//QUESTION 4: Go search online for the different sizes used for integers on different CPUs.

/* 32-bit compilers also use 4 bytes as the size of an int.

Actually the C language standard says that an int must be at least 16-bits wide. But it doesn't say it has to be exactly n-bits wide. So compiler writers generally go with the word size of the underlying machine - which is 32 bits on most machines today. (Word size is, loosely speaking, the number of bits the processor can physically process at one shot)

#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Size of unsigned short: %u\n", sizeof(unsigned short));
    printf("Size of short: %u\n", sizeof(short));
    printf("Size of unsigned int: %u\n", sizeof(unsigned int));
    printf("Size of int: %u\n", sizeof(int));
    printf("Size of unsigned long: %u\n", sizeof(unsigned long));
    printf("Size of long: %u\n", sizeof(long));

    return 0;
}
PRINTS:
$ ./prueba2.exe
Size of unsigned short: 2
Size of short: 2
Size of unsigned int: 4
Size of int: 4
Size of unsigned long: 4
Size of long: 4
*/




