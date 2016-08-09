#include<stdio.h>
#include<stdlib.h>

#define MAX 65536

void insertSort(int arr[], int len)
{
  int i, j;
  int key;
  for (i = 0; i < len; i++) {
    key = arr[i];
    for (j = i - 1; j >= 0 ; j) {
      if (arr[j] > key) {
        arr[j + 1] = arr[i];
      }else {
        break;
      }
    }
    arr[j + 1] = key;
  }
}

void selectSort(int arr[], len)
{
  int i, j, temp;
  for (i = 0; i < len; i++) {
    for (j = i + 1; j < len; j++) {
      if (arr[i] > arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}
