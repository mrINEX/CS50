#include <stdio.h>
#include <cs50.h>

linearSearch(int sizearray, int key, int array[])
{
  for(int i=0;i<sizearray;i++)
  {
    if(array[i]==key)
      return i;
  }
return -1;
}
int main()
{
  int arr[]={1, 2, 3, 4, 5};
  int sizearray = sizeof(arr)/sizeof(arr[0]);
  printf("%d \n", linearSearch(sizearray, 3, arr));
}
