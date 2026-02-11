/* Node structure */
class Node {
    public int data;
    public Node next;

    public Node(int x) {
        data = x;
        next = null;
    }
}

/* Stack class */
class MyStack {
    // pointer to top node
    private Node top;

    public MyStack() {
        // initially stack is empty
        top = null;
    }

    void push(int x) {
        Node temp = new Node(x);
        temp.next = top;
        top = temp;
    }

    void printStack(){
        if(top == null){
            System.out.println("Stack is empty");
            return;
        };

        Node temp = top;
        while (temp != null) {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }
    
}

class StackWithLl {
    public static void main(String[] args) {
        MyStack obj = new MyStack();
        obj.push(10);
        obj.push(11);
        obj.push(12);
        obj.push(13);
        obj.printStack();

    }
}