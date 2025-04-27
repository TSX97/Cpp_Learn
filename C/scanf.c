#include <stdio.h>
int main(void)
{
    char name[10];
    printf("Enter your name: ");
    scanf("%10[^\n]", name);
     
    printf("Name: %s \n",name);
    return 0;
}