package test;
import java.util.InputMismatchException;
import java.util.Scanner;

	public class TestException {

		private static int Divide(int x,int y) {
			return x/y;
		}
		
		public static void main(String[] args) {
			Scanner sc=new Scanner(System.in);
			try {
			System.out.println("Enter Number1");
			int num1=sc.nextInt();
			System.out.println("Enter Number2");
			int num2=sc.nextInt();
			
			int ans= Divide(num1,num2);
			System.out.println("The answer = "+ans);
			
			}
			catch(InputMismatchException | ArithmeticException| ArrayIndexOutOfBoundsException e) {
				System.out.println("Enter valid Number");
			}
			catch(Exception e) {
				System.out.println("Error occured");
				System.out.println(e.getMessage());
			} 
			finally{
				System.out.println("in finally block");
			}
			
		}
			

}
