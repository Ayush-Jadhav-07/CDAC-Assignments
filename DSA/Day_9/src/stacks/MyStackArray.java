package stacks;

public class MyStackArray {
	private int [] arr;
	private int top;
	
	public MyStackArray() {
		arr = new int[10];
		top = -1;
	}
	
	public MyStackArray(int size) {
		arr = new int[size];
		top=-1;
	}
	
	public void push(int num) {
		if(!isfull()) {
			top++;
			arr[top] = num;
			System.out.println("Stack Pushed Successfully : "+num);
//			System.out.println("Array Pushed at top position of " + top + " is : "+num );
		}
		else {
			System.out.println("Stack is Full!");
		}
	}
	
	public int pop() {
		if(!isEmpty()) {
			int num = arr[top];
			top--;
			return num;
		}
		else {
			System.out.println("Stack is Empty!");
		return -1;
		}
	}

	private boolean isEmpty() {
		return top==-1;
	}

	private boolean isfull() {
		return top == arr.length-1;
	}
	
	public void display() {
		System.out.println("Elements in Array List : ");
		for(int i = 0 ; i <=top ; i++) {
			System.out.print(arr[i] + "\t");
		}
		System.out.println();
	}
}
