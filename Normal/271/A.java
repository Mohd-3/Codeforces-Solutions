import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            int[] arr = new int[10];
            int year = Integer.parseInt(br.readLine())+1;
            int y = year;
            while (y > 0) {
                int tmp = y%10;
                if (arr[tmp] == 0) {
                    arr[tmp]++;
                    y/=10;
                }
                else { 
                    year++;
                    y = year;
                    arr = new int[10];
                }
            }
            out.println(year);
            out.flush();
            out.close();
        }
    }
}

            
