#include<stdio.h>
int binarysearch(int *a,int n,int se)
{
   int mid,low,high;
   low=0;
   high=n-1;
   while(low<=high)
   {
   mid=(low+high)/2;
   	if(a[mid]==se)
   	{
   		return mid;
	}
	else if(se>a[mid])
	{
		low=mid+1;
	}
	else
	{
		high=mid-1;
	}
}
return -1;  	
}
int main()
{
	int a[6],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int se;
	scanf("%d",&se);
	int res=binarysearch(a,n,se);
	if(res==-1)
	{
		printf("element not found");
	}
	else
	{
		printf("element found at %d index",res);
	}
	
}
