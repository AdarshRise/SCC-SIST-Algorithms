
#include<iostream>

void bubble_sort(int ar[],int n)
{
  int i,j;
  for(i=0;i<=n-1;i++)
    {
      for(j=1;j<n;j++)
        {
          if(ar[j-1]>ar[j])
          {
            ar[j-1]=ar[j-1]+ar[j]; // swapping two numbers
            ar[j]=ar[j-1]-ar[j];
            ar[j-1]=ar[j-1]-ar[j];
          }
        }
    }

    for(i=0;i<10;i++)            // Printing the sorted array
    {cout<<" "<<ar[i]<<" ";

}

void main(void)
{int i,ar[10];
  cout<<" Enter 10 elemetns of array: ";
                                                    //Input taken
  for(i=0;i<10;i++)
      {cin>>ar[i];
        bubble_sort(ar,10);              // funtion call
}
