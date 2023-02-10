//
// Created by hulatime on 10/02/23.
//

#include "stdio.h"

int main() {
    int celsius;

    printf("Celsius | Fahrenheit\n");
    printf("--------------------\n");
    for (celsius = -300; celsius <= 300; celsius = celsius + 20) {
        printf("%-8d|%11.1f\n", celsius, (celsius * 9.0) / 5 + 32);
    }
}