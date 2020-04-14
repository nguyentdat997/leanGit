/*program input an array and print data after sort to screen*/
#include "git.h"


int main()
{
    int n =0;
    int i =0;
    int *array;
    printf("Program sort array!\n");
    printf("Input number element of array n = ");
    fflush(stdin);
    scanf("%d",&n);
    array = (int*)malloc(sizeof(int));
    printf("Input data for array:\n");
    for(i=0;i<n;i++)
    {
        printf("array[%d] = ",i);
        fflush(stdin);
        scanf("%d",array+i);
    }

    printf("Data after sort in ascending order:\n");
    array = TangDan(array,n);
    for(i=0;i<n;i++)
    {
        printf("array[%d] = %d\n",i,*(array+i));
        fflush(stdin);
    }
    free(array);
}

