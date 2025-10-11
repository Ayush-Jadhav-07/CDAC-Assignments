package dao;

import java.util.List;
import java.util.stream.Collectors;
import java.time.LocalDate;
import java.util.ArrayList;

import beans.Employee;

public class EmployeeDaoImpl implements EmployeeDao {

	 static List<Employee> elist;
	 static {
		 elist=new ArrayList<>();
		 elist.add(new Employee(100,"Ash",45678,LocalDate.of(2024, 11, 12)));
		 elist.add(new Employee(101,"Chandu",55678,LocalDate.of(2023, 11, 12)));
		 elist.add(new Employee(103,"Chinmay",35678,LocalDate.of(2020, 11, 12)));
	 }	
	 
	 
//	public boolean save(Employee e) {
//		elist.add(e);
//		return true;
//	}


	@Override
	public List<Employee> findAll() {
		
		return elist;
	}


	@Override
	public boolean save(Employee e) {
		elist.add(e);
		return true;
	}


	@Override
	public Employee findById(int eid) {
		int pos=elist.indexOf(new Employee(eid));
		if(pos!=-1) {
			return elist.get(pos);
		}
		return null;
	}


	@Override
	public List<Employee> findByName(String nm) {
		List<Employee>temp=elist.stream()
                .filter(emp->emp.getEname().equals(nm))
                .collect(Collectors.toList());
		
		if(temp.size()>0) {
			return temp ;
		}
		return null;
	}



	@Override
	public List<Employee> findBySalary(double e_sal) {
		List<Employee>temp=elist.stream()
                .filter(emp->emp.getSala()==(e_sal))
                .collect(Collectors.toList());
		
		if(temp.size()>0) {
			return temp ;
		}
		return null;
	}


	@Override
	public boolean deleteById(int eid) {
		return elist.remove(new Employee(eid));
	}


	@Override
	public boolean deleteBySal(double e_sal) {
		return elist.remove(new Employee(e_sal));
	}

}
