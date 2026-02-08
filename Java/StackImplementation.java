class Stack{
    int top;
    int size = 10000;
    int a[] = new int[size];

    boolean isEmpty(){
        return (top<0);
    }
    Stack(){
        top = -1;
    }

    boolean push(int x){
        if (top >= (size -1)){ 
            System.out.println(" Stack overflow");
            return false;
        }else{
            a[++top] = x;
            System.out.println(x+" pushed into stack");
            return true;
        }
    }

    int pop(){
        if(top<0){
            System.out.println(" stack underflow");
            return 0;
        }else{
            int x = a[top--];
            return x;
        }
    }

    void print(){
        for(int i = top; i>-1; i--){
            System.out.print(a[i]+ " ");
        }
    }
}

class StackImplementation{
    public static void main (String[] args){
        Stack s =new Stack();
        s.push(10);
        s.push(20);
        s.push(30);
        System.out.println(s.pop() + " popped from stack");
        s.print();


       



    }
}