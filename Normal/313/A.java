import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            String s = br.readLine();
            if (!s.substring(0, 1).equals("-"))
                out.println(s);
            else { 
                int x = Integer.parseInt(s.substring(s.length()-1));
                int y = Integer.parseInt(s.substring(s.length()-2, s.length()-1));
                if (x > y)
                    out.println(Integer.parseInt(s.substring(0, s.length()-1)));
                else
                    out.println(Integer.parseInt(s.substring(0, s.length()-2) + s.substring(s.length()-1)));
            }
            out.flush();
            out.close();
        }
    }
}

