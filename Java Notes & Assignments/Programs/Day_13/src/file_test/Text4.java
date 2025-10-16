package file_test;

import java.io.FileOutputStream;
import java.io.IOException;
import java.io.FileInputStream;
import java.io.File;
import java.io.FileNotFoundException;

public class Text4 {

	public static void main(String[] args) {
		 File f=new File("myfilecopy.txt");
		 FileOutputStream fos=null;

		 try {
		 if(f.exists()) {	 
			  fos=new FileOutputStream("C:\\Users\\IET\\Desktop\\j2\\Day_13\\src\\file_test\\mycopy.txt",true);
		 }
		 else {
				 fos=new FileOutputStream("C:\\Users\\IET\\Desktop\\j2\\Day_13\\src\\file_test\\mycopy.txt");
			}

	}catch (FileNotFoundException e) {
		e.printStackTrace();
	}
		 try (FileInputStream fis=new FileInputStream("C:\\Users\\IET\\Desktop\\j2\\Day_13\\src\\file_test\\mytxt.txt");
				 FileOutputStream fos1=fos;){
				
				int i=fis.read();
				
				while(i!=-1) {
					fos1.write(i);
					i=fis.read();
				}
				
			}catch (IOException e) {
				System.out.println(e.getMessage());
			}


}
}
