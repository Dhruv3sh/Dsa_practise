public class AlternateNum {
    public static void main(String[] args) {
        int[] numbers = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
        
        System.out.println("Alternate numbers in the array (using iterative approach):");
        
        // Use a for loop to iterate and print alternate elements
        for (int i = 0; i < numbers.length; i = i + 2) {
            System.out.print(numbers[i] + " ");
        }

        //** Modulo approach **//
        /*for (int i = 0; i < arr.length; i++){
            if (i % 2 == 0) {
                // If the index is even, print the element at that index
                System.out.println(numbers[i] + " ");
            }*/
    }
}
 
