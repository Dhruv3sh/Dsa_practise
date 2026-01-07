import java.util.ArrayList;

public class Practise {
    public static void main(String[] args){
        ArrayList<Integer> obj = new ArrayList<>();

        obj.add(3);
        obj.add(4);
        obj.add(5);
        for(int i=0; i<obj.size(); i++){
            System.out.println(obj.get(i));
        };
    }
}
