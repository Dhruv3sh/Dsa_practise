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
    // pushes the element to the top
    void push(int x) {
        Node temp = new Node(x);
        temp.next = top;
        top = temp;
    }

    // Removes top elemnt
    public int pop() {

        if (top == null) {
            System.out.println("Stack Underflow");
            return -1;
        }

        Node temp = top;
        top = top.next;
        int val = temp.data;

        temp = null;
        return val;
    }
    //prints the top element
    void peek() {

        if (top == null) {
            System.out.println("Stack is Empty");
        }

        System.out.println("top element is : " + top.data);
    }

    void printStack() {
        if (top == null) {
            System.out.println("Stack is empty");
            return;
        }
        ;

        Node temp = top;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
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
        obj.pop();
        obj.peek();
        obj.printStack();

    }
}
