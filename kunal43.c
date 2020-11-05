#include<stdio.h>
#include<math.h>

//#define MAX	5

int main()
{
	int i,j,k;
    printf("Enter the number you want\n");
    scanf("%d",&k);

	for(i=k; i>=0; i--)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
    return 0;
}
