#include <stdio.h>

int main() {
    int length = 8;         
    int width = 5;              
    int perimeter = 2 * (length + width); 
    int area = length * width;            

    printf("Chieu dài cua hình chu nhat: %d\n", length);
    printf("Chieu rong cua hình chu nhat: %d\n", width);
    printf("Chu vi cua hình chu nhat: %d\n", perimeter);
    printf("Dien tích cua hình chu nhat: %d\n", area);

    return 0;
}

