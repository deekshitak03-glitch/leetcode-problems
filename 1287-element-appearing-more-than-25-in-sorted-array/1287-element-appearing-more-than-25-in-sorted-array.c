int findSpecialInteger(int* arr, int arrSize) {
      int n = arrSize;

    int candidates[3] = { arr[n/4], arr[n/2], arr[(3*n)/4] };

    for(int i = 0; i < 3; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(arr[j] == candidates[i]) {
                count++;
            }
        }

        if(count > n/4) {
            return candidates[i];
        }
    }

    return -1; // just safety

}