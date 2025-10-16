package file_test;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

public class Test2 {
public static void main(String [] args) {
	FileInputStream fis=null;
	FileOutputStream fout=null;
	
	try {
		fis=new FileInputStream("C:\\Users\\IET\\Desktop\\j2\\Day_13\\src\\file_test\\mytxt.txt");
		fout=new FileOutputStream("C:\\Users\\IET\\Desktop\\j2\\Day_13\\src\\file_test\\mycopy.txt");
		
		int i=fis.read();
		while(i!=-1) {
			fout.write(i);
			i=fis.read();
		}
		
	}catch(FileNotFoundException e) {
		System.out.println("File does not exist");
	}
	catch (IOException e) {
		System.out.println(e.getMessage());
	}
	finally {
		try {
			fis.close();
			fout.close();
		}catch (IOException e) {
			e.printStackTrace();
			
		}
	}
	
}
}
