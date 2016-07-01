//bubble.c
//famous bubble sort
//implement the swap algorithm with pointers

//Boaz Raz

#include <stdio.h>

#define MAX 9



//function prototypes
void printValues();
void sort();
void swap(int*, int*);


int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};


// function to print out the values array
void printValues(){
  for (int i = 0; i < MAX; i++) {
    printf(" %d", values[i] );

  }
    printf("\n");

} // end printValues

// sort and compare the values array
void sort(){
  for (int i = 0; i < (MAX - 1); i++) {
    for (int j = 0; j < (MAX - 1); j++) {

      if (values[j] > values[j + 1]){

        swap(&values[j], &values[j +1]);

      }

    }

  }

} // end sort

// swap function by pointers 
void swap(int* i, int* j){

    int temp;

    temp = *i;
    *i = *j;
    *j = temp;
    printValues();

} // end swap


int main(){
  printf("Before: \n");
  printValues();
  sort();
  printf("After: \n");
  printValues();
  return(0);

} // end main

