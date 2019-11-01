import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            int n = Integer.parseInt(br.readLine());
            boolean found = false;
            for (int i = 2; i < n; i++) {
                if (n % i == 0 && (n/i)%2 == 0) {
                    found = true;
                    break;
                }
            }
            out.println(found ? "YES" : "NO");
            out.flush();
            out.close();
        }
    }
}