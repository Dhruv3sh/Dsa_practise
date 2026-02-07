class ArrayDeletion {
    public static void main(String[] args){
        int[] arr = {10,12,14,16,18};
        int size = arr.length;

        while(size > 0){
            for(int i = 0; i<size -1; i++){
                arr[i] = arr[i+1];
            }
            size--;
            
            for(int i = 0; i<size; i++){
                System.out.print(arr[i] + " ");
            }
            System.out.println();
        }
    }
}
