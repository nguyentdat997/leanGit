#include "git.h"
/*definition function*/

/************************************************************
function TangDan: sort array in ascending order
input: array pointer point to array
       n number element of array
output: array pointer point to array
************************************************************/
int * TangDan(int *array, int n)
{
    int i =0;
    int j =0;
    int temp =0;
    for (i =0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[j]<array[i])
            {
                temp = array[i];
                array[i]= array[j];
                array[j]=temp;
            }
        }
    }
    return array;
}
