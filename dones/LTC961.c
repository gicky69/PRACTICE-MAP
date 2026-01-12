#include <stdio.h>
#include <stdlib.h>

int repeatedNTimes(int* nums, int numsSize) {
    int arr[numsSize];
    arr[0] = nums[0];
    int arrSize = 1;
    for (int i=0;i<numsSize;i++) {
        for (int k=i+1;k<numsSize;k++){
            if (arr[i] == nums[k]) {

                return nums[i];
            }
        }

        arr[arrSize] = nums[arrSize];
        arrSize++;
    }

    return -1;
}

int main()
{
    int numSize;
    scanf("%d", &numSize);

    int nums[numSize];

    for (int i=0;i<numSize;i++) {
        scanf("%d", &nums[i]);
    }

    printf("nums:");

    printf("\n%d", repeatedNTimes(nums, numSize));
    return 0;
}
