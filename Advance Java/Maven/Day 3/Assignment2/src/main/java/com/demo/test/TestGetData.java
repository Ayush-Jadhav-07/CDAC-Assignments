package com.demo.test;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

import com.demo.beans.Course;
import com.demo.beans.Student;

public class TestGetData {

	public static void main(String[] args) {
		SessionFactory sf = new Configuration().configure().buildSessionFactory();
		Session session = sf.openSession();
		Transaction tr = session.beginTransaction();
		
		System.out.println("Before Getting");
		Course c1 = session.get(Course.class, 101);
		
		System.out.println(c1);
		System.out.println("After Getting");
		
		System.out.println();
		System.out.println("----------------------------------------------");
		System.out.println();
		
		Student s1 = session.get(Student.class,14);
		System.out.println(s1);
		System.out.println(s1.getCour().getcName());
		
		tr.commit();
		session.close();
		sf.close();
		

	}

}
