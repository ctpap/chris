#include <stdio.h> 
main (argc, char *argv[])
{	
	int numebrs[4] = {0};
	char name [4];
	
	//first print them out raw 
	printf("Numebrs: %d % d %d %d \n", numbers [0], numbers[1], number[2], numbers[3]);

	printf("name each: %c %c %c %c\n", name[0], name[1], name [2], name [3]);

	printf("name: s\n", name);

	//setup the numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	//setup name
	name[0] = 'n';
	name[1] = 'i';
	name[2] = 'c';
	name[3] = 'k';

	//pint them out uninitialized
	printf("numbers %d %d %d %d\n", numbers[0], numbers [1], numbers [2], numbers [3]);

	printf("name each: %c %c %c %c\n", name [0],name [1], name [2], name [3]);

	//print them out as a string
	printf("name:%s\n", name);

	//another wat to use name
	char *another = "nick"

	printf("another: %s\n", another);

	printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another [3]);

	return 0;
}




