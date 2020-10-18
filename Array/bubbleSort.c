#include<stdio.h>
void swap(int *a,int *b);
void bubbleSort(int arr[],int size);
void printArray(int arr[],int size);


int main(void){
    int size = 5;
    int arr[5] = {3,4,2,5,1};
      printArray(arr,size);
    bubbleSort(arr,size);
    printArray(arr,size);




}

void bubbleSort(int arr[],int size){

    for(int i=0;i<size;i++){

        for(int j=0;j<size;j++){
            if(arr[j+1]<arr[j]){
                swap(&arr[j+1],&arr[j]);
            }
        }
    }

}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);

    } printf("\n");
}