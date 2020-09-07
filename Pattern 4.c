#include<stdio.h>
main()
{
	int n,i,j;
	printf( "Enter any number  you like :");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		for(j=i;j<=n;j=j+1)
		{
		printf("%d",j);	
		}
	printf("\n");
	}
	return 0;
}

