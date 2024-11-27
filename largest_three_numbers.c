#include <stdio.h>
int largest(int a, int b, int c)
{
    if(a>b && a>c) return a;
    if(b>a && b>c) return b;
    return c;
}
int main()
{
    int x, y, z;
    printf("Enter three numbers:");
    scanf("%d %d %d", &x, &y, &z);
    printf("Largest number is %d", largest(x, y, z));
    printf("Parinitha");
}