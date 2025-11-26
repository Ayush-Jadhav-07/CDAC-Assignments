package dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.time.LocalDate;

import beans.MyUsers;

public class ForgetDaoImpl implements ForgetDao {
	static Connection conn=null;
	static PreparedStatement match, change;
	static {
		try {
			conn=DBUtil.getMyConnection();
			match=conn.prepareStatement("select id, email, dob from users where Id=? and dob=?");
			change=conn.prepareStatement("update users set password=? where id=?");
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	@Override
	public MyUsers verify(int id, String email, LocalDate ldt) {
		try {
			match.setInt(1, id);
			match.setDate(2,java.sql.Date.valueOf(ldt));
			ResultSet rs = match.executeQuery();
			if(rs.next()) {
				MyUsers user = new MyUsers(rs.getInt(1), rs.getString(2), rs.getDate(3).toLocalDate());
				return user;
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return null;
	}

}
