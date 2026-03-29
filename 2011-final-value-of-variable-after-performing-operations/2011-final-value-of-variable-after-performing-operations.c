int finalValueAfterOperations(char** operations, int operationsSize) {
     int x = 0;

    for (int i = 0; i < operationsSize; i++) {
        if (operations[i][1] == '+') {
            x++;   // increment
        } else {
            x--;   // decrement
        }
    }

    return x;
    
}