/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 2 2 3                    |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	//your codes here
	int i, n,h=0;
	n = testcase;
    	for (i=2;i<=n;i++)
	{
		while (n%i==0)
		{
			if (h==0) printf("%d ",i);
			else printf("%d ",i);
			n/=i;
			h++;
		}
	}
	
	return 0;
}
