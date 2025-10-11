package beans;

import java.util.Objects;

public class Student {
	private int sId;
	private String sName;
	private double m1,m2,m3;
	public Student(int sId) {
		super();
		this.sId=sId;
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Student other = (Student) obj;
		return sId == other.sId;
	}


	public Student(int sId, String sName, double m1, double m2, double m3) {
		super();
		this.sId = sId;
		this.sName = sName;
		this.m1 = m1;
		this.m2 = m2;
		this.m3 = m3;
	}

	public Student(String sName) {
		super();
		this.sName=sName;
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
	public double getM1() {
		return m1;
	}
	public void setM1(double m1) {
		this.m1 = m1;
	}
	public double getM2() {
		return m2;
	}
	public void setM2(double m2) {
		this.m2 = m2;
	}
	public double getM3() {
		return m3;
	}
	public void setM3(double m3) {
		this.m3 = m3;
	}
	@Override
	public String toString() {
		return "Student [sId=" + sId + ", sName=" + sName + ", m1=" + m1 + ", m2=" + m2 + ", m3=" + m3 + "]";
	}
	
	
}
