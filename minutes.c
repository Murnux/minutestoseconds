#include <stdio.h> 
#include <math.h>

// For this program, I want to get user input asking how many minutes > turn int oseconds.

int main () {
	
	int minutes;
	float ms = 60, totaltime;
	
	printf("\nHow many minutes?: ");
	scanf("%d", &minutes);
	
	totaltime = minutes * ms;
	printf("\nTotal seconds is : %f ", totaltime);
	
	
	return (0);
	
	}
