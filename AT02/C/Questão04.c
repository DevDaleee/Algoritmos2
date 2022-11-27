#include <stdio.h>
 
int main(){
	int arr[10], i, j, k, Size =10;

	for (i = 0; i < Size; i++){
    	scanf("%d", &arr[i]);
   	}     
 
	for (i = 0; i < Size; i++){
		for(j = i + 1; j < Size; j++){
    		if(arr[i] == arr[j]){
    			for(k = j; k < Size; k++){
    				arr[k] = arr[k + 1];
				}
				Size--;
				j--;
			}
		}
	}

 	for (i = 0; i < Size; i++){
 		printf("%d ", arr[i]);
    }
}