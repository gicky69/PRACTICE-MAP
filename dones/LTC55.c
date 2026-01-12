#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

int canJump(int* nums, int numsSize) {
    int furthest = 0;
    for (int i=0;i<numsSize;i++) {
        if (i > furthest) {
            return 0;
        }


        furthest = MAX(furthest, i + nums[i]);

        if (furthest >= numsSize - 1) {
            return 1;
        }
    }

    return 1;
}


int main() {
    int nums[] = {2,3,1,1,4};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("%d", canJump(nums, size));
    return 0;
}
