/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int score;
    int index;
} Pair;

// Comparator for sorting in descending order
int cmp(const void* a, const void* b) {
    return ((Pair*)b)->score - ((Pair*)a)->score;
}

char** findRelativeRanks(int* score, int scoreSize, int* returnSize) {
    *returnSize = scoreSize;

    Pair* arr = (Pair*)malloc(sizeof(Pair) * scoreSize);

    for (int i = 0; i < scoreSize; i++) {
        arr[i].score = score[i];
        arr[i].index = i;
    }

    // Sort scores in descending order
    qsort(arr, scoreSize, sizeof(Pair), cmp);

    char** result = (char**)malloc(sizeof(char*) * scoreSize);

    for (int i = 0; i < scoreSize; i++) {
        int idx = arr[i].index;

        result[idx] = (char*)malloc(20 * sizeof(char));

        if (i == 0)
            strcpy(result[idx], "Gold Medal");
        else if (i == 1)
            strcpy(result[idx], "Silver Medal");
        else if (i == 2)
            strcpy(result[idx], "Bronze Medal");
        else
            sprintf(result[idx], "%d", i + 1);
    }

    free(arr);
    return result;
}