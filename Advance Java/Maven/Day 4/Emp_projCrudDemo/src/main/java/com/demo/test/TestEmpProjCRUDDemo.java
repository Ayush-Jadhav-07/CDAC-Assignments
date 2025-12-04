package com.demo.test;

import java.util.List;
import java.util.Scanner;
import com.demo.beans.Employee;
import com.demo.service.EmployeeService;
import com.demo.service.EmployeeServiceImpl;
import com.demo.service.ProjectService;
import com.demo.service.ProjectserviceImpl;



public class TestEmpProjCRUDDemo {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		EmployeeService eservice = new EmployeeServiceImpl();
		ProjectService pservice=new ProjectserviceImpl();
		
		
		int choice = 0;
		do {
			System.out.println("1. Add project");
			System.out.println("2. Add Employees");
		    System.out.println("3. show all employees");
		    System.out.println("4. delete employee");
			System.out.println("5. update Employees salary");
			System.out.println("6. Add employee in existing project");
			System.out.println("7. display employee in sorted order");
		    System.out.println("8. exit\nchoice:");
		    choice=sc.nextInt();
		    switch(choice) {
		    
		    		case 1->{
		    			pservice.addNewProject();
		    	
		    		}
		    		case 2->{
				    	boolean status=eservice.addNewEmployee();
				    	if(status) {
				    		System.out.println("New EmployeeData Added Successfully");
				    	}else {
				    		System.out.println("Data Not added");
				    	}
				    }
		    		case 3->{
				    	List<Employee> elist=eservice.getAllEmployee();
				    	elist.stream().forEach(System.out::println);
				    }
		    		case 4->{
				    	System.out.println("Enter EmployeeId To Delete");
				    	int empid=sc.nextInt();
				    	boolean status=eservice.deleteById(empid);
				    	if(status) {
				    		System.out.println(" Deleted successfully");
				    	}else {
				    		System.out.println("Not Deleted");
				    	}
				    }
		    		case 5->{
				    	System.out.println("Enter EmployeeId to Update");
				    	int empid=sc.nextInt();
				    	System.out.println("Enter New Salary");
				    	double sal=sc.nextDouble();
				    	System.out.println("Enter New Name");
				    	String name=sc.next();
				    	boolean status=eservice.updateEmployeeById(empid,name,sal);
				    	if(status) {
				    		System.out.println("Employee Updated successfully");
				    	}else {
				    		System.out.println("Employee Not Updated");
				    	}
				    }
		    		 case 6->{
		 		    	System.out.println("Enter EmplyeeId To Add Projectt");
		 		    	int eid=sc.nextInt();
		 		    	System.out.println("Enter Project Id");
		 		    	int pid=sc.nextInt();
		 		    	boolean status=eservice.addProjectToEmployee(eid,pid);
		 		    	if(status) {
		 		    		System.out.println("Employee updated successfully");
		 		    	}else {
		 		    		System.out.println("Not updated");
		 		    	}
		 		    }

				     case 7->{
				    	 List<Employee> elist=eservice.SortEmployeeBySalary();
					    	elist.stream().forEach(System.out::println);
					    	
				     }
				     case 8->{
					    	sc.close();
					    	eservice.closeMySessionFactory();
					    	System.out.println("Thank you for visiting .......");
					    }
		    
		    }
		    
		    
		}while(choice!=8);
		
	}
	
}
		

	


