package test;

import stacks.MyQueueList;

public class TestMyQueue {

	public static void main(String[] args) {
		MyQueueList list = new MyQueueList();
		
		list.enQueue(5);
		list.enQueue(10);
		list.enQueue(15);
		System.out.println("-----------------");
		list.deQueue();
	}

}
