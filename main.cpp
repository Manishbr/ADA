#include <iostream>
using namespace std;
int a[100];

int partition(int a[],int low,int high)
{
	int i,j,pivot;
	i=low+1;
	j=high;
	pivot=a[low];
	while(1)
	{
		while(a[i]<=pivot && i<=high)
			i++;
		while(a[j]>pivot && j>=low)
			j--;
		if(i<j) 
		{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		else 
		{
			a[low]=a[j];
			a[j]=pivot;
			return j;
			
		}
			
		}
}
void quicksort(int a[],int low,int high)
{
	int pivot;
	if(low<high)
	{
		pivot=partition(a,low,high);
		quicksort(a,low,pivot-1);
		quicksort(a,pivot+1,high);
		
	}
}
{ 
	int main()
		{
			int a[100],n,i;
			cout<<"enter size";
			cin>>n;
			for(i=0;i<n;i++)
				cin>>a[i];
			split(a,0,n);
			for(i=0;i<n;i++)
					cout<<a[i]<<"\n";
			return 0;
		}
}
