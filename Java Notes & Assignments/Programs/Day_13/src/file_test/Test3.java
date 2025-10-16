package file_test;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class Test3 {

	public static void main(String[] args) {
		try(FileInputStream fis=new FileInputStream("C:\\Users\\IET\\Desktop\\j2\\Day_13\\src\\file_test\\mytxt.txt");
				FileOutputStream fout=new FileOutputStream("C:\\Users\\IET\\Desktop\\j2\\Day_13\\src\\file_test\\mycopy.txt");){
			int i=fis.read();
			
			while(i!=-1) {
				fout.write(i);
				i=fis.read();
		}
			
		}
		catch (IOException e) {
			System.out.println(e.getMessage());
		}
	}
}
