#include<stdio.h>
void reverseArray(int arr[],int size);
void swap(int *a,int *b);
void printArray(int arr[],int size);
int main() {
  int arr[5]={3,5,2,5,7};
  int size=5;
  printArray(arr,size);
  reverseArray(arr,size);
  printArray(arr,size);
}
void reverseArray(int arr[],int size){
    int i=0;int j=size-1;
    while(i<j){
        swap(&arr[i],&arr[j]);
        i++;j--;
    }
}

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}