#indef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>



void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
