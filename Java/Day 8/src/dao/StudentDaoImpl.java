package dao;

import java.util.List;import java.util.stream.Collector;
import java.util.stream.Collectors;
import java.util.ArrayList;

import beans.Employee;
import beans.Student;

public class StudentDaoImpl implements StudentDao {
	
	static List<Student> slist;
	
	static {
		slist = new ArrayList<>();
		slist.add(new Student(01,"Ayush", 84,54,74));
		slist.add(new Student(02,"Chandu", 84,95,99));
		slist.add(new Student(03,"Chinmay", 89,99,100));
	}

	@Override
	public boolean save(Student st) {
		slist.add(st);
		return true;
		
	}

	@Override
	public List<Student> findStudent() {
		return slist;
	}

	@Override
	public Student findById(int sId) {
		int pos = slist.indexOf(new Student(sId));
		if(pos!=-1) {
			return slist.get(pos);
		}
		return null;
	}

	@Override
	public List<Student> findByName(String sName) {
		List<Student> temp = slist.stream()
				.filter(std->std.getsName().equals(sName))
				.collect(Collectors.toList());
		
		if(temp.size()>0) {			
			return temp;
		}
		return null;
	}

	@Override
	public Student findByMarks(double m1) {
		
		return null;
	}

	@Override
	public boolean removeById(int sId) {
		return slist.remove(new Student(sId));
	}

	@Override
	public boolean removeByName(String sName) {
	    return slist.removeIf(std -> std.getsName().equals(sName));
	}

	
}
