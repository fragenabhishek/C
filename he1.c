
#include <stdio.h>

int main(){

	int size;

	scanf("%d",&size);

	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	int sum=0;
	int j=0;

	for(int i=0;i<size;i++){
		if(arr[i]>0){
			sum=sum+arr[i];
			j++;
		}

	}


	printf("%d %d",sum,j);
}
