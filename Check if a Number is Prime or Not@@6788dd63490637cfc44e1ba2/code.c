#include <stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    for(i=0;i<100;i++){
    if (a%i==0){
        if(a==i){
            printf("Prime");
    }
    }
    }
    else{
        printf("Not Prime");
    }
}