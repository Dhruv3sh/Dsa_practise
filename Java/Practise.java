import java.util.ArrayList;

public class Practise {
    public static void main(String[] args){
        ArrayList<Integer> obj = new ArrayList<>(List.of(3,4,6,8));
        for(int i=0; i<obj.size(); i++){
            System.out.println(obj.get(i));
        };
    }
}
