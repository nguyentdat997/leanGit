#ifndef _git_h
#define _git_h

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*declaration function*/

/************************************************************
function TangDan: sort array in ascending order
input: array pointer point to array
       n number element of array
output: array pointer point to array
************************************************************/
int * TangDan(int *array, int n);


/************************************************************
function GiamDan: sort array in descending order
input: array pointer point to array
       n number element of array
output: array pointer point to array
************************************************************/
int * GiamDan(int *array, int n);
#endif
