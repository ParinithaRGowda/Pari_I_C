#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30};
    int *ptr = arr;
    for (int i = 0; i < 3; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("Parinitha");
    return 0;
}