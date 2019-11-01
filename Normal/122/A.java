import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            int n = Integer.parseInt(br.readLine());
            out.println(check(n) ? "YES" : "NO");
            out.flush();
            out.close();
        }
    }
    public static boolean check(int n) { 
        if (isLucky(n))
            return true;
        for (int i = 1; i*i <= n; i++) {
            if (n % i == 0 && (isLucky(i) || isLucky(n/i)))
                return true;
        }
        return false;
    }

    public static boolean isLucky(int n) {
        while (n > 0) { 
            if (n%10 != 7 && n%10 != 4)
                return false;
            n /= 10;
        }
        return true;
    }
}

