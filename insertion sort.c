#include<stdio.h>
                                                                          //eg: 28,15,8,35,7,12 - unsorted
int main(){
	int j,k,l,n,arr[10], comp=0; 
	printf("Enter the size of an array:");
	scanf("%d", &n);
	printf("Enter array elements:");
	for(j=0;j<n;j++)        //eg: [0<6, 1<6, 2<6, 3<6, 4<6, 5<6]
	{
		scanf("%d", &arr[j]);
	}
	for(j=1;j<n;j++)       //eg: [1<6, 2<6, 3<6, 4<6, 5<6]
	{
		l=arr[j];                   //Suppose l=15, j=1
		comp++;
		for(k=j-1;((k>=0) && (l<arr[k]));k--)           //[j=0,k=0      15<28]
		{
			arr[k+1]=arr[k];                               //a[0+1]=a[1]=28
			comp++;
		}
		arr[k+1]=l;
	}		

	printf("After sorting elements are \n");
	for(j=0;j<n;j++)
	{
		printf("%d\n", arr[j]);
	}
	printf("\n No of comparisions  = %d",comp);
	
	return 0;
}
