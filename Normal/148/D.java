import java.io.*;
import java.util.*;

public class Main {
    static double[][][] dp;
    public static void main(String[] args) throws IOException {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            StringTokenizer st = new StringTokenizer(br.readLine());
            int w = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            dp = new double[2][b+1][w+1];
            for (double[][] dd : dp)
                for (double[] d : dd)
                    Arrays.fill(d, -1);
            out.printf("%.9f%n", solve(0, b, w));
            out.flush();
            out.close();
        }
    }

    static double solve(int t, int b, int w) {
        if (w <= 0)
            return 0;
        if (b <= 0)
            return t == 0 ? 1 : 0;
        if (dp[t][b][w] != -1)
            return dp[t][b][w];
        if (t == 0)
            return  dp[t][b][w] = (1.0*w/(w+b)) + (1.0*b/(w+b))* solve(1, b-1, w);
        return dp[t][b][w] = 1.0*b/(w+b) * 1.0*w/(w+b-1) * solve(0, b-1, w-1) + (b >= 2 ? 1.0*b/(w+b) * 1.0*(b-1)/(w+b-1) * solve(0, b-2, w) : 0);

    }
}
