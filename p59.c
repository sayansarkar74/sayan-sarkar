#include<stdio.h>
void printhw(int count){
    if(count==0){
        return;
    }
    printf("Hello World \n");
    printhw(count-1);
}
int main(){
    printhw(10);
    return 0;
}
