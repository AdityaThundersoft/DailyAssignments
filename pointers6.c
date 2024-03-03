//Write a C program to add 2D array using pointers.

#include <stdio.h>

int main() 
{
    int r=5,c=5;
    int a[5][5] = { { 0, 1, 2, 3, 4 },{ 2, 3, 4, 5, 6 },{ 4, 5, 6, 7, 8 },{ 5, 4, 3, 2, 6 },{ 2, 5, 4, 3, 1 } };
    int b[5][5] = { { 4, 7, 2, 1, 8 },{ 2, 6, 4, 4, 3 },{ 4, 5, 6, 9, 8 },{ 7, 8, 6, 7, 2 },{ 1, 2, 8, 4, 0 } };
   int s[5][5];
  for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
      {
          s[i][j] = *(*(a+i)+j) + *(*(b+i)+j);
      }
      
  }
  for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
      {
          printf("%d ",s[i][j]);
      }
      printf("\n");
  }
  return 0;
  
}