#include <stdio.h>

int main() 
{
	int a[10],n,key,i;
	printf("Enter size of arrray: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    
	printf("Enter Element to be searched:");
	scanf("%d",&key);
	
	for(i=0;i<n;i++)
	{
	    if(a[i]==key)
	    {
	        printf("Found at %d\n",i+1);
	        exit(0);
	    }
	}
	printf("Not Found\n");
	
	return 0;
}
