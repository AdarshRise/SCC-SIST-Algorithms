// add your code here :
import java.util.Scanner;

public class bubble_sort
{
  public static void main(String arg[])
  {
    int i;
    int ar[]=new int[10];
    Scanner input= new Scanner(System.in);
      System.out.println(" Enter 10 elements of array: ");
                                                      //Input taken
      for(i=0;i<10;i++)
          { ar[i]=input.nextInt(); }
        bubsort(ar,10);              // funtion call

  }

  static void bubsort(int ar[],int n)
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
      {System.out.println(" "+ar[i]+" ");}

  }


}
