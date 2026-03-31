/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

// structure to store count + index
typedef struct {
    int soldiers;
    int index;
} Row;

// comparator for sorting
int compare(const void* a, const void* b) {
    Row* r1 = (Row*)a;
    Row* r2 = (Row*)b;

    if (r1->soldiers == r2->soldiers) {
        return r1->index - r2->index;
    }
    return r1->soldiers - r2->soldiers;
}

int* kWeakestRows(int** mat, int matSize, int* matColSize, int k, int* returnSize) {
    Row* rows = (Row*)malloc(matSize * sizeof(Row));

    // count soldiers
    for (int i = 0; i < matSize; i++) {
        int count = 0;
        for (int j = 0; j < matColSize[i]; j++) {
            if (mat[i][j] == 1) count++;
        }
        rows[i].soldiers = count;
        rows[i].index = i;
    }

    // sort rows
    qsort(rows, matSize, sizeof(Row), compare);

    // prepare result
    int* result = (int*)malloc(k * sizeof(int));
    for (int i = 0; i < k; i++) {
        result[i] = rows[i].index;
    }

    *returnSize = k;

    free(rows);
    return result;
}