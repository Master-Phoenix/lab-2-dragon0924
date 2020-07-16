/*
1. Write a Taxi meter program to calculate the taxi fare for a given mileage.
	a. The 1st 2km is 15,000 VND
	b. The next 250m will cost 2000 VND
	c. If the travel distance is larger than 30km then each extra km will cost only 5000VND
Allow user to input the travel distance in km and print the amount of money to be paid
______________________________________
| Input: 32.5                        |
| Output: 251500                     |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	float testcase = atof(argv[1]);
	
	//your codes here
	float dis = testcase;
	if (dis<=2) printf("15000");
	else if (dis<=30) printf("%d",15000+2000*4*(dis-2));
	else printf("%d",15000+2000*4*(30-2)+5000*(dis-30));
	
	return 0;
}
