import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            Set<Integer> se = new HashSet<>();
            int[] arr = new int[4];
            for (int i = 0; i < 4; i++)
                arr[i] = Integer.parseInt(br.readLine());
            int max = Integer.parseInt(br.readLine());
            for (Integer d : arr) {
                int tmp = d;
                while (tmp <= max) {
                    se.add(tmp);
                    tmp += d;
                }
            }
            out.println(se.size());
            out.flush();
            out.close();
        }
    }
}
