#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

// Structure to store student information
typedef struct {
    int rollNumber;
    char name[NAME_LENGTH];
    float marks;
} Student;

// Global variables
Student students[MAX_STUDENTS];
int studentCount = 0;

// Function prototypes
void addStudent();
void viewStudents();
void editStudent();
void deleteStudent();
void menu();

int main() {
    menu();
    return 0;
}

// Function to display the menu
void menu() {
    int choice;

    do {
        printf("\n--- Student Record Management System ---\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Edit Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                viewStudents();
                break;
            case 3:
                editStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (1);
}

// Function to add a student
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Student limit reached. Cannot add more students.\n");
        return;
    }

    Student s;
    printf("Enter roll number: ");
    scanf("%d", &s.rollNumber);
    printf("Enter name: ");
    scanf(" %[^\n]", s.name);  // To read a string with spaces
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    students[studentCount++] = s;
    printf("Student added successfully!\n");
}

// Function to view all students
void viewStudents() {
    if (studentCount == 0) {
        printf("No student records available.\n");
        return;
    }

    printf("\n--- Student Records ---\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", 
                students[i].rollNumber, students[i].name, students[i].marks);
    }
}

// Function to edit a student's record
void editStudent() {
    if (studentCount == 0) {
        printf("No student records available to edit.\n");
        return;
    }

    int rollNumber, found = 0;
    printf("Enter the roll number of the student to edit: ");
    scanf("%d", &rollNumber);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNumber == rollNumber) {
            found = 1;
            printf("Editing record for Roll Number: %d\n", rollNumber);
            printf("Enter new name: ");
            scanf(" %[^\n]", students[i].name);
            printf("Enter new marks: ");
            scanf("%f", &students[i].marks);
            printf("Record updated successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("Student with Roll Number %d not found.\n", rollNumber);
    }
}

// Function to delete a student's record
void deleteStudent() {
    if (studentCount == 0) {
        printf("No student records available to delete.\n");
        return;
    }

    int rollNumber, found = 0;
    printf("Enter the roll number of the student to delete: ");
    scanf("%d", &rollNumber);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNumber == rollNumber) {
            found = 1;
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;
            printf("Student with Roll Number %d deleted successfully!\n", rollNumber);
            break;
        }
    }

    if (!found) {
        printf("Student with Roll Number %d not found.\n", rollNumber);
    }
}