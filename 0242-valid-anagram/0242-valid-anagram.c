bool isAnagram(char* s, char* t) {
    
    // Step 1: check length
    if (strlen(s) != strlen(t)) {
        return false;
    }

    int count[26] = {0};

    // Step 2: count s
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    // Step 3: subtract using t
    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;

        if (count[t[i] - 'a'] < 0) {
            return false;
        }
    }

    return true;
}