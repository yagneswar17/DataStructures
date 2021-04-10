/* Linear Search	*/
#include<stdio.h>

int main()
{
	int a[100],i,n,key,flag=0;	
	printf("\n Enter Array size : ");
	scanf("%d",&n);
	printf("\n Enter Array Elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n Enter Key : ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("\n The key element found at position : %d",i+1);
	else
		printf("\n The key element is not found");
	return 0;
}
