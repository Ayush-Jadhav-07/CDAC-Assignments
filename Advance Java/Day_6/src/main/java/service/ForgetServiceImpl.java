package service;

import java.time.LocalDate;

import beans.MyUsers;
import dao.ForgetDao;
import dao.ForgetDaoImpl;

public class ForgetServiceImpl implements ForgetService {
	ForgetDao fdao;
	
	

	public ForgetServiceImpl() {
		super();
		fdao = new ForgetDaoImpl();
	}


	@Override
	public MyUsers check(int id, String email, LocalDate ldt) {
		return fdao.verify(id,email,ldt);
	}

}
