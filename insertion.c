#include<stdio.h>
#include<time.h> 

int main(){
	int j,k,l,n,arr[10], comp=0;
	clock_t start,stop;
    double timetaken; 
	printf("Enter the size of an array:");
	scanf("%d", &n);
	printf("Enter array elements:");
	start=clock();
	{
		for(j=0;j<n;j++)
	{
		scanf("%d", &arr[j]);
	}
	for(j=1;j<n;j++)
	{
		l=arr[j];
		comp++;
		for(k=j-1;((k>=0) && (l<arr[k]));k--)
		{
			arr[k+1]=arr[k];
			comp++;
		}
		arr[k+1]=l;
	}		
	}	
	stop=clock();
	
	printf("\n After sorting elements are \n");
	for(j=0;j<n;j++)
	{
		printf("%d\n", arr[j]);
	}
	printf("\n No of comparisions  = %d",comp);
	timetaken=((double)(stop-start))/CLOCKS_PER_SEC;
    printf("\n time efficiency is %f",timetaken);
    
	return 0;
}
