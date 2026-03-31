int getLucky(char* s, int k) {
     int sum = 0;

    // Step 1: convert + sum directly
    for (int i = 0; s[i] != '\0'; i++) {
        int val = s[i] - 'a' + 1;

        // add digits of val
        while (val > 0) {
            sum += val % 10;
            val /= 10;
        }
    }

    // Step 2: repeat k-1 times
    while (k > 1) {
        int temp = 0;

        while (sum > 0) {
            temp += sum % 10;
            sum /= 10;
        }

        sum = temp;
        k--;
    }

    return sum;
}