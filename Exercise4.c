/*
4.	Input an array of n integers, n is even. 
Sort the first half in increasing order and second half decreasing order
Ex:
______________________________________
| Input: {8,7,9,2,1,5,2,0}           |
| Output: 2 7 8 9 5 2 1 0            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase[argc-1];
	int i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	//your codes here
	int swapped;
	int n = argc-1;
	do
	{
	swapped = 0;
	for(i = 0; i < n / 2 - 1; ++ i)
	{
	    if(testcase[i] > testcase[i+1])
	    {
		int temp = testcase[i];
		testcase[i] = testcase[i+1];
		testcase[i+1] = temp;
		swapped = 1;
	    }
	}
	}
	while (swapped);
	do
	{
	swapped = 0;
	for(i = n / 2; i < n - 1; ++ i)
	{
	    if(testcase[i] < testcase[i+1])
	    {
		int temp = testcase[i];
		testcase[i] = testcase[i+1];
		testcase[i+1] = temp;
		swapped = 1;
	    }
	}
	}
	while (swapped);

	for(i = 0; i < n; ++i) printf("%d ", testcase[i]);

	return 0;
}
