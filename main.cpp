#include <stdio.h>


main() 
{
	int i=1;
	int sum=0;
	for (i=1; i<100; i=i+1)
	{
		printf("%i+", i);
		sum=sum+i;
	}
	sum=sum+i;
	printf("%i=%i", i, sum);
}
