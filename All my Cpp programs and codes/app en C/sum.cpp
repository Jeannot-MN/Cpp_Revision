#include<stdio.h>

main()
{
	int n;
	
	printf("You want to reverse: ");
	
	scanf("%d", &n);
	
	do
	{
		int lastdig= n % 10;
		
		n = (n - lastdig) / 10;
		
		printf("%d", lastdig);
		
	}
	while(n>0);
	
	return 0;
}
