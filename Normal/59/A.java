import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            String s = br.readLine();
            int c = 0, l = 0;
            for (int i = 0; i < s.length(); i++) {
                if (Character.isLowerCase(s.charAt(i)))
                    l++;
                else
                    c++;
            }
            out.println(c > l ? s.toUpperCase() : s.toLowerCase());
            out.flush();
            out.close();
        }
    }
}
        
