#include <stdio.h>

int main() {
    int choice;

    // template to init project

    do {
        printf("\n===== MENU =====\n");
        printf("1. Insert on position\n");
        printf("2. Remove on position\n");
        printf("3. Search Value\n");
        printf("4. List elements\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;

            case 0:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 0);

    return 0;
}
