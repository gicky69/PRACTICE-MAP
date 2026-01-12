#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize) {
    int ans=0;
    for (int i=1;i<pointsSize;i++) {
        ans += MAX(abs(points[i][0] - points[i-1][0]),
                   abs(points[i][1]-points[i-1][1]));
    }

    return ans;
}


int main() {
    int size = 3;
    int colSize = 2;

    int** points = malloc(size * sizeof(int*));

    for (int i = 0; i < size; i++) {
        points[i] = malloc(colSize * sizeof(int));
    }

    points[0][0] = 3;   points[0][1] = 2;
    points[1][0] = -2;   points[1][1] = 2;

    printf("%d\n", minTimeToVisitAllPoints(points, size, &colSize));

    for (int i = 0; i < size; i++) {
        free(points[i]);
    }
    free(points);

    return 0;
}
