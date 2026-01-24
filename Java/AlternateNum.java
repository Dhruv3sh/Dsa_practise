public class AlternateNum {
    public static void main(String[] args) {
        int[] numbers = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
        
        System.out.println("Alternate numbers in the array (using iterative approach):");
        
        // Use a for loop to iterate and print alternate elements
        for (int i = 0; i < numbers.length; i = i + 2) {
            System.out.print(numbers[i] + " ");
        }
    }
}
 
