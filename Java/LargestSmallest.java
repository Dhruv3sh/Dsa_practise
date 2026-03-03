class LargestSmallest{

    void bruteforce(int[] arr){
        for(int i=0; i<arr.length; i++){
            int j = i;
            while(j>0 && arr[j-1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1]   = arr[j];
                arr[j] = temp;
                j--;
            }
        }
        int min = arr[0];
        int max = arr[arr.length-1];
        System.out.println("min = " + min);
        System.out.println("max = " + max);
    }

    void Optimal(int[] arr){
        int min = arr[0];
        int max = arr[0];
        for(int i=0; i<arr.length; i++){
            if(arr[i] < min) min = arr[i];
            if(arr[i] > max) max = arr[i];
        }
        System.out.println("min = " + min);
        System.out.println("max = " + max);
    }
    public static void main( String[] args){
        int[] arr = {2,5,6,3,8,9,0,1};
        LargestSmallest obj = new LargestSmallest();

        obj.bruteforce(arr);// tc = O(n logn), sc = O(1)
        obj.Optimal(arr); // tc = O(n), sc = O(1)
    }
}