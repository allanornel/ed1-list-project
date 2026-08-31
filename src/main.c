#include <stdio.h>
#include "list.h"

int main() {
    int choice;
    int value;
    int position;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Add value at the end\n");
        printf("2. Add value at the start\n");
        printf("3. Add value at a specific position\n");
        printf("4. Remove first position\n");
        printf("5. Remove last position\n");
        printf("6. Remove by position\n");
        printf("7. Remove by value\n");
        printf("8. Find value by position\n");
        printf("9. Find all positions of a value\n");
        printf("10. Print list\n");
        printf("11. Clear list\n");
        printf("12. Check if list is empty\n");
        printf("13. Check if list is full\n");
        printf("14. Get list size\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Insert value: ");
                scanf("%d", &value);
                add(value);
                break;

            case 2:
                printf("Insert value: ");
                scanf("%d", &value);
                addAtStart(value);
                break;

            case 3:
                printf("Insert position: ");
                scanf("%d", &position);
                printf("Insert value: ");
                scanf("%d", &value);
                addAtPosition(position, value);
                break;

            case 4:
                removeFirstPosition();
                break;

            case 5:
                removeLastPosition();
                break;

            case 6:
                printf("Insert position: ");
                scanf("%d", &position);
                removeByPosition(position);
                break;

            case 7:
                printf("Insert value: ");
                scanf("%d", &value);
                removeByValue(value);
                break;

            case 8:
                printf("Insert position: ");
                scanf("%d", &position);
                find(position);
                break;

            case 9:
                printf("Insert value: ");
                scanf("%d", &value);
                findValuePositions(value);
                break;

            case 10:
                printList();
                break;

            case 11:
                cleanList();
                break;

            case 12:
                isEmptyList();
                break;

            case 13:
                isFullList();
                break;

            case 14:
                getListSize();
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
