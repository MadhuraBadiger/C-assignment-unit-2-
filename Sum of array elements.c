#include<stdio.h>
int main()
{
	int a[70],i,n,sum=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the %d elements of array:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
		
	}
	printf("Array elements:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
		
	}
	printf("\nAddition of array elements=%d",sum);
	

}



Output:
Enter the size of array:4
Enter the 4 elements of array:1
2
3
4
Array elements:
1
2
3
4
Addition of array elements=10
