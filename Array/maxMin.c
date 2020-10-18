#include<stdio.h>
void printArray(int arr[],int size);


struct pair{
    int min;
    int max;
};
struct pair findminMax(int arr[],int size);

int main(void){
    int size=6;
     int arr[]={3,6,-1,4,7,8};

    printArray(arr,size);

   struct pair minMax= findminMax(arr,size);
    printf("%d %d ",minMax.min,minMax.max);
    printf("\n");

}

struct pair findminMax(int arr[],int size){
      struct pair minMax;


    if(size==1){
        minMax.min=arr[0];
        minMax.max=arr[0];
        return minMax;
    }
    if(arr[0]>arr[1]){
        minMax.max=arr[0];
        minMax.min=arr[1];
    }else
    {
         minMax.max=arr[1];
        minMax.min=arr[0];
    }

    for(int i=2;i<size;i++){
        if(arr[i]>minMax.max){
            minMax.max=arr[i];
        }
        if(arr[i]<minMax.min){
            minMax.min=arr[i];
        }
    }
    return minMax;

}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}