#include <stdio.h>
int main()
{  int num;
    int i,  searchnumber, found = 0;
    printf("Enter the number of elements ");
    scanf("%d", &num);
    int array[num];
    printf("Enter the elements one by one \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the element to be searched ");
    scanf("%d", &searchnumber);

    for (i = 0; i < num ; i++)
    {
        if (searchnumber == array[i] )
        {
        found = i;
        break;
        }
    }
    if (found == i)
        printf("Element is present in the array at position %d",i+1);
    else
        printf("Element is not present in the array\n");
    return 0;
}
