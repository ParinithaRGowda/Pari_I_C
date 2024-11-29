#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee employees[100];
    int n, i;
    float sum = 0;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    printf("Enter the details of %d employees:\n", n);
    for (i = 0; i < n; i++) {
        printf("Enter name for employee %d: ", i + 1);
        scanf("%s", employees[i].name);
        printf("Enter ID for employee %d: ", i + 1);
        scanf("%d", &employees[i].id);
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &employees[i].salary);
        sum += employees[i].salary;
    }

    float average_salary = sum / n;
    printf("Average salary of employees: %.2f\n", average_salary);

    return 0;
}