/*Q.3 Write a Program to find the sum of diagonal elements from a given 2D array.
For example,
Input:
Enter the array's row & column size: 3

Enter array's elements:
a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6

Output:
The sum of diagonal elements of an Array: 13*/

#include<stdio.h>
void main()
{
	int i,j,n,m,sum=0;
	printf("Enter the array's row size: ");
	scanf("%d",&n);
	printf("Enter the array's column size: ");
	scanf("%d",&m);
	int a[n][m];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("a[%d][%d] :- ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}	
	printf("The sum of diagonal elements of an Array: %d",sum);
}
