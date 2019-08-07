#include<stdio.h>



int main()
{
	int i,n=0,max=0,arr[10];
	printf("print the number of integers");
	scanf("%d",&n);
	printf("enter the values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);

	}
	max=arr[i];
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
			
		}
	}
	printf("/n maximum is %d",max);
	return 0;
	

}
