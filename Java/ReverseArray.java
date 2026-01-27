import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public static void Reverse(int[] arr) {
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
public class ReverseArray {
    public static void main(String[] args) {
        
        int[] myArray = {10, 20, 30, 40, 50};
        Reverse(myArray);

        // printing the reversed result
        System.out.println("Reversed Array: " + Arrays.toString(myArray));

        //** java collection approach */
        //List<Integer> list = Arrays.asList(arr);
        //Collections.reverse(list);
    }
