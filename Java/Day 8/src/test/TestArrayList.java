package test;
import beans.Employee;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import java.util.Optional;
import java.util.Scanner;


public class TestArrayList {

	public static void main(String[] args) {
		List<Employee>elist=new ArrayList<>();
		elist.add(new Employee (45,"Ayush",90000,LocalDate.of(2000,12,12)));
		elist.add(new Employee (46,"Ash",70000,LocalDate.of(2001,11,11)));
		elist.add(new Employee (47,"Chandu",80000,LocalDate.of(2002,10,10)));
		
		for(int i = 0; i<elist.size(); i++) {
			System.out.println(elist.get(i));
		}
		
//		System.out.println("----------------------");
//		for(Employee e:elist) {  
//			System.out.println(e);  
//		}
//		System.out.println("----------------------");
//		Iterator<Employee> it=elist.iterator();
//		while(it.hasNext()) {
//			Employee e=it.next();
//			System.out.println(e);
//		}
		
		//it is bidirectional iterator
//		ListIterator<Employee> it1=elist.listIterator();
		
		//1.8
//		elist.forEach(System.out::println);
		//search by id
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Id To Search Employee : ");
		int id=sc.nextInt();
		Optional<Employee> op=elist.stream().filter(emp->emp.getEmpid()==id).findFirst();
		if(op.isPresent()) {
			System.out.println("ID Found Succefully!");
			System.out.println(op.get());
		}else {
			System.out.println("Not found");
		}
		
		sc.close();

	}

}
