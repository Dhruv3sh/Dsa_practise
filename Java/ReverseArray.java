public static void ReverseArray(int[] arr) {
    int start = 0;
    int end = arr.length - 1;


    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;


        // Move pointers inward
        start++;
        end--;
    }
}
