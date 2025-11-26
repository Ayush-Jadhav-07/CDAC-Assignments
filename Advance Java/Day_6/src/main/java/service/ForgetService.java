package service;

import java.time.LocalDate;

import beans.MyUsers;

public interface ForgetService {

	MyUsers check(int id, String email, LocalDate ldt);

}
