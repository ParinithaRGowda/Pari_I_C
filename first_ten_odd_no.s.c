#include <stdio.h>

int main() {
    int i = 1, count = 0;
    do {
        if (i % 2 != 0) {
            printf("%d ", i);
            count++;
        }
        i++;
    } while (count < 10);
    return 0;
}