#include<stdio.h>

int main(){
	int k,r,heapsize,n,comp;
	int arr[50];
	printf("How many nodes are there:");
	scanf("%d", &n);
	
	for(k=0;k<n;k++){
		printf("Enter the value:");
		scanf("%d", &arr[k]);
	}

	heapsize=n-1;
	heapsort(arr, heapsize);   //(argument, argument) //heapsize indicates no. of elements of the array
    
	for(k=0;k<n;k++){           //displaying all the elements
		printf("%d\n", arr[k]);
		comp++;
	}

	printf("\n No of comparisions  = %d",comp);
	
	return 0;
}

void heapsort(int arr[], int heapsize)
{
	int j, temp, comp=0;
	build_max_heap(arr, heapsize);
	for(j=heapsize;j>0;j--)                       // Swap root node with the last element
	{
		temp=arr[j];              //arr[j]- last element
		arr[j]=arr[0];            //arr[0]- root node
		arr[0]=temp;
		heapsize--;
		max_heapify(arr,0,heapsize);            //[at the time of swapping tree , it is unbalanced. so we have to max heapify the tree]
		comp++;
	}
}

void build_max_heap(int arr[], int heapsize)
{
	int i;
	for(i=heapsize/2;i>=0;i--){               //[Start from half of the tree upto the root node]
		max_heapify(arr,i,heapsize);         //[max heapify all the nodes starting from half of the tree to root node] 
	} 
}

max_heapify(int arr[],int m,int heapsize){
	int temp, largest;
	int l=(2*m)+1;             //we can get any left node of m, m->Parent node 
	int r=(2*m)+2;             //we can get any right node of m
	if((l<=heapsize) && (arr[l]>arr[m]))        //left node >  Parent node
	   largest=l;
	else
	   largest=m;      //[Parent node is largest]
	if((r<=heapsize) && (arr[r]>arr[largest]))
	largest=r;
	if(largest!=m)    //Parent node is not larger, swapping required
	{
		temp=arr[m];
		arr[m]=arr[largest];
		arr[largest]=temp;
		max_heapify(arr, largest, heapsize);
	}
}
