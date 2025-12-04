package com.demo.beans;

import java.time.LocalDate;

import javax.persistence.Entity;
import javax.persistence.Table;

@Entity
@Table(name = "nonperishable2")
public class NonPerishableProduct extends Product {
	int grantee;

	public NonPerishableProduct() {
		super();
		// TODO Auto-generated constructor stub
	}

	public NonPerishableProduct(int pId, String pName, int qty, double price, LocalDate mgfDate, int grantee) {
		super(pId, pName, qty, price, mgfDate);
		this.grantee = grantee;
	}

	public int getGrantee() {
		return grantee;
	}

	public void setGrantee(int grantee) {
		this.grantee = grantee;
	}

	@Override
	public String toString() {
		return super.toString()+ "NonPerishableProduct [grantee=" + grantee + "]";
	}

	
	
}
