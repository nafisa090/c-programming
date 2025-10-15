#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    // Extract the two digits
    int first_digit = N / 10;   // Tens place
    int second_digit = N % 10;  // Units place
    
    // Check if one digit is divisible by the other
    // Need to avoid division by zero
    int is_lucky = 0;
    
    if (second_digit != 0 && first_digit % second_digit == 0) {
        is_lucky = 1;
    }
    
    if (first_digit != 0 && second_digit % first_digit == 0) {
        is_lucky = 1;
    }
    
    if (is_lucky) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
