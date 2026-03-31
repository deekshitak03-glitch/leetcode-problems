#include <stdlib.h>

char* convertToTitle(int columnNumber) {
    char* result = (char*)malloc(100 * sizeof(char)); // enough space
    int i = 0;

    while (columnNumber > 0) {
        columnNumber--;  // 🔥 key step

        result[i++] = 'A' + (columnNumber % 26);
        columnNumber /= 26;
    }

    result[i] = '\0';

    // reverse string
    int left = 0, right = i - 1;
    while (left < right) {
        char temp = result[left];
        result[left] = result[right];
        result[right] = temp;
        left++;
        right--;
    }

    return result;
}