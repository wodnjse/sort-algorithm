#include <stdio.h>

int main(){
	int arr[] = {5,3,1,6,8,7,2,4};
	int i, j;
	
	for(i = 0; i <8; i++){
		for(j = 0; j < 8-i-1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] =  arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(i=0;i<8;i++){
		printf("%d\t",arr[i]);
	}
}

/*	for(i=0;i < 8;i++){
		for(j = 0;j < 8-1-i;j++){
			if(arr[j] > arr[j+1]){
				int tmp = arr[j];  // tmp = arr[j], arr[j] = arr[j], arr[j+1] = arr[j+1]
				arr[j] = arr[j+1]; // tmp = arr[j], arr[j] = arr[j+1], arr[j+1] = arr[j+1]
				arr[j+1] = tmp;    // arr[j] = arr[j+1], arr[j+1] = tmp
			}	
		}
	}
	
	for(int i = 0; i < 8 ; i++){
		printf("%d\t",arr[i]);
	}
	
}*/

