import java.io.*;
import java.util.*;

public class Main { 
    static long[] primes = new long[10000001];
    public static void getPrimes() { 
        Arrays.fill(primes, 0);
        primes[0] = primes[1] = 1;
        for (int i = 2; i*i < 10000000; i++) { 
            if (primes[i] == 0) {
                for (int j = i*i; j < 10000000; j+=i)
                    primes[j]++;
            }
        }
    }

    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            int n = Integer.parseInt(br.readLine());
            PrintWriter out = new PrintWriter(System.out);
            StringTokenizer st = new StringTokenizer(br.readLine());
            getPrimes();
            while (n-- > 0) {
                long num = Long.parseLong(st.nextToken());
                long sq = (long)Math.sqrt(num);
                if (sq*sq == num && primes[(int)sq] == 0)
                    out.println("YES");
                else
                    out.println("NO");
                out.flush();
            }
            out.close();
        }
    }
}
