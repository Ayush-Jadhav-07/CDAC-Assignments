package service;
import java.util.List;
import java.util.Scanner;
import beans.Student;
import dao.StudentDao;
import dao.StudentDaoImpl;

public class StudentServiceImpl implements StudentService {
	private StudentDao sDao;
	
	public StudentServiceImpl() {
		sDao = new StudentDaoImpl();
	}

	@Override
	public boolean addStudent() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Student ID - ");
		int sId = sc.nextInt();
		sc.nextLine();
		System.out.println("Enter Student Name - ");
		String sName = sc.nextLine();
		System.out.println("Enter Student Marks For M1 -");
		double m1 = sc.nextDouble();
		System.out.println("Enter Student Marks For M2 -");
		double m2 = sc.nextDouble();
		System.out.println("Enter Student Marks For M3 -");
		double m3 = sc.nextDouble();
		
		Student st = new Student (sId, sName, m1 ,m2, m3);
		return sDao.save(st);
	}

	@Override
	public List<Student> display() {
		return sDao.findStudent();
	}

	@Override
	public Student serachById(int sId) {
		return sDao.findById(sId);
	}

	@Override
	public List<Student> serachByName(String sName) {
		return sDao.findByName(sName);
	}

	@Override
	public Student serachByMarks(double m1) {
		return sDao.findByMarks(m1);
	}

	@Override
	public boolean deleteById(int sId) {
		return sDao.removeById(sId);
	}

	@Override
	public boolean deleteByName(String sName) {
		return sDao.removeByName(sName);
	}
	
}
