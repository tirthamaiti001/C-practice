/*Print Hello World X times.
Value of X taken by the user*/

#include<stdio.h>
//recursion function
void printHW(int n) {
    if(n == 0){
        return;
    }
    printf("Hello World \n");
    printHW(n-1);
}

int main(){
    int a;
    printf("No. of times you want to print: ");
    scanf("%d", &a);
    printHW(a);
    return 0;
}