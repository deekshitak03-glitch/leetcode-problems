bool checkZeroOnes(char* s) {
     int max1 = 0, max0 = 0;
    int count1 = 0, count0 = 0;

    for (int i = 0; s[i] != '\0'; i++) {   // ✅ LOOP ADDED

        if (s[i] == '1') {
            count1++;
            count0 = 0;
            if (count1 > max1) {
                max1 = count1;
            }
        } 
        else {
            count0++;
            count1 = 0;
            if (count0 > max0) {
                max0 = count0;
            }
        }
    }

    return max1 > max0;
}