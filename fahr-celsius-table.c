#include "stdio.h"

//int main() {
//    int fahr, celsius;
//    int lower, upper, step;
//
//    lower = 0;
//    upper = 300;
//    step = 20;
//
//    fahr = lower;
//    while (fahr <= upper) {
//        celsius = 5 * (fahr - 32) / 9;
//        printf("%d\t%d\n", fahr, celsius);
//        fahr = fahr + step;
//    }
//}

int main() {
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}