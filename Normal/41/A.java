import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            String s1 = br.readLine();
            String s2 = new StringBuilder(br.readLine()).reverse().toString();
            out.println(s1.equals(s2) ? "YES" : "NO");
            out.flush();
            out.close();
        }
    }
}

