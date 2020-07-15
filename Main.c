#include <stdio.h>

int main()
{
	// Create 'a' and print the 9th index `a[0][8]´ 
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

	printf("%i\n", a[0][8]);

	// Set the 'b' array to the values contained in the first colum of the 'a' array and print the first index `a[0][0]´
	int b[9] =
	{
		a[0][0], a[0][1], a[0][2], a[0][3], a[0][4], a[0][5], a[0][6], a[0][7], a[0][8]
	};
	printf("%i\n", b[0]);

	// Set the pointer of the first colum of 'a' to 'c' and print the second index `a[0][1]´
	int* c = a[0];
	printf("%i\n", *(c + 1));

	// Set the pointer of the first colum of 'a' to 'd' and print the third index `a[0][2]´
	int* d = a[0];
	printf("%i\n", d[2]);

}