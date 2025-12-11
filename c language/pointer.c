#include <stdio.h>
int main()
{
    int arr[3] = {1, 2, 3};
    int *ptr = arr;
    printf("Value of arr[0]: %d\n", *ptr);
    printf("Value of arr[1]: %d\n", *(ptr + 1));
    printf("Value of arr[2]: %d\n", *(ptr + 2));
    return 0;
}











