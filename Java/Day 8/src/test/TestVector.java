package test;
import java.util.Vector;

public class TestVector {

	public static void main(String[] args) {
		Vector <Integer> v=new Vector<> ();
		v.add(45);
		v.add(75);
		v.add(48);
		
		System.out.println("Size of vector :"+v.size());
		System.out.println("Capacity of vector :"+v.capacity());
		
		v.add(45);
		v.add(75);
		v.add(48);
		v.add(45);
		v.add(75);
		v.add(48);
		v.add(45);
		v.add(75);
		v.add(48);
		System.out.println("Size of vector :"+v.size());
		System.out.println("Capacity of vector :"+v.capacity());
		
		System.out.println("The Vectors Elements are : "+v);
//		v.remove(4);
//		System.out.println("The Vectors Elements are : "+v);
		for(int i=0;i<v.size();i++) {
			for(int j = i+1;j<v.size();j++) {
				if(v.get(i) == v.get(j)) {
					v.remove(j);
					j--;
				}
			}
		}
		
		System.out.println("The Vectors Elements are : "+v);
		System.out.println("Size of vector :"+v.size());
		System.out.println("Capacity of vector :"+v.capacity());
		
		

	}

}
