package service;

import java.util.List;

import beans.Student;

public interface StudentService {

	boolean addStudent();

	List<Student> display();

	Student serachById(int sId);

	List<Student> serachByName(String sName);

	Student serachByMarks(double m1);

	boolean deleteById(int sId);

	boolean deleteByName(String sName);

	
	

	

}
