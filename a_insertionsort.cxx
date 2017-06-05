//a_insertionsort.cxx
#include "header.h"

void insertionSort(int array[], int arraysize)
{
    int i, aux, j;
    for (i = 0; i < arraysize; i++)
    {
        aux = array[i];
        j = (i - 1);
        
        while ((j >= 0) and (array[j] > aux))
        {
            array[(j + 1)] = array[j];
            j = (j - 1);
        }
        array[(j + 1)] = aux;
    }
}

/*Bibliografia:


*/
