char* makeFancyString(char* s) {
     int n = strlen(s);
    int index = 0;  // position in result (reuse same array)

    for (int i = 0; i < n; i++) {
        if (index >= 2 && s[i] == s[index - 1] && s[i] == s[index - 2]) {
            continue;  // skip
        }
        s[index++] = s[i];
    }

    s[index] = '\0';  // end string
    return s;
}