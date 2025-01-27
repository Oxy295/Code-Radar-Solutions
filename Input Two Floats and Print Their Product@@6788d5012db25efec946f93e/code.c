#include<stdio.h>
float num1,num2,product;
void multiply(){
    product=(float)num1*num2;
    printf("Product: %f",product);
}
int main(){
    scanf("%f %f",&num1,&num2);
    multiply();
    return 0;
}