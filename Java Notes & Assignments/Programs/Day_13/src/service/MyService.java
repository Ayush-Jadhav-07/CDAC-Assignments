package service;

import java.util.Scanner;

import beans.Employee;
import exception.NegativeSalaryException;

public class MyService {
	public void acceptData() throws NegativeSalaryException{
		Scanner sc = new Scanner(System.in);
		Employee e = new Employee (10, "XXXX", 25000);
		e.setEsalary(-25466);
	}
}
