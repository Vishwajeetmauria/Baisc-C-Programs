// #include <stdio.h>
// #include<math.h>
// int main() {
//     int sum=pow(3,3);
//     printf("%d result",sum);
//     return 0;
// }

#include <stdio.h>
#include <math.h> // Include math.h for using pow() function

int main() {
    int number, num, digit, sum = 0, count;
    
    // Input the number and the power
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter the power: ");
    scanf("%d", &count);

    num = number; // Store the original number
    
    while (number > 0) {
        digit = number % 10; // Extract the rightmost digit
        sum += pow(digit, count); // Add the digit raised to the power to sum
        number = number / 10; // Move to the next digit by dividing the number
    }
    
    // Output the original number and the sum
    printf("Original Number: %d\n", num);
    printf("Sum of digits raised to the power %d: %d\n", count, sum);
    
    return 0;
}
