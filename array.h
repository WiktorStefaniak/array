//
// Created by wiktor on 25.05.2024.
//

#ifndef TECHNOLOGIE_ARRAY_H
#define TECHNOLOGIE_ARRAY_H
#define SIZE 10
void displayArray(int array[]);

void displayArray(int *array);

void enterDataIntoArray(int array[]) ;

int FindMaximumValue(int array[]) ;

int FindMinimumValue(int array[]) ;

float CalculateAverage(int array[]) ;

int saveArrayToFile(int array[]);

int restoreArrayFromFile(int array[]);

#endif //TECHNOLOGIE_ARRAY_H