//
// Created by wiktor on 25.05.2024.
//
#include <iostream>
#include "array.h"


void displayArray(int array[]) {
    for (int i = 0; i < SIZE; ++i) {
        printf("array[%d]=%d\n", i, array[i]);
    }
}

int saveArrayToFile(int array[]){
    FILE *fptr = NULL;
    fptr = fopen("plik.txt", "w");
    if (fptr == NULL){
        return 1;
    }
    for(int i = 0; i<SIZE; i++){
        fprintf(fptr,"array[%d] = %d\n",i,array[i]);
    }
    fclose(fptr);
    return 0;
}
int restoreArrayFromFile(int array[]) {
    FILE *fptr = NULL;
    fptr = fopen("plik.txt", "r");
    if (fptr == NULL) {
        return 1;
    }
    for (int i = 0; i < SIZE; i++) {

        if (fscanf(fptr, "array[%d] = %d\n", &i, &array[i]) != 2) {
            fclose(fptr);
            return 2;
        }
    }
    fclose(fptr);
    return 0;
}

void enterDataIntoArray(int array[]) {
    printf("Enter data into array\n");
    for (int i = 0; i < SIZE; ++i) {
        printf("array[%d]=", i);
        scanf(" %d", &array[i]);
    }
}

int FindMaximumValue(int array[]) {
    int max = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int FindMinimumValue(int array[]) {
    int min = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

float CalculateAverage(int array[]) {
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += array[i];

    }

    float average = (float) sum / SIZE;

    return average ;
}