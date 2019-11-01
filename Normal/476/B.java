import java.io.*;
import java.util.*;

public class Main {
    static String s1, s2;
    static int got = 0, miss = 0, rec = 0;
    static double[][] dp = new double[20][100];
    public static void main(String[] args) throws IOException {
       PrintWriter out = new PrintWriter(System.out);
       myScanner in = new myScanner();
       s1 = in.next();
       s2 = in.next();
       for (double[] d : dp)
           Arrays.fill(d, -1);
       for (int i = 0; i < s1.length(); i++)
           got += s1.charAt(i) == '+' ? 1 : -1;
       for (int i = 0; i < s2.length(); i++) {
           if (s2.charAt(i) == '?')
               miss++;
           else
               rec += s2.charAt(i) == '+' ? 1 : -1;
       }
       out.printf("%.9f%n", solve(miss, rec));
       out.flush();
       out.close();
    }
    static double solve(int m, int r) {
        if (m == 0)
            return r == got ? 1 : 0;
        if (dp[m][r+20] != -1)
            return dp[m][r+20];
        return dp[m][r+20] = 0.5*solve(m-1, r+1) + 0.5 * solve(m-1, r-1);

    }
}

class myScanner {
    BufferedReader br;
    StringTokenizer st;
    public myScanner() {
        br = new BufferedReader(new InputStreamReader(System.in));
    }
    public myScanner(FileReader s) throws FileNotFoundException {
        br = new BufferedReader(s);
    }
    public String next() throws IOException {
        while (st == null || !st.hasMoreTokens())
            st = new StringTokenizer(br.readLine());
        return st.nextToken();
    }
    public int nextInt() throws IOException {
        return Integer.parseInt(next());
    }
    public double nextDouble() throws IOException {
        return Double.parseDouble(next());
    }
    public long nextLong() throws IOException {
        return Long.parseLong(next());
    }
    public boolean ready() throws IOException {
        return br.ready();
    }
    public void close() throws IOException {
        br.close();
    }
}

