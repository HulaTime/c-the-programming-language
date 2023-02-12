//
// Created by hulatime on 10/02/23.
//

#include "stdio.h"

int main() {
    int fahr;

    printf("Fahrenheit | Celsius\n");
    printf("--------------------\n");
    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%-11d|%8.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}