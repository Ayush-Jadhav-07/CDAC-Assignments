package beans;

import java.time.LocalDate;

public class Employee {
	private int empid;
	private String ename;
	private double sala;
	private LocalDate jdt;
	public Employee() {
		super();
		
	}
	public Employee(int empid, String ename, double sala, LocalDate jdt) {
		super();
		this.empid = empid;
		this.ename = ename;
		this.sala = sala;
		this.jdt = jdt;
	}
	public Employee(int empid) {
		super();
		this.empid = empid;
	}
	
	public Employee(double e_sal) {
		super();
		sala=e_sal;
	}
	@Override
	public boolean equals(Object obj) {
//		System.out.println("in equals method "+this.empid+"----"+((Employee)obj).empid);
		return this.empid==((Employee)obj).empid;
	}
	
	
	public int getEmpid() {
		return empid;
	}
	public void setEmpid(int empid) {
		this.empid = empid;
	}
	public String getEname() {
		return ename;
	}
	public void setEname(String ename) {
		this.ename = ename;
	}
	public double getSala() {
		return sala;
	}
	public void setSala(double sala) {
		this.sala = sala;
	}
	public LocalDate getJdt() {
		return jdt;
	}
	public void setJdt(LocalDate jdt) {
		this.jdt = jdt;
	}
	@Override
	public String toString() {
		return "Employee [empid=" + empid + ", ename=" + ename + ", sala=" + sala + ", jdt=" + jdt + "]";
	}
	
	

	
	

}
