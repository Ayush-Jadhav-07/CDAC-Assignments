package com.demo.beans;

import java.time.LocalDate;

import javax.persistence.Entity;
import javax.persistence.Table;

@Entity
@Table(name = "perishable2")
public class PerishableProduct extends Product {
	LocalDate expDate;

	public PerishableProduct() {
		super();
		// TODO Auto-generated constructor stub
	}

	public PerishableProduct(int pId, String pName, int qty, double price, LocalDate mgfDate, LocalDate expDate) {
		super(pId, pName, qty, price, mgfDate);
		this.expDate = expDate;
	}

	public LocalDate getExpDate() {
		return expDate;
	}

	public void setExpDate(LocalDate expDate) {
		this.expDate = expDate;
	}

	@Override
	public String toString() {
		return super.toString()+ "PerishableProduct [expDate=" + expDate + "]";
	}
	
	
	
	
	

	
	
	
	
}
