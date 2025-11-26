package service;

import beans.MyUsers;
import dao.ChangeDao;
import dao.ChangeDaoImpl;

public class ChangeServiceImpl implements ChangeService {
	ChangeDao cdao;

	public ChangeServiceImpl() {
		cdao = new ChangeDaoImpl();
	}

	@Override
	public boolean add(MyUsers u) {
		return cdao.save(u);
	}

}
