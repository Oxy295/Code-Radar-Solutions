#include<stdio.h>
float num1,num2,product;
void multiply(){
    product=num1*num2;
    printf("Product: %d",product)
}
int main(){
    scanf("%d %d",&num1,&num2);
    multiply();
    return 0;
}