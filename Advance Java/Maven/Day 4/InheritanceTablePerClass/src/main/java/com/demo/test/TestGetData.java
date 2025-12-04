package com.demo.test;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

import com.demo.beans.NonPerishableProduct;
import com.demo.beans.PerishableProduct;
import com.demo.beans.Product;

public class TestGetData {

	public static void main(String[] args) {
		SessionFactory sf = new Configuration().configure().buildSessionFactory();
		Session session = sf.openSession();
		Transaction tr = session.beginTransaction();
		
		Product p1 = session.get(PerishableProduct.class, 10);
		Product p2 = session.get(NonPerishableProduct.class, 11);
		
		System.out.println(p1);
		System.out.println(p2);
		tr.commit();
		session.close();
		sf.close();

	}

}
