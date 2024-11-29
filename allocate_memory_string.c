#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char *str = (char *)malloc(6 * sizeof(char));
    strcpy(str, "Hello");
    printf("%s\n", str);
    free(str);
    printf("Parinitha");
    return 0;
}