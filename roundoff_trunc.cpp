// Round Of and Truncation 

#include <stdio.h>

int main() {
    float trueValue, truncated, roundoff;

    // Input
    printf("Enter true value: ");
    scanf("%f", &trueValue);

    int decimalPlaces;
    printf("Enter number of decimal places: ");
    scanf("%d", &decimalPlaces);

    // Calculate a factor for rounding/truncation
    float factor = 1.0;
    for (int i = 0; i < decimalPlaces; ++i) {
        factor *= 10.0;
    }

    // Truncate and round off
    truncated = (int)(trueValue * factor) / factor;
    roundoff = (int)(trueValue * factor + 0.5) / factor;

    // Output
    printf("True value: %f\n", trueValue);
    printf("Truncated value: %.3f\n", truncated);
    printf("Roundoff value: %.3f\n", roundoff);

    return 0;
}
