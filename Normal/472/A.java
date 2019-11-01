import java.io.*;
import java.util.*;

public class Main {
    static boolean[] primes = new boolean[1000002];
    public static void main(String[] args) throws IOException {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            Arrays.fill(primes, true);
            sieve(1000001);
            int n = Integer.parseInt(br.readLine());
            for (int i = 4; i < n; i+=2) {
                int tmp = n-i;
                if (!primes[tmp]) {
                    out.println(i + " " + tmp);
                    break;
                }
            }
            out.flush();
            out.close();
        }
    }
    static void sieve(int n) {
        for (int i = 2; i*i <= n; i++) {
            if (primes[i]) {
                for (int j = i*i; j <= n; j+=i) {
                    primes[j] = false;
                }
            }
        }

    }
}
