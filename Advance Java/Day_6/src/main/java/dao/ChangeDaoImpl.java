package dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;

import beans.MyUsers;

public class ChangeDaoImpl implements ChangeDao {
	static Connection conn=null;
	static PreparedStatement change;
	static {
		try {
			conn=DBUtil.getMyConnection();
			change=conn.prepareStatement("update users set password=? where id=?");
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	@Override
	public boolean save(MyUsers u) {
		try {
			change.setString(1, u.getPassword());
			change.setInt(2, u.getId());
			
			int n=change.executeUpdate();
			return n>0;
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		return false;
	}

}
