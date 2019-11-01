import java.io.*;
import java.util.*;

public class Main {
    static int n, t;
    static double p;
    static double[][] dp;
    public static void main(String[] args) throws IOException {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            StringTokenizer st = new StringTokenizer(br.readLine());

            n = Integer.parseInt(st.nextToken());
            p = Double.parseDouble(st.nextToken());
            t = Integer.parseInt(st.nextToken());
            dp = new double[t+1][n+1];
            for (double[] d : dp)
                Arrays.fill(d, -1);
            out.printf("%.6f%n", solve(0, 0));
            out.flush();
            out.close();
        }
    }
    static double solve(int i, int pep) {
        if (i == t)
            return pep;
        if (pep == n)
            return pep;
        if (dp[i][pep] != -1)
            return dp[i][pep];
        return dp[i][pep] = p * solve(i+1, pep+1) + (1-p)*solve(i+1, pep);

    }
}
