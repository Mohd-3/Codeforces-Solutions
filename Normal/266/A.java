import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            int n = Integer.parseInt(br.readLine());
            String s = br.readLine();
            int count = 0;
            char last = s.charAt(0);
            for (int i = 1; i < s.length(); i++) {
                if (s.charAt(i) == last)
                    count++;
                last = s.charAt(i);
            }
            out.println(count);
            out.flush();
            out.close();
        }
    }
}

