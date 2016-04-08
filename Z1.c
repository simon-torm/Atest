#include <stdio.h>
#include <math.h>

int main()
{
	int x, y;
	double vid;
	
	printf("\nVvedite X: ");
	scanf("%d", &x);
	printf("\nVvedite Y: ");
	scanf("%d", &y);
	
	vid = sqrt(((x + 35) * (x + 35)) + ((y - 40) * (y - 40)));
	
	printf("\n\tXY = %lf", vid);
	
	return 0;
}