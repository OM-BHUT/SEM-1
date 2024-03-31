#include <stdio.h>
#include <math.h>

int main() {
    printf("Armstrong numbers between 1 and 500:\n");
	int num;
    for ( num = 1; num <= 500; num++) {
        int originalNum = num;
        int n = 0, result = 0;

        // Count the number of digits
        int temp = num;
        while (temp != 0) {
            temp /= 10;
            n++;
        }

        // Calculate the sum of cubes of each digit
        temp = num;
        while (temp != 0) {
            int remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }

        // Check if the number is an Armstrong number
        if (result == num)
            printf("%d\n", num);
    }

    return 0;
}

