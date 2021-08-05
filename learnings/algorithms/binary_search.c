#include <stdio.h>

int main()
{
    int n = 10;
    int k;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int left = 0;
    int right = n;
    int mid;

    int found_position = -1;

    printf("Enter number to be searched: ");
    scanf("%d", &k);

    while (left <= right)
    {
        mid = (left+right)/2;

        if (array[mid] == k)
        {
            found_position = mid;
            break;
        }
        else if (array[mid] < k)
        {
            left = mid+1;
        }
        else if (array[mid] > k)
        {
            right = mid-1;
        }
    }

    if (found_position == -1)
        printf("\nItem not found!!");
    else
        printf("Item found!");
}
