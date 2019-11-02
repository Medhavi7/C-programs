#include<stdio.h>
#define max 5
int arr[max];
int main() 
{
   int i;
   printf("Enter %d elements: ", max);
   for(i=0;i<=max-1;i++)
      scanf("%d",&arr[i]);
   quicksort(arr,0,max-1);
   printf("Order of Sorted elements: ");
   for(i=0;i<=max-1;i++)
      printf(" %d",arr[i]);
   return 0;
}
void quicksort(int arr[max],int first,int last){
   int i, j, pivot, temp;
   if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j){
      	 while(arr[i]<=arr[pivot]&&i<last)
            i++;
         while(arr[j]>arr[pivot])
            j--;
         if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }
      temp=arr[pivot];
      arr[pivot]=arr[j];
      arr[j]=temp;
      quicksort(arr,first,j-1);
      quicksort(arr,j+1,last);

   }
}