package com.demo.test;

import java.time.LocalDate;
import java.util.HashSet;
import java.util.Set;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

import com.demo.beans.Course;
import com.demo.beans.Student;

public class TestStudentCourse {

	public static void main(String[] args) {
		SessionFactory sf = new Configuration().configure().buildSessionFactory();
		Session session = sf.openSession();
		Transaction tr = session.beginTransaction();
		
		Course c1 = new Course(101, "PG-DAC", LocalDate.of(2025, 8, 21));
		Course c2 = new Course(102, "PG-DBDA", LocalDate.of(2025, 8, 15));
		
		Student s1 = new Student(14,"Ayush",LocalDate.of(2003, 11, 21),"Male",c1);
		Student s2 = new Student(15,"Chandrakant",LocalDate.of(1999, 2, 23),"Male",c1);
		Student s3 = new Student(16,"Chinmay",LocalDate.of(2003, 4, 19),"Male",c2);
		Student s4 = new Student(17,"Deepika",LocalDate.of(2003, 5, 25),"Female",c2);
		
		Set<Student> sSet = new HashSet<>();
		sSet.add(s1);
		sSet.add(s2);
		
		Set<Student> sSet1 = new HashSet<>();
		sSet1.add(s3);
		sSet1.add(s4);
		
		c1.setsSet(sSet);
		c2.setsSet(sSet1);
		
		session.save(c1);
		session.save(c2);
		session.save(s1);
		session.save(s2);
		session.save(s3);
		session.save(s4);
		
		tr.commit();
		session.close();
		sf.close();
		
	}

}
