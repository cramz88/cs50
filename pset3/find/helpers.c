/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int min, max, i;
    min = 0; max = n-1;
   do{
       i = ((max-min)/2 + min);
       if (values[i] == value)
            return true;
        else if (value > values[i])
            min = i+1;
        else
            min = i-1;
        
   } while(max-min>0);
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // attempting bubble sort
    int count;
    int temp;
    do
    { 
        count = 0;
        for (int i = 0; i < n-1; i++)
        {
            if (values [i+1] < values[i])
            {
                
                temp = values[i];
                values[i] = values[i+1];
                values[i+1] = temp;
                count++;
            }
        }    
        
    } while (count > 0);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Sorted[%i] = %i\n", i, values[i]);
    }
    // TODO: implement an O(n^2) sorting algorithm
}
