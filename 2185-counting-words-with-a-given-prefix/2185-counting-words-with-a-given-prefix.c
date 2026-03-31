int prefixCount(char** words, int wordsSize, char* pref) {
    int count = 0;

    for (int i = 0; i < wordsSize; i++) {

        int j = 0;

        // compare word with pref
        while (words[i][j] != '\0' && pref[j] != '\0' && words[i][j] == pref[j]) {
            j++;
        }

        // if full pref matched
        if (pref[j] == '\0') {
            count++;
        }
    }

    return count;
}