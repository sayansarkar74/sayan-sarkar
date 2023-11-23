#include<stdio.h>
void printString(char arr[]){
    for(int i=0; arr[i] != '\0';i++)
    {printf("%c",arr[i]);
    }
    printf("\n");
}
int main(){
    char firstName[]="Modon";
    char lastName[]="Mandal";

    printString(firstName);
    printString(lastName);
    return 0;
}