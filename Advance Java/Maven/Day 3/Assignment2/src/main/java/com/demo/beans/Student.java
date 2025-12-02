package com.demo.beans;

import java.time.LocalDate;

import javax.persistence.Entity;
import javax.persistence.FetchType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.Table;
@Entity
@Table(name="Student21")
public class Student {
	@Id
	int sId;
	String sName;
	LocalDate dob;
	String gender;
	@ManyToOne(fetch = FetchType.LAZY)
	@JoinColumn(name="courId")
	Course cour;
	public Student() {
		super();
		// TODO Auto-generated constructor stub
	}
	public Student(int sId, String sName, LocalDate dob, String gender, Course cour) {
		super();
		this.sId = sId;
		this.sName = sName;
		this.dob = dob;
		this.gender = gender;
		this.cour = cour;
	}
	public int getsId() {
		return sId;
	}
	public void setsId(int sId) {
		this.sId = sId;
	}
	public String getsName() {
		return sName;
	}
	public void setsName(String sName) {
		this.sName = sName;
	}
	public LocalDate getDob() {
		return dob;
	}
	public void setDob(LocalDate dob) {
		this.dob = dob;
	}
	public String getGender() {
		return gender;
	}
	public void setGender(String gender) {
		this.gender = gender;
	}
	public Course getCour() {
		return cour;
	}
	public void setCour(Course cour) {
		this.cour = cour;
	}
	@Override
	public String toString() {
		return "Student [sId=" + sId + ", sName=" + sName + ", dob=" + dob + ", gender=" + gender + 
				"]";
	}
	
	
	
	

}
