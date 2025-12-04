package com.demo.beans;

import java.time.LocalDate;

import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.Inheritance;
import javax.persistence.InheritanceType;
import javax.persistence.Table;

@Entity
@Table (name = "myProduct232")
@Inheritance(strategy = InheritanceType.TABLE_PER_CLASS)
public class Product {
	@Id
	int pId;
	String pName;
	int qty;
	double price;
	LocalDate mgfDate;
	public Product() {
		super();
		// TODO Auto-generated constructor stub
	}
	public Product(int pId, String pName, int qty, double price, LocalDate mgfDate) {
		super();
		this.pId = pId;
		this.pName = pName;
		this.qty = qty;
		this.price = price;
		this.mgfDate = mgfDate;
	}
	public int getpId() {
		return pId;
	}
	public void setpId(int pId) {
		this.pId = pId;
	}
	public String getpName() {
		return pName;
	}
	public void setpName(String pName) {
		this.pName = pName;
	}
	public int getQty() {
		return qty;
	}
	public void setQty(int qty) {
		this.qty = qty;
	}
	public double getPrice() {
		return price;
	}
	public void setPrice(double price) {
		this.price = price;
	}
	public LocalDate getMgfDate() {
		return mgfDate;
	}
	public void setMgfDate(LocalDate mgfDate) {
		this.mgfDate = mgfDate;
	}
	@Override
	public String toString() {
		return "Product [pId=" + pId + ", pName=" + pName + ", qty=" + qty + ", price=" + price + ", mgfDate=" + mgfDate
				+ "]";
	}
	
	
}
