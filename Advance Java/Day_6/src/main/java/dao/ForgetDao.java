package dao;

import java.time.LocalDate;

import beans.MyUsers;

public interface ForgetDao {

	MyUsers verify(int id, String email, LocalDate ldt);


}
