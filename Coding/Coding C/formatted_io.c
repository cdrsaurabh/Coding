#include <stdio.h>
#include <malloc.h>

void main() {
    int m = 10;
    float b = 23.54567;
    char c = 's';
    char d[] = "CIMAGE";
    double x = 458.8765;
    long int p = 1234567;

    printf("Formatted I/O...\n");

    // %wd - Width of the number
    printf("%5d %5d\n", m, 234);
    printf("%d\n", sizeof(int));

    // %w.nf - Floating point formatting (total width w, decimal digits n)
    printf("%15.8f\n", b);

    // %wc - Character formatting
    printf("%5c %5c\n", c, 'y');
    printf("%d\n", sizeof(d));

    // %ws - String formatting
    printf("%10.10s %10.10s", d, "COLLEGE");
}
