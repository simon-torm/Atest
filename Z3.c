#include <stdio.h>
#include <stdlib.h>

int main()
{
	double a, x, zn; 
	int rik = 0;
	
	printf("\nVvedite sumu vkladu: ");
	scanf("%lf", &x);
	printf("\nVvedite %%: ");
	scanf("%lf", &a);
	
	zn = x * 2;
	
	while(x < zn) {
		rik++;
		x = x + ((x / 100) * a);
	}
	
	printf("\nKoli4estvo god: %d", rik);
	printf("\nVash vklad budet = %lf", x);
	
	return 0;
}