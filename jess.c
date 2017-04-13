    int list[5] = {1, 2, 3, 4, 5};
    
    // Initialize min as the first number in the array
    int min = list[0];

    int i;
    for(i = 1; i < 5; i++) {
        int currentValue = list[i];
        
        // Checks if the current value in the array is less than the
        // variable "min"
        //
        // If it is, then it replaces the min variable by the current value
        if (currentValue < min) {
            min = currentValue;
        }
    }
    
    printf("Min Value: %d", min);
