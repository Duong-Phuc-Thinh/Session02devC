#include <stdio.h>

int main() {
    int length = 8;         
    int width = 5;              
    int perimeter = 2 * (length + width); 
    int area = length * width;            

    printf("Chieu d�i cua h�nh chu nhat: %d\n", length);
    printf("Chieu rong cua h�nh chu nhat: %d\n", width);
    printf("Chu vi cua h�nh chu nhat: %d\n", perimeter);
    printf("Dien t�ch cua h�nh chu nhat: %d\n", area);

    return 0;
}

