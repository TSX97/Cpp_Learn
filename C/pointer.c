#include <stdio.h>
int main(void){
   
   int n = 15;
   int* pn = &n;
   
   printf("Value is %d\n", n);
   
   *pn = 46;
   printf("Value is %d\n", n);
   
   return 0;
}