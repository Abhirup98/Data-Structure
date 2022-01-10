#include <stdio.h>
#include<stdlib.h>
#define TABLE_SIZE 17

int h[TABLE_SIZE]={NULL};

void insert()
{

 int key,index,j,flag=0,hkey;
 printf("\nEnter a value to insert into hash table\n");
 scanf("%d", &key);
 hkey = key % TABLE_SIZE;
 for(j=0; j<TABLE_SIZE; j++)
    {
     index = (hkey + j) % TABLE_SIZE;
     if(h[index] == NULL)
     {
        h[index]=key;
         break;
     }
    }

    if(j == TABLE_SIZE)
     printf("\nelement cannot be inserted\n");
}

void search()
{
 int key,index,j,flag=0,hkey,comp=0;
 printf("\nEnter search element\n");
 scanf("%d", &key);
 hkey = key % TABLE_SIZE;
 for(j=0; j<TABLE_SIZE; j++)
 {
 	comp++;
    index = (hkey + j) % TABLE_SIZE;
    if(h[index] == key)
    {
      printf("Value is found at index %d", index);
      break;
    }
  }
  printf("\n No of comparisions  = %d",comp);
  
  if(j == TABLE_SIZE)
    printf("\n Value is not found\n");
}

void display()
{
  int j;
  printf("\nElements in the hash table are \n");
  for(j=0; j<TABLE_SIZE; j++)
  printf("\nat index %d \t value =  %d", j, h[j]);
}

int main()
{
    int choice, j;
    while(1)
    {
        printf("\nPress 1.Insert \n2.Display \n3.Search \n4.Exit \n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                insert();
                break;
                
            case 2:
                display();
                break;
                
            case 3:
                search();
                break;
                
            case 4:exit(0);
            
            default:printf("Wrong Choice\n");
        }
    }
    
    return 0;
}
