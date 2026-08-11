#include <stdio.h>
#include "list.h"

int list[10];
int size = 0;

void cleanList() {
    for (int i = 0; i < size; i++) {
        list[i] = 0;
    }
    size = 0;
    printf("List was cleaned.");
}


void add(int value) {
    if (size == 10){
        printf("ERROR - The list is full, you can't add a new item");
        return;
    }
    list[size] = value;
    size++;
}

void find(int position) {
    if (position > 9 || position < 0) {
        printf("ERROR - Position must be between 0-9\n");
    } else if (position < size) {
        printf("Position %d; Value %d", position, list[position]);
        return;
    }
    printf("ERROR - Position %d is empty\n", position);
}

void printList(void) {
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}

void removeremoveByPosition(int position) {
    if (position > 9 || position < 0) {
        printf("ERROR - Position must be between 0-9\n");
    } else if (position < size) {
        list[position] = 0;
        return;
    }
    printf("ERROR - Position %d is empty\n", position);
}

void removeByValue(int value) {
    if(size == 0) {
        printf("ERROR - List is empty");
        return;
    }
}
