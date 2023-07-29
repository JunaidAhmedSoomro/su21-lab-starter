// Copyright 2023 10X Engineers JUNAID
#include <stdio.h>
#include <stdlib.h>

struct lab2b {
    int ID;
    int age;
    char *name;
};

int main() {
    struct lab2b student_info;
    student_info.name = (char *) malloc(50 * sizeof(char));

    printf("Insert ID: ");
    scanf("%d", &student_info.ID);

    // Consume the newline character left in the input buffer
    while (getchar() != '\n');

    printf("Insert Name: ");
    gets(student_info.name); // Use gets to read the entire name

    printf("Insert Age: ");
    scanf("%d", &student_info.age);

    printf("ID is: %d \n", student_info.ID);
    printf("Name is: ");
    puts(student_info.name); // Use puts to display the entire name
    printf("Age is: %d \n", student_info.age);

    // Free the allocated memory
    free(student_info.name);

    return 0;
}
