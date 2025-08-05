#include <stdio.h>

int main() {
    int c;
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &c);
    int f;
    printf("The temperature in Celsius %d is converted to Fahrenheit %d", c, f = c * 9 / 5 + 32);
    
    return 0;
}