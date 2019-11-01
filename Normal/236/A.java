import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            String name = br.readLine();
            Set<Character> se = new HashSet<>();
            for (int i = 0; i < name.length(); i++)
                se.add(name.charAt(i));
            out.println(se.size()%2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
            out.flush();
            out.close();
        }
    }
}


