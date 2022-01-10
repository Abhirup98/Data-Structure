#include <stdio.h>

int main()
{
  int c, n, first, last, mid, arr[100], search, comp=0;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  
  printf("\nEnter %d numbers: ", n);

  for(c=0; c<n; c++)
  {
     scanf("%d", &arr[c]);
  }

   printf("\nEnter the value to find: ");
   scanf("%d",&search);
   
   first = 0;
   last = n-1;
   mid = (first + last) / 2;
   
    while(first<=last)
    {
        comp++;

        if(arr[mid]<search)
            first=mid+1;

        else if(arr[mid]==search)
        {
           printf("%d found at location %d", search, mid+1);
             break;
        }

        else
            last=mid -1;
            mid = (first+last)/2;
    }

    if(first>last)
    {
        printf("\nitem not found\n");

    }
    
    printf("\n No of comparisions  = %d",comp);
    
    return 0;
}

