//Write a C program to find maximum element in an array. - using recursion.
#include <stdio.h>

int max(int arr[], int n) {
  if (n == 1) 
  { 
    return arr[0];
  } 
  else 
  {
    int m = max(arr, n - 1);
    return (arr[n - 1] > m) ? arr[n - 1] : m;
  }
}

int main() {
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    printf("enter array elements:\n");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  printf("Maximum element in the array: %d\n", max(a, n));

  return 0;
}
// enter n: 5
// enter array elements:
// 10 20 30 40 50
// Maximum element in the array: 50

