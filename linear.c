#include <stdio.h>

int main()
{
  int arr[100], search, c, n, comp=0;
  printf("Enter the number of elements in array\n");
  scanf("%d", &n);
  printf("Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &arr[c]);

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
  	comp++;
    if (arr[c] == search)
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }

  if (c == n)
    printf("%d isn't present in the array.\n", search);
    
 printf("\n No of comparisions  = %d",comp);

return 0;
}

