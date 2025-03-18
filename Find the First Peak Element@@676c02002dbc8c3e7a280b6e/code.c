#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    
    int arr[n]; 
    
    
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d\n", &arr[i]);
    }


 
    for (int i = 0; i < n - 1; i++) {
        if (arr[i-1] < arr[i] > arr[i + 1]) { 
            break;
            printf("%d",arr[i]);
            
        }
    }


    return 0;
}
