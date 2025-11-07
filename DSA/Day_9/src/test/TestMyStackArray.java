package test;

import stacks.MyStackArray;

public class TestMyStackArray {

	public static void main(String[] args) {
		MyStackArray ob = new MyStackArray(5);
		ob.push(1);
		ob.push(2);
		ob.push(3);
		ob.push(4);
		ob.display();
		System.out.println("Array Popped Successfull! " + ob.pop());
		ob.display();
		ob.push(5);
		ob.display();
	}

}
