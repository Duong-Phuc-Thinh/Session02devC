#include <stdio.h>

int main() {
    int a = 5;       
    int b = 10;      
    int sum = a + b;    
    int diff = a - b;   
    int prod = a * b; 
    float quot = (float)a / b; 

    printf("Tong cua %d v� %d l�: %d\n", a, b, sum);
    printf("Hieu cua %d v� %d l�: %d\n", a, b, diff);
    printf("T�ch cua %d v� %d l�: %d\n", a, b, prod);
    printf("Thuong cua %d v� %d l�: %.2f\n", a, b, quot);

    return 0;
}

