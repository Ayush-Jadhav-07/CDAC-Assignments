package com.demo.beans;

import java.time.LocalDate;
import java.util.Set;

import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.OneToMany;
import javax.persistence.Table;

@Entity
@Table(name = "course21")
public class Course {
	@Id
	int cId;
	String cName;
	LocalDate startDate;
	@OneToMany(mappedBy = "cour")
	Set<Student> sSet;
	public Course() {
		super();
		// TODO Auto-generated constructor stub
	}
	public Course(int cId, String cName, LocalDate startDate, Set<Student> sSet) {
		super();
		this.cId = cId;
		this.cName = cName;
		this.startDate = startDate;
		this.sSet = sSet;
	}
	public Course(int cId, String cName, LocalDate startDate) {
		super();
		this.cId = cId;
		this.cName = cName;
		this.startDate = startDate;
	}
	public int getcId() {
		return cId;
	}
	public void setcId(int cId) {
		this.cId = cId;
	}
	public String getcName() {
		return cName;
	}
	public void setcName(String cName) {
		this.cName = cName;
	}
	public LocalDate getStartDate() {
		return startDate;
	}
	public void setStartDate(LocalDate startDate) {
		this.startDate = startDate;
	}
	public Set<Student> getsSet() {
		return sSet;
	}
	public void setsSet(Set<Student> sSet) {
		this.sSet = sSet;
	}
	@Override
	public String toString() {
		return "Course [cId=" + cId + ", cName=" + cName + ", startDate=" + startDate + ", sSet=" + sSet + "]";
	}
	
	
	
	
}
