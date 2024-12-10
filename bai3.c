#include <stdio.h>

int main() {
    int a = 5;       
    int b = 10;      
    int sum = a + b;    
    int diff = a - b;   
    int prod = a * b; 
    float quot = (float)a / b; 

    printf("Tong cua %d và %d là: %d\n", a, b, sum);
    printf("Hieu cua %d và %d là: %d\n", a, b, diff);
    printf("Tích cua %d và %d là: %d\n", a, b, prod);
    printf("Thuong cua %d và %d là: %.2f\n", a, b, quot);

    return 0;
}

