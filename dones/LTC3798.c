#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

    char* largestEven(char* s) {
        int i, len = strlen(s);

        for (i=len-1;i>=0;i--) {
            if (s[i] == '2') break;
        }

        s[i+1] = '\0';
        return s;
    }



int main() {
    char* s = "1";
    int size = strlen(s);

    printf("%s", largestEven(s));
    return 0;
}
