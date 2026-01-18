#include <stdio.h>
/* Author: Parija  Patel */
int main(void)
{	
	int nums[] = {2, 4, 6, 8};
	int sum = 0;

	/* Looked online for how to determine the length of an array in C */	
	for (int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++) {
		sum += nums[i];
	}

	printf("The sum of the array is: %i\n", sum);
	return 0;
}
