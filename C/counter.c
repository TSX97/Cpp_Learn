#include <stdio.h>
#include <stdlib.h>


int* counter(){
	static int* cnt = NULL;
	if(cnt == NULL) {
		 cnt = malloc(sizeof(int));
		 *cnt = 0;
	}
	(*cnt)++;
	return cnt;
}



int main (void){
	
	int* ptr;
	ptr = counter();
	ptr = counter();
	printf("%p : %d\n", (void*)ptr, *ptr);
	ptr = counter();
	printf("%p : %d\n", (void*)ptr, *ptr);

	
	

	return 0;
}