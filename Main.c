#include <stdio.h>
#include <stdlib.h>

int main()
{
	// |=====================================================================================
	// |	This section shows that a stack allocated 2D array is 1D in memory,				|
	// |	and it shows how to create pointers to the colums to use them as 1D arrays.		|
	// |=====================================================================================
	printf("Stack allocated 'a'\n\n");
	{
		// Create 'a' and print the pointers of 'a' `a[0-8]´ to see a difference of 36 ('int' is 4 byte and we have it 9 times) 
		int a[9][9] =
		{
			{1, 2, 3, 4, 5, 6, 7, 8, 9},
			{1, 2, 3, 4, 5, 6, 7, 8, 9},
			{1, 2, 3, 4, 5, 6, 7, 8, 9},
			{1, 2, 3, 4, 5, 6, 7, 8, 9},
			{1, 2, 3, 4, 5, 6, 7, 8, 9},
			{1, 2, 3, 4, 5, 6, 7, 8, 9},
			{1, 2, 3, 4, 5, 6, 7, 8, 9},
			{1, 2, 3, 4, 5, 6, 7, 8, 9},
			{1, 2, 3, 4, 5, 6, 7, 8, 9}
		};
		printf("Pointers of a[0-8]: ");
		for (int i = 0; i < 9; i++)
		{
			if (i != 8)
				printf("%i, ", (int)a[i]);
			else
				printf("%i", (int)a[i]);
		}
		printf("\n");

		// Set the 'b' array to the values contained in the first colum of the 'a' array and print the first index `a[0][0]´
		int b[9] =
		{
			a[0][0], a[0][1], a[0][2], a[0][3], a[0][4], a[0][5], a[0][6], a[0][7], a[0][8]
		};
		printf("1st index of 'b': %i	1st index of 'a': %i\n", b[0], a[0][0]);

		// Set the pointer of the first colum of 'a' to 'c' and print the second index `a[0][1]´
		int* c = a[0];
		printf("2nd index of 'c': %i	2nd index of 'a': %i\n", *(c + 1), *(*a + 0 + 1));

		// Set the pointer of the first colum of 'a' to 'd' and print the third index `a[0][2]´
		int* d = a[0];
		printf("3rd index of 'd': %i	3rd index of 'a': %i\n", d[2], a[0][2]);

	}

	printf("\nHeap allocated 'a'\n\n");

	// |=========================================================================================
	// |	This section shows how to create a heap allocated 2D array which is 1D in memory.	|
	// |=========================================================================================
	{
		// Create 'a' on the heap with the size of 81 ints, print the pointers of a[0-8], fill it and print the first index `a[0][0]´

		int (*a)[9] = malloc(4 * 9 * 9);			//	Heap allocated you can use it as a normal 2D array.

		printf("Pointers of a[0-8]: ");				//	Print the pointers of a[0-8]
		for (int i = 0; i < 9; i++)
			if (i != 8)
				printf("%i, ", (int)a[i]);
			else
				printf("%i", (int)a[i]);
		printf("\n");

		for (int y = 0; y < 9; y++)					//	Iterate thru the array and fill it like above
			for (int x = 0; x < 9; x++)
				a[y][x] = x + 1;
		
		printf("2d index of 'a': %i\n", a[0][1]);	//	Print the second index

		free(a);									//	Heap allocated, we have to free it manually.
	}
	
	printf("\n\nPress ENTER to continue");

	getchar();

	return 1;
}