#ifndef LIST_H
#define LIST_H

// basic operations
void cleanList();
void isEmptyList();
void isFullList();
void getListSize();

// insert
void add(int value);
void addAtStart(int value);
void addAtPosition(int position, int value);

// remove
void removeFirstPosition();
void removeLastPosition();
void removeByPosition(int position);
void removeByValue(int value);

// find
void find(int position);
void findValuePositions(int searchedValue);
void printList(void);

#endif
