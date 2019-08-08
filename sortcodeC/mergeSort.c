#include <stdio.h>
#include <cs50.h>

void merge(int array[], int start, int middle, int middle1, int end)
{
  if(strat==middle)
  {
    if(array[start]>array[end])
    {
      int swap=array[end];
      array[end]=array[start];
      array[start]=swap;
    }
  }
  else
  {
    int n=start;
    int count1=start;
    int count2=middle1;
    int arr[end+1];
    while(n<end)
    {
      if(array[count1]>array[count2])
      {
        arr[n]=array[count2];
        count2++;
        n++;
      }
      else
      {
        arr[n]=array[count1];
        count1++;
        n++;
      }
    }
    if(array[count1]>array[count2])
      arr[n]=array[count1];
    else
      arr[n]=array[count2];
    for(int i=start;i<=end;i++)
    {
      array[i]=arr[i];
    }
  }
}
void sort(int array[], int start, int end)
{
  if(end>start)
  {
    int middle=(start+end)/2;
    sort(array, start, middle);
    sort(array, middle+1, end);
    merge(array, start, middle, middle+1, end);
  }
}
int main()
{
  int array[]={7, 1, 2, 6, 3, 8, 5, 4};
  sort(array,0,7);
  for(int i=0;i<8;i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
}
