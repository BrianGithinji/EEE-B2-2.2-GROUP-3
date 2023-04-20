#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[50];
    int id;
    char department[50];
    int card_id;
};

int main() {
    int num_students, i;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    struct student *students = (struct student*)malloc(num_students * sizeof(struct student));
    if (students == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Enter student details
    for (i = 0; i < num_students; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Department: ");
        scanf("%s", students[i].department);
        printf("\n");
    }

    // Search for lost card
    int card_id;
    printf("Enter the lost card ID: ");
    scanf("%d", &card_id);
    for (i = 0; i < num_students; i++) {
        if (students[i].card_id == card_id) {
            printf("Card found!\n");
            printf("Name: %s\n", students[i].name);
            printf("ID: %d\n", students[i].id);
            printf("Department: %s\n", students[i].department);
            return 0;
        }
    }
    printf("Card not found.\n");
    return 0;
}
