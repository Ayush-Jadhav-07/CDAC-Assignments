package servlet;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import beans.MyUsers;
import service.ChangeService;
import service.ChangeServiceImpl;

public class ChangePass extends HttpServlet {
		public void doPost(HttpServletRequest req, HttpServletResponse resp) throws IOException, ServletException {
			resp.setContentType("text/html");
			PrintWriter out = resp.getWriter();
			String newPass = req.getParameter("new");
			int cId = Integer.parseInt(req.getParameter("cid"));
			
			MyUsers u = new MyUsers(newPass , cId);
			ChangeService cservice = new ChangeServiceImpl();
			boolean status = cservice.add(u);
			if(status)
			{
				out.println("<h2>Password Updated Successfully</h2>");
				RequestDispatcher rd = req.getRequestDispatcher("login.html");
				rd.include(req, resp);
			}
			else {
				out.println("<h2>Fail To Update Password</h2>");
				RequestDispatcher rd = req.getRequestDispatcher("changePass.html");
				rd.forward(req, resp);
			}
		}
}

