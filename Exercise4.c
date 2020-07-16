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
	int testcase[argc],i;
	for(i=1; i<=argc;i++){
		testcase[i] = atoi(argv[i]);
	}
	
	//your codes here
	int i,j,n,tmp;
	n = argc;
	for (i=1;i<=n/2;i++)
	{
		for (j=i+1;j<=n/2;j++)
		{
			if (testcase[i]>testcase[j])
			{
				tmp=testcase[i];
				testcase[i]=testcase[j];
				testcase[j]=tmp;
			}
		}
	}
	for (i=n/2+1;i<=n;i++)
	{
		for (j=i+1;j<=n;j++)
		{
			if (testcase[i]<testcase[j])
			{
				tmp=testcase[i];
				testcase[i]=testcase[j];
				testcase[j]=tmp;
			}
		}
	}
	for (i=1;i<=n;i++)
	{
		printf("%d ",testcase[i]);
	}
	
	return 0;
}
