package com.demo.test;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

import com.demo.beans.MyUser;
import com.demo.beans.Product;

public class TestMyUser {

	public static void main(String[] args) {
		SessionFactory sf= new Configuration().configure().buildSessionFactory();
		Session session = sf.openSession();
		Transaction tr = session.beginTransaction();
		
		MyUser u1 = new MyUser(5,"Chinmay","chinmay@gmail.com");
		Product p1 = new Product ("Bike",6,100000);
		
		session.save(u1);
		session.save(p1);
		
		tr.commit();
		session.close();
		sf.close();

	}

}
