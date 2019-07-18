#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int sizearr = sizeof(arr)/sizeof(arr[0]);
  for(int i = 0; i<sizearr; i++)
  {
    int element = arr[i];
    int j = i;
    while(j>0 && arr[j-1]>element)
    {
      arr[j]=arr[j-1];
      j=j-1;
    }
    arr[j]=element;
  }
}
