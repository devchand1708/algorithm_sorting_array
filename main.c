/*
Sort an array of 0s, 1s and 2s in linear time complexity, like this one:
int arr[30] = {2, 2, 1, 0, 1, 0, 1, 1, 0, 2, 2, 1, 1, 1, 2, 0, 0, 1, 1, 0, 1, 0, 1, 2, 0, 0, 0, 1, 1, 2};
Description
Given an array consisting only 0s, 1s and 2s, please provide an algorithm sorting that array in
O(n) time complexity. So in the resulting sorted array, 0s will be at starting, then the 1s & then the
2s.
*/

/*
    Author : Devchand Gadhiya
    License : Free
*/

#include <stdio.h>


/* This method should swap value of given variable */
void swap(int* a, int* b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}

/* This method should print array */
void printMyArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]);
}

/* This method should sort given input array */
void asort(int a[], int size) 
{ 
    int first = 0; 
    int middle = 0;
    int last = size; 
  
    while (middle <= last) { 
        switch (a[middle]) { 
        case 0: 
            swap(&a[first++], &a[middle++]); 
            break; 
        case 1: 
            middle++; 
            break; 
        case 2: 
            swap(&a[middle], &a[last--]); 
            break; 
        } 
    } 
}

/* Main program */
int main()
{
    int arr[] = {2, 2, 1, 0, 1, 0, 1, 1, 0, 2, 2, 1, 1, 1, 2, 0, 0, 1, 1, 0, 1, 0, 1, 2, 0, 0, 0, 1, 1, 2};
    int size = sizeof(arr) / sizeof(int);
    
    asort(arr, size-1);
    
    printMyArray(arr, size);

    return 0;
}
