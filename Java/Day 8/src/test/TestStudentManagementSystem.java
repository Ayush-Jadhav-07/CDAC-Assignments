package test;
import java.util.List;
import java.util.Scanner;

import beans.Student;
import service.StudentService;
import service.StudentServiceImpl;

public class TestStudentManagementSystem {

	public static void main(String[] args) {
		StudentService s_service =new StudentServiceImpl();
		Scanner sc =new Scanner(System.in);
		System.out.println("Welcome to Student Management System");
		int choice=0;
		do {
			System.out.println("\nPlease Choose The Options From Menu That You Want To Execute");
			System.out.println("1. Add New Student \n2. Display All Student Data \n3. Search a Student By It's ID");
			System.out.println("4. Search a Student By It's Name \n5. Search Student By Marks \n6. Delete a Student By ID");
			System.out.println("7. Delete a Student By Name \n8. Update Student Details \n9.Sort Student Data \n10. Exit");
			choice=sc.nextInt();
			
			switch(choice) {
			case 1->{
				boolean status = s_service.addStudent();
				if(status) {
					System.out.println("Student Data Added Successfully !");
				}
				else {
					System.out.println("Not Added!");
				}
			}
			case 2->{
				List<Student> slist = s_service.display();
				slist.forEach(System.out::println);
				
			}
			case 3->{
				System.out.println("Enter the Id Of Student You Want To Search");
				int sId=sc.nextInt();
				Student s = s_service.serachById(sId);
				if(s!=null) {
					System.out.println(s);
				}
				else {
					System.out.println("Student Not Found !");
				}
			}
			case 4->{
				System.out.println("Enter the Name of Student You Want To Search");
				String sName=sc.next();
				List <Student> s = s_service.serachByName(sName);
				if(s!=null) {
					s.forEach(System.out::println);
				}
				else {
					System.out.println("Student Not Found !");
				}
			}
			case 5->{
				System.out.println("Enter the Marks of Student You Want To Search");
				double m1=sc.nextDouble();
				Student s = s_service.serachByMarks(m1);
				if(s!=null) {
					System.out.println(s);
				}
				else {
					System.out.println("Student Not Found !");
				}
			}
			case 6->{
				System.out.println("Enter Stuent Id to Delete ");
				int sId=sc.nextInt();
				boolean status=s_service.deleteById(sId);
				if(status) {
					System.out.println("Student Deleted successfully");
				}else {
					System.out.println("Not found");
				}
			}
			case 7->{
				System.out.println("Enter Student Name to Delete ");
				String sName = sc.next();
				boolean Status = s_service.deleteByName(sName);
				if(Status) {
					System.out.println("Deleted Successfully!");
				}
				else {
					System.out.println("Student Not Found !");
				}
	
			}
			case 8->{
				
			}
			case 9->{
				
			}
			case 10->{
				System.out.println("--------Thank You For Visiting !-------");
				sc.close();
	
			}
			default-> {
				System.out.println("Please Enter Valid Choice !");
			}
			}
		}while(choice!=10);

	}

}
