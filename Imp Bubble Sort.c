#include <stdio.h>

int main()
{
  int array[100], n, c, d, swap,comp=0;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
  
  for (c = 0 ; c < n - 1; c++)
  {                                      //flag is just catching(dhorche) a true condition
  	int flag=0;
    for (d = 0 ; d < n - c - 1; d++)
    {
    	comp++;
      if (array[d] > array[d+1])     //d & d+1 are consecutive element . In bubble sort comparision occurs between 2 consecutive elements & in according to that swapping occurs 
      {
        swap = array[d];
        array[d] = array[d+1];         //If d+1 element is less than d element then swapping occurs then it sets its flag=1
        array[d+1] = swap;
        flag = 1;   
      } 
    }
    if(flag==0)
        {
            break;
        }
    
  }
  
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c < n; c++)
     printf("%d\n", array[c]);
     printf("\n No of comparisions  = %d",comp);
 
  return 0;
}

