#include <stdbool.h>

// helper function to check palindrome
bool isPalindrome(char* s) {
    int left = 0;
    int right = 0;

    // find length
    while (s[right] != '\0') {
        right++;
    }
    right--;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

char* firstPalindrome(char** words, int wordsSize) {
    for (int i = 0; i < wordsSize; i++) {
        if (isPalindrome(words[i])) {
            return words[i];  // ✅ return first palindrome
        }
    }
    return "";  // ❗ no palindrome found
}