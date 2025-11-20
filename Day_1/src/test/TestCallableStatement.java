package test;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

import java.sql.CallableStatement;

public class TestCallableStatement {

	public static void main(String[] args) {
		Connection conn=null;
		
		try {
			DriverManager.registerDriver(new com.mysql.cj.jdbc.Driver());
			
			String url ="jdbc:mysql://192.168.10.117:3306/dac14?useSSL=false";
			
			conn=DriverManager.getConnection(url,"dac14","welcome");
			CallableStatement cst=conn.prepareCall("call getcnt(?,?)");
			cst.setInt(1, 500);
			cst.registerOutParameter(2, java.sql.Types.INTEGER);
			cst.execute();
			int n = cst.getInt(2);
			System.out.println("Count : "+n);
			
			
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}finally {
			try {
				conn.close();
			}catch (SQLException e) {
				e.printStackTrace();
			}
		}
	}

}
