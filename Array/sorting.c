#include<stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void bubbleSort(int arr[],int size){
    int check;
    for(int i=0;i<size-1;i++){
        check=1;
        for(int j=0;j<size-1-i;j++){
            if(arr[j+1]<arr[j]){
                swap(&arr[j+1],&arr[j]);
                check=0;
                }
        }
        if(check==1)
        break;
    }
}


void insertionSort(int arr[],int size){
    
    for(int i=1;i<size;i++){
       int j=i-1;
       int temp=arr[i];
        while(j>-1 && arr[j]>temp){
                arr[j+1]=arr[j];
                j--;
        }
        arr[j+1]=temp;
    }
}


void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[6]={2,4,1,0,-1,-4};
    int size=6;
    printArray(arr,size);
    //bubbleSort(arr,size);
    insertionSort(arr,size);
    printArray(arr,size);
}