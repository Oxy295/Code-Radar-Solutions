#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(islower(ch)){
        printf("Lowercase\n");
    }
    if(isupper(ch)){
        printf("Uppercase\n");
    }
    return 0;
}