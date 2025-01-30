#include <stdio.h>
int main() {
   cahr ch;
   scanf("%d",&ch);
   switch(ch){
    case 'R':
    printf("Stop");
    break;
    case 'G':
    printf("Go");
    break;
    case 'Y':
    printf("Slow Down");
    break;
    default:
    printf("Invalid Input");
   }
    return 0;
}