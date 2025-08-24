#include <stdio.h>
#include <stdlib.h>
int main (void){
   
   
   	int n = 100;
	int* nums = malloc(n * sizeof(int));
  
	for(int i = 0; i < n; i++){
   		nums[i] = (i+1) * (i+1);
   	}
	   
	int* iter = nums;
	for(int i = 0; i < n; i++){
		printf("%p : %d \n", (void*)iter, *iter);
		++iter;
	}
	
	free(nums);
  
   
   	return 0;
}