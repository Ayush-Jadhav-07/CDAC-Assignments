package stacks;

public class MyQueueList {
	Node front;
	Node rear;
	class Node{
		int data;
		Node next;
		
		public Node(int data) {
			this.data=data;
			next=null;
		}
	}
	
	public MyQueueList() {
		front=null;
		rear=null;
	}
	
	public boolean isEmpty() {
		return front==null && rear==null;
	}
	
	public void enQueue(int data) {
		Node newNode =new Node(data);
		if(isEmpty()) {
			front=newNode;
		}
		else {
			rear.next=newNode;
		}
		rear=newNode;
		System.out.println("enQueued successfully "+ data);
		display();
	}
	
	public int deQueue() {
		if(!isEmpty()) {
		Node temp = front;
		front = front.next;
		if(front==null) {
			rear=null;
		}
		temp.next=null;
		System.out.println("Deqeued Successfully! "+ temp.data);
		display();
		return temp.data;
		}
		else {
			System.out.println("Dequeue is Empty!");
			display();
			return -1;
		}
	}
	
	public void display() {
		if(isEmpty()) {
			System.out.println("List is Empty!");
		}
		else {
			Node temp = front;
			while(temp!=null) {
				System.out.print(temp.data + "--->");
				temp=temp.next;
			}
			System.out.println("null");
		}
	}

}
