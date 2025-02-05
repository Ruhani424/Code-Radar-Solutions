#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    // if(a+b>c && a+c>c && b+c>a){
        if(a==b && a==c && b==c){
            printf("Equilateral");
        }else if(a==b || b==c || a==c){
            printf("Isoceles");
        }else{
            printf("Scalene");
        }
    
   
    return 0;
}