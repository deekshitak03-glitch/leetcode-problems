bool areOccurrencesEqual(char* s) {
  
    int freq[26] = {0};

    // Count frequency of each character
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }

    int expected = 0;

    // Check all frequencies are same
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            if (expected == 0) {
                expected = freq[i];  // first character frequency
            } else if (freq[i] != expected) {
                return false;
            }
        }
    }

    return true;

}