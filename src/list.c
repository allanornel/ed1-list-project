#include <stdio.h>
#include "list.h"

#define MAX_LIST_SIZE 10

int list[MAX_LIST_SIZE];
int size = 0;

static void shiftRightFrom(int position) {
    for (int i = size; i > position; i--) {
        list[i] = list[i - 1];
    }
}

static void shiftLeftFrom(int position) {
    for (int i = position; i < size - 1; i++) {
        list[i] = list[i + 1];
    }
    list[size - 1] = 0;
}

void cleanList(void) {
    for (int i = 0; i < size; i++) {
        list[i] = 0;
    }
    size = 0;
    printf("List was cleaned.\n");
}

void isEmptyList(void) {
    if (size == 0) {
        printf("The list is empty.\n");
    } else {
        printf("The list is not empty.\n");
    }
}

void isFullList(void) {
    if (size == MAX_LIST_SIZE) {
        printf("The list is full.\n");
    } else {
        printf("The list is not full.\n");
    }
}

void getListSize(void) {
    printf("List size: %d\n", size);
}

void add(int value) {
    if (size == MAX_LIST_SIZE) {
        printf("ERROR - The list is full, you can't add a new item\n");
        return;
    }

    list[size] = value;
    size++;
    printf("Value %d added to the end of the list.\n", value);
}

void addAtStart(int value) {
    if (size == MAX_LIST_SIZE) {
        printf("ERROR - The list is full, you can't add a new item\n");
        return;
    }

    shiftRightFrom(0);
    list[0] = value;
    size++;
    printf("Value %d added at the beginning.\n", value);
}

void addAtPosition(int position, int value) {
    if (size == MAX_LIST_SIZE) {
        printf("ERROR - The list is full, you can't add a new item\n");
        return;
    }

    if (position < 0 || position > size) {
        printf("ERROR - Position must be between 0 and %d\n", size);
        return;
    }

    shiftRightFrom(position);
    list[position] = value;
    size++;
    printf("Value %d inserted at position %d.\n", value, position);
}

void removeFirstPosition(void) {
    if (size == 0) {
        printf("ERROR - List is empty\n");
        return;
    }

    int removedValue = list[0];
    shiftLeftFrom(0);
    size--;
    printf("Removed %d from the beginning.\n", removedValue);
}

void removeLastPosition(void) {
    if (size == 0) {
        printf("ERROR - List is empty\n");
        return;
    }

    int removedValue = list[size - 1];
    list[size - 1] = 0;
    size--;
    printf("Removed %d from the end.\n", removedValue);
}

void removeByPosition(int position) {
    if (size == 0) {
        printf("ERROR - List is empty\n");
        return;
    }

    if (position < 0 || position >= size) {
        printf("ERROR - Position must be between 0 and %d\n", size - 1);
        return;
    }

    int removedValue = list[position];
    shiftLeftFrom(position);
    size--;
    printf("Removed %d from position %d.\n", removedValue, position);
}

void removeByValue(int value) {
    int removedCount = 0;

    if (size == 0) {
        printf("ERROR - List is empty\n");
        return;
    }

    for (int i = 0; i < size; i++) {
        if (list[i] == value) {
            removedCount++;
            shiftLeftFrom(i);
            size--;
            i--;
        }
    }

    if (removedCount == 0) {
        printf("Value %d was not found in the list.\n", value);
    } else {
        printf("%d occurrence(s) of %d removed.\n", removedCount, value);
    }
}

void find(int position) {
    if (position < 0 || position >= size) {
        printf("ERROR - Position %d is empty\n", position);
        return;
    }

    printf("Position %d; Value %d\n", position, list[position]);
}

void findValuePositions(int searchedValue) {
    int found = 0;

    printf("Positions with value %d: ", searchedValue);
    for (int i = 0; i < size; i++) {
        if (list[i] == searchedValue) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("none");
    }

    printf("\n");
}

void printList(void) {
    if (size == 0) {
        printf("List is empty.\n");
        return;
    }

    printf("List: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}
