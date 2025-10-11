package service;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.List;
import java.util.Scanner;

import beans.Employee;
import dao.EmployeeDao;
import dao.EmployeeDaoImpl;

public class EmployeeServiceImpl implements EmployeeService {

	private EmployeeDao eDao;

	public EmployeeServiceImpl() {
		eDao=new EmployeeDaoImpl();
	}	
	
	public boolean addEmployee() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Employee Id : ");
		int empid = sc.nextInt();
		System.out.println("Enter Employee Name : ");
		String ename = sc.next();
		System.out.println("Enter Employee Salary : ");
		double sala = sc.nextDouble();
		System.out.println("Enter Date Of Joining (dd/mm/yyyy) :");
		String jdt = sc.next();
		LocalDate ldt = LocalDate.parse(jdt,DateTimeFormatter.ofPattern("dd/MM/yyyy"));
		
		Employee e = new Employee(empid,ename,sala,ldt);
		return eDao.save(e);
		
	}

	@Override
	public List<Employee> displayAll() {
		
		return eDao.findAll();
	}

	@Override
	public Employee searchById(int eid) {
		return eDao.findById(eid);
	}

	

	@Override
	public List<Employee> findByName(String nm) {
		return eDao.findByName(nm);
	}


	@Override
	public List<Employee> searchBySalary(double e_sal) {
		return eDao.findBySalary(e_sal);
	}

	@Override
	public boolean deleteById(int eid) {
		return eDao.deleteById(eid);
	}

	@Override
	public boolean deleteBySalary(double e_sal) {
		return eDao.deleteBySal(e_sal);
	}
	

	
}
