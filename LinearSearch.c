#include <stdio.h>

int main(void) 
{
	int a[10],n,key,i,count=0;
	printf("Enter size of arrray: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    
	printf("Enter Element to be searched:");
	scanf("%d",&key);
	
	for(i=0;i<n;i++)
	{
	    count++;
	    if(a[i]==key)
	    {
	        printf("Found at %d\n",i+1);
	        printf("OPERATION COUNT=%d\n",count);
	        exit(0);
	    }
	}
	printf("Not Found\n");
	printf("OPERATION COUNT = %d\n",count);
	
	return 0;
}

