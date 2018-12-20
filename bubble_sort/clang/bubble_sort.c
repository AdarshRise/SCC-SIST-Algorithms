//add your code here
#include<conio.h>
#include<stdio.h>


void bubble_sort(int array[],int size)
{
  int i,j;
//  count=sizeof(*array)/sizeof(array[0]);
for(i=0;i<=(size-j);i++)
  {
    for(j=1;j<size;j++)
    {
      if(array[j-1]>array[j])
        {
          array[j-1]=array[j-1]+array[j];
          array[j]=array[j-1]-array[j];
          array[j-1]=array[j-1]-array[j];
        }
    }
  }
  for(i=0;i<size;i++)
  printf(" %d ",array[i] );
}

void main()
{int *ar,size;
  printf("Enter 10 element you want to be sorted by Bubble sort Technique :\n");
  size=sizeof(ar)/sizeof(ar[0]);
  bubble_sort(ar,size);
  getch();
}
