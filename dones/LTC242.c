#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    // Cast to char pointers and compare
    return (*(const char *)a - *(const char *)b);
}

int isAnagram(char* s, char* t) {
    int ss = strlen(s);
    int ts = strlen(t);

    if (ss != ts) {
        return 0;
    }

    qsort(s, ss, sizeof(char), cmp);
    qsort(t, ts, sizeof(char), cmp);
    
    printf("%s\n", s);
    printf("%s\n", t);

    if (strcmp(s, t) == 0) {
        return 1;
    }

    return 0;
}

int main()
{
    char s[] = "a";
    char t[] = "ab";
    printf("\n %d", isAnagram(s, t));
    return 0;
}
