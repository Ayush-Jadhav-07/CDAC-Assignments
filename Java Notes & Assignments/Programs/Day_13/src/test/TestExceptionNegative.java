package test;

import exception.NegativeSalaryException;
import service.MyService;

public class TestExceptionNegative {

	public static void main(String[] args) {
		MyService ms = new MyService();
		try {
			ms.acceptData();
		}catch(NegativeSalaryException e) {
			System.out.println(e.getMessage());
		}

	}

}
