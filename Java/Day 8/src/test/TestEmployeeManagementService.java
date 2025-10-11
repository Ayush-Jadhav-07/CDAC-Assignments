package test;
import java.util.List;
import java.util.Scanner;

import beans.Employee;
import service.EmployeeService;
import service.EmployeeServiceImpl;


public class TestEmployeeManagementService {
	public static void main(String[] args) {
		EmployeeService eservice=new EmployeeServiceImpl();
		Scanner sc=new Scanner(System.in);
		int choice=0;
		do {
			System.out.println("1. Add New Employee\n2. Display All Data\n3. Search by ID");
			System.out.println("4. Search by Name\n5. Search by Salary\n6. Delete by Id\n7. Delete by Salary");
			System.out.println("8. Update Salary  \n9. Sort by Salary \n10. exit\n Enter Your Choice : ");
			choice=sc.nextInt();
			
			switch(choice) {
			case 1 -> {
				boolean status = eservice.addEmployee();
				if(status) {
					System.out.println("Added Successfully !");
				}
				else {
					System.out.println("Not Added ----!");
				}
			}
			case 2 -> {
				List<Employee> elist = eservice.displayAll();
				elist.forEach(System.out::println);
			}
			case 3 -> {
				System.out.println("Enter the id you want to search");
				int eid=sc.nextInt();
				Employee e=eservice.searchById(eid);
				if(e!=null) {
					System.out.println(e);
				}
				else {
					System.out.println("User Id Not Found!");
				}
			}
			case 4 -> {
				System.out.println("Enter the name you want to search");
				String nm=sc.next();
				List<Employee>ename=eservice.findByName(nm);
				if(ename!=null) {
					ename.forEach(System.out::println);
				}
				else
				{
					System.out.println("User Name Not Found!");
				}
			}
			case 5 -> {
				System.out.println("Enter the Salary of Employee you want to search");
				double e_sal=sc.nextDouble();
				List<Employee> e_sala=eservice.searchBySalary(e_sal);
				if(e_sala!=null) {
					System.out.println(e_sala);
				}
				else {
					System.out.println("User Not Found!");
				}
			}
			case 6 -> {
				System.out.println("enetr id for delete");
				int eid=sc.nextInt();
				boolean status=eservice.deleteById(eid);
				if(status) {
					System.out.println("deleted successfully");
				}else {
					System.out.println("not found");
				}
			}
			case 7 -> {
				System.out.println("enetr salary for delete");
				double e_sal=sc.nextDouble();
				boolean e_sala=eservice.deleteBySalary(e_sal);
				if(e_sala) {
					System.out.println(e_sala);
				}
				else {
					System.out.println("User Not Found!");
				}
				
			}
			case 8 -> {
			}
			case 9 -> {
			}
			case 10 -> {
				sc.close();
				System.out.println("Thanks For Visiting !");
			}
			default -> {
				System.out.println("Please Choose Correct Choice !");
			}
			}
		}while(choice!=10);
	}

}
