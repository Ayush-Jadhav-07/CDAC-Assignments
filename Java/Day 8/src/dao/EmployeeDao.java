package dao;

import java.util.List;

import beans.Employee;

public interface EmployeeDao {

	

	List<Employee> findAll();

	boolean save(Employee e);

	Employee findById(int eid);

	List<Employee> findByName(String nm);

	List<Employee> findBySalary(double e_sal);

	boolean deleteById(int eid);

	boolean deleteBySal(double e_sal);
	
}
