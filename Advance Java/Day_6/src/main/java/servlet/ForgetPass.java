package servlet;

import java.io.IOException;
import java.io.PrintWriter;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import beans.MyUsers;

import service.ForgetService;
import service.ForgetServiceImpl;

public class ForgetPass extends HttpServlet {
	public void doPost(HttpServletRequest req, HttpServletResponse resp) throws IOException, ServletException {
		resp.setContentType("text/html");
		PrintWriter out = resp.getWriter();
		String email= req.getParameter("mail");
		int id = Integer.parseInt(req.getParameter("id"));
		String dob = req.getParameter("dob");
		LocalDate ldt = LocalDate.parse(dob,DateTimeFormatter.ofPattern("dd-MM-yyyy"));

		ForgetService fservice= new ForgetServiceImpl();
		MyUsers user = fservice.check(id,email,ldt);
		if (user!=null) {
			RequestDispatcher rd = req.getRequestDispatcher("changePass.html");
			rd.forward(req, resp);	
		}
		else {
			out.println("<h2>Invalid Information</h2>");
//			System.out.println("Invalid Information");
			RequestDispatcher rd = req.getRequestDispatcher("forget.html");
			rd.forward(req, resp);
		}
	}
}
