import java.util.*;
// import java.util.stream.IntStream;

public class Practise {
    public static void main(String[] args){
        ArrayList<Integer> obj = new ArrayList<>(List.of(3,4,6,8));//directly initializing values in ArrayList
        for(int i=0; i<obj.size(); i++){
            System.out.println(obj.get(i));
        };

        //** picking alternate element from array with java stream **//
        // int[] arr = {10, 20, 30, 40, 50, 60};
        // IntStream.range(0, arr.length)
        //          .filter(i -> i % 2 == 0)
        //          .map(i -> arr[i])
        //          .forEach(i -> System.out.print(i + " "));
    }
}
