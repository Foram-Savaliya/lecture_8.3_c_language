/*Q.1 Write a Program to find the average of a given 2D array.
For example,
Input:
Enter the array's row size: 3
Enter the array's column size: 3

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

Output:/
Average of an Array: 3.88*/
#include<stdio.h>
void main()
{
	int i,j,n,m;
	float average,sum=0.00;
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
			sum=sum+a[i][j];
		}
	}	
	average=sum/(n*m);
	printf("average of an array:-%.3f",average);
	
}
