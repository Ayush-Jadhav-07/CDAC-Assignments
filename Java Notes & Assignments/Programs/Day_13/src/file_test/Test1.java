package file_test;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

public class Test1 {
    public static void main(String[] args) {
        try (FileInputStream fis = new FileInputStream("C:\\Users\\IET\\Desktop\\j2\\Day_13\\src\\file_test\\mytxt.txt");
             FileOutputStream fout = new FileOutputStream("C:\\Users\\IET\\Desktop\\j2\\Day_13\\src\\file_test\\mycopy.txt")) {
            
            int i;
            while ((i = fis.read()) != -1) {
                fout.write(i);
            }
            System.out.println("File copied successfully from mytxt.txt to mycopy.txt");
        } catch (FileNotFoundException e) {
            System.out.println("Error: File not found - " + e.getMessage());
        } catch (IOException e) {
            System.out.println("Error: IOException occurred - " + e.getMessage());
        }
    }
}