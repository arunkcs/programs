#include <stdio.h>

int main()
{
    int n = 10;
    int k;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int left = 0;
    int right = n;
    int mid;

    printf("Enter number to be searched: ");
    scanf("%d", &k);

    for (int index = 0; index < n; index++)
    {
        mid = (left+right)/2;

        if (array[mid] == k)
        {
            printf("\nFound %d at position %d \n", k, mid);
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
}
