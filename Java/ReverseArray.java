// import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class ReverseArray {

    public static void reverseArrayRecursively(int[] arr, int start, int end) {
    if (start >= end) {
        return;
    }
    // Swap elements
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursive call
    reverseArrayRecursively(arr, start + 1, end - 1);
}
    public static void main(String[] args) {
        

        int[] arr = { 10, 20, 30, 40, 50 };

        //*Recursive approach */
        reverseArrayRecursively(arr, 0, arr.length-1);
        for(int i=0; i<arr.length; i++){
            System.out.print(arr[i] + " ");
        }

        //for (int i = arr.length - 1; i >= 0; i--) {
         //   System.out.print(arr[i] + " ");
        //}

        //*Two pointer approach */
        // int start = 0;
        // int end = arr.length - 1;

        // while (start < end) {
        //     // Swap elements at start and end indices
        //     int temp = arr[start];
        //     arr[start] = arr[end];
        //     arr[end] = temp;

        //     // Move pointers inward
        //     start++;
        //     end--;
        // }
        // System.out.println("Reversed Array: " + Arrays.toString(arr));


        // ** java collection approach */

         List<Integer> list = Arrays.asList(arr);
         Collections.reverse(list);
         System.out.print(List)


        //* */
    }
}
