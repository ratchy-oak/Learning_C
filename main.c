#include <stdio.h> // System Librar: Standard Input/Output Header
#define PI 3.14159

// int = integer
int main() {
    int num, x, y;
    int radius = 7;
    float areaCircle, circumferenceCircle;
    float celcius, farenheit;
    
    num = 39;
    printf("CPE-KMUTT"); //String
    printf(": Cohort CPE#%d\n", num); // %d = decimal
    printf("PI = %f\n", PI);
    printf("PI = %10.3f\n", PI);
    printf("PI = %010.3f\n", PI);
    printf("PI = %-10.4f\n", PI);

    areaCircle = PI * radius * radius;
    printf("Area of a circle with radius = %d is %-.2f\n", radius, areaCircle);
    // Calculate for Circumference
    circumferenceCircle = 2 * PI * radius;
    printf("Circumference of a circle with radius = %d is %-.2f\n", radius, circumferenceCircle);

    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Octal of %d is %o.\n", num, num); // 4 * 8^1 + 7 * 8^0 = 47_8
    printf("Hexadecima of %d is %x.\n", num, num); // 10 011 = 27_16
    printf("Hexadecima of %d is %X.\n", num, num);

    printf("Enter a celcius value: ");
    scanf("%f", &celcius);
    farenheit = 9/5 * celcius + 32;
    printf("%f degree celcius = %fF.\n", celcius, farenheit);

    printf("Enter a decimal number: ");
    scanf("%d", &num);
    while (x != 0)
    {
        x = num / 2;
        y = num % 2;
        printf("%2d / %d = %2d rem %d.\n", num, 2, x, y);
        num = x;
    }

    return 0; // Normal Program Termination
}