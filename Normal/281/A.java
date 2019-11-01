import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            String s = br.readLine();
            out.println(s.substring(0, 1).toUpperCase() + s.substring(1));
            out.flush();
            out.close();
        }
    }
}