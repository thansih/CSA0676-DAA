#include <stdio.h>
int main() {
  int n;
  double arr[100];
  printf("Enter the number of elements : ");
  scanf("%d", &n);
printf("Enter numbers: ");
  for (int i = 0; i < n; ++i) {
    
    scanf("%d", &arr[i]);
  }


  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %d", arr[0]);

  return 0;
}