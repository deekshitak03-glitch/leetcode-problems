int minDeletionSize(char** strs, int strsSize) {
    int cols = strlen(strs[0]);
    int count = 0;

    for (int col = 0; col < cols; col++) {
        for (int row = 0; row < strsSize - 1; row++) {
            if (strs[row][col] > strs[row + 1][col]) {
                count++;
                break;  // no need to check further
            }
        }
    }

    return count;
}