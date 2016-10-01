#include <stdio.h> 
#include <math.h>

// For this program, I want to get user input asking how many minutes > turn into seconds.

int main () {
	
	int minutes;
	float ms = 60, totaltime;
	
	printf("\nHow many minutes?: ");
	scanf("%d", &minutes);
	
	totaltime = minutes * ms;
	printf("\nTotal seconds is : %f \n", totaltime);
	
	
	return (0);
	
	}
