import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            String s = br.readLine();
            String p = "[a-z]*h[a-z]*e[a-z]*l[a-z]*l[a-z]*o[a-z]*";
            out.println(s.matches(p) ? "YES" : "NO");
            out.flush();
            out.close();
        }
    }
}
