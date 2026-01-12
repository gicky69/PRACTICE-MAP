#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* key;       // the sorted word
    char** words;    // array of words in this group
    int size;        // current number of words
    int capacity;    // allocated capacity
} AnagramGroup;

int cmp(const void* a, const void* b) {
    return (*(char*)a - *(char*)b);
}

int cmpStrings(const void* a, const void* b) {
    char* s1 = *(char**)a;
    char* s2 = *(char**)b;
    return strcmp(s1, s2);
}

char groupAnagrams(char** strs, int strsSize) {
    char ***result = malloc(strsSize * sizeof(char**));
    char** copy = malloc(strsSize * sizeof(char*));

    // Sorted each Words.. aet, aet, ant, aet, ant, abt
    for (int i=0;i<strsSize;i++) {
        copy[i] = strdup(strs[i]);
        qsort(copy[i], strlen(copy[i]), sizeof(char),cmp);
    }

    // Groupings
    int groupCnt = 0;
    AnagramGroup groups[strsSize];

    for (int i=0;i<strsSize;i++) {
        // Dups sortedWord
        char* sortedWord = copy[i];
        int found = 0;

        // Check if the group's key to the current "[i]" sorted word
        for (int k=0;k<groupCnt;k++) {
            if (strcmp(groups[k].key, sortedWord)==0) {
                // Add the unsorted word to that group.
                groups[k].words[groups[k].size++] = strs[i];
                found = 1;
                break;
            }
        }

        // If not found then create a new group
        if (!found) {
            groups[groupCnt].key = sortedWord;
            groups[groupCnt].capacity = 4;
            groups[groupCnt].words = malloc(groups[groupCnt].capacity * sizeof(char*));
            groups[groupCnt].words[0] = strs[i];
            groups[groupCnt].size = 1;
            groupCnt++;
        }
    }

}


int main() {
    char* strs[] = {"eat","tea","tan","ate","nat","bat"};
    char result = groupAnagrams(strs, 6);

}
