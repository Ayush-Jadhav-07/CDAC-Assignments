package service;

import java.util.List;

import beans.Employee;

public interface EmployeeService {

	

	List<Employee> displayAll();

	boolean addEmployee();

	Employee searchById(int eid);

	List<Employee> findByName(String nm);

	List<Employee> searchBySalary(double e_sal);

	boolean deleteById(int eid);

	boolean deleteBySalary(double e_sal);

}
