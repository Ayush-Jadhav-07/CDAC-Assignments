package com.demo.beans;

import java.time.LocalDate;

import javax.persistence.Id;
import javax.persistence.MappedSuperclass;

@MappedSuperclass
public class Product233 {
	@Id
	int pId;
	String pName;
	int qty;
	double price;
	LocalDate mfgDate;
	public Product233() {
		super();
		// TODO Auto-generated constructor stub
	}
	public Product233(int pId, String pName, int qty, double price, LocalDate mfgDate) {
		super();
		this.pId = pId;
		this.pName = pName;
		this.qty = qty;
		this.price = price;
		this.mfgDate = mfgDate;
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
	public LocalDate getMfgDate() {
		return mfgDate;
	}
	public void setMfgDate(LocalDate mfgDate) {
		this.mfgDate = mfgDate;
	}
	@Override
	public String toString() {
		return "Product [pId=" + pId + ", pName=" + pName + ", qty=" + qty + ", price=" + price + ", mfgDate=" + mfgDate
				+ "]";
	}
	
	
}
