package dao;

import java.util.List;

import beans.Student;

public interface StudentDao {

	boolean save(Student st);

	List<Student> findStudent();

	Student findById(int sId);

	List<Student> findByName(String sName);

	Student findByMarks(double m1);

	boolean removeById(int sId);

	boolean removeByName(String sName);
	
}
