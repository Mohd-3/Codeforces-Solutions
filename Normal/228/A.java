import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            Set<Integer> se = new HashSet<>();
            StringTokenizer st = new StringTokenizer(br.readLine());
            for (int i = 0; i < 4; i++)
                se.add(Integer.parseInt(st.nextToken()));
            out.println(4-se.size());
            out.flush();
            out.close();
        }
    }
}