#include <stdio.h>
#include <cs50.h>

int binarySearch(int key, int array[], int min, int max)
{
  int middle;
  if(max<min)
    return -1;
  else
    middle = (min+max)/2;
    
  if(array[middle]<key)
    return binarySearch(key, array, middle+1, max);
  else if(array[middle]>key)
    return binarySearch(key, array, min, middle-1);
  else
    return middle;
}

int main()
{
  int array[]={1, 32, 43, 54, 95};
  printf("%d\n", binarySearch(54, array, 0, 4));
}
