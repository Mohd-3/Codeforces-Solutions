import java.io.*;
import java.util.*;
import java.lang.*;

public class Main {
    public static void main(String[] args) {
        InputStream input = System.in;
        OutputStream output = System.out;
        InputReader in = new InputReader(input);
        PrintWriter out = new PrintWriter(output);
        Solution s = new Solution();
        s.solve(in, out);
        out.close();
    }

    static class Solution {

        static int n, m;
        static int[] a1, a2;
        public void solve(InputReader in, PrintWriter out) {
            n = in.nextInt();
            m = in.nextInt();
            a1 = new int[n];
            a2 = new int[m];
            for (int i = 0; i < n; i++)
                a1[i] = in.nextInt();
            for (int i = 0; i < m; i++)
                a2[i] = in.nextInt();
            out.println(count(0, 0, 0, 0)-1);
        }
        int count(int i, int j, int sum1, int sum2) {
            if (i == n) {
                if (j < m && sum2 < sum1) {
                   return count(i, j+1, sum1, sum2+a2[j]);
                }
                if (sum1 == sum2)
                    return 1;
                return 0;
            }
            if (j == m) {
                if (i < n && sum1 < sum2) {
                    return count(i+1, j, sum1+a1[i], sum2);
                }
                if (sum1 == sum2)
                    return 1;
                return 0;
            }
            if (sum1 == sum2) {
                return 1 + count(i+1, j+1, a1[i], a2[j]);

            }
            if (sum1 < sum2) {
                return count(i+1, j, sum1+a1[i], sum2);
            }

            return count(i, j+1, sum1, sum2+a2[j]);
        }
    }

    static class InputReader {
        BufferedReader br;
        StringTokenizer st;
        public InputReader(InputStream i) {
            br = new BufferedReader(new InputStreamReader(i), 32768);
            st = null;
        }
        public String next() {
            while (st == null || !st.hasMoreTokens()) {
                try {
                    st = new StringTokenizer(br.readLine());
                }
                catch (IOException e) {
                    throw new RuntimeException(e);
                }
            }
            return st.nextToken();
        }
        public int nextInt() {
            return Integer.parseInt(next());
        }
        public long nextLong() {
            return Long.parseLong(next());
        }
        public double nextDouble() {
            return Double.parseDouble(next());
        }
        public String nextLine() {
            try {
                return br.readLine();
            }
            catch (IOException e) {
                throw new RuntimeException(e);
            }
        }
    }

}
