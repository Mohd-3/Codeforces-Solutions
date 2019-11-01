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

        static int n;
        static char[] arr;
        static int[] dp;
        public void solve(InputReader in, PrintWriter out) {
            n = in.nextInt();
            arr = in.next().toCharArray();
            dp = new int[n];
            Arrays.fill(dp, -1);
            boolean bad = false;
            if (n == 1)
                bad = true;
            int q = 0;
            if (arr[0] == '?')
                q++;
            for (int i = 1; i < n; i++) {
                if (arr[i] != '?' && arr[i] == arr[i - 1]) {
                    bad = true;
                    break;
                }
                else if (arr[i] == '?')
                    q++;
            }
            if (q == n)
                bad = true;
            if (bad) {
                if ((n == 1 && arr[0] == '?') || n == q)
                    out.println("Yes");
                else
                    out.println("No");

            }

            else {
                int cnt = count(0, arr);
                out.println(cnt >= 2 ? "Yes" : "No");

            }


        }
        int count(int i, char[] ar) {
            if (i == n)
                return 1;
            if (dp[i] != -1)
                return dp[i];
            if (ar[i] != '?')
                return dp[i] = count(i+1, ar);
            if (i == 0) {
                int ret = 0;
                if (ar[i+1] != 'C') {
                    char cc = ar[i];
                    ar[i] = 'C';
                    ret += count(i+1, ar);
                    ar[i] = cc;
                }
                if (ar[i+1] != 'M') {
                    char cc = ar[i];
                    ar[i] = 'M';
                    ret += count(i+1, ar);
                    ar[i] = cc;
                }
                if (ar[i+1] != 'Y') {
                    char cc = ar[i];
                    ar[i] = 'Y';
                    ret += count(i+1, ar);
                    ar[i] = cc;
                }
                return dp[i] = ret;
            }
            if (i == n-1) {
                int ret = 0;
                if (ar[i - 1] != 'C') {
                    char cc = ar[i];
                    ar[i] = 'C';
                    ret += count(i + 1, ar);
                    ar[i] = cc;
                } if (ar[i - 1] != 'M') {
                    char cc = ar[i];
                    ar[i] = 'M';
                    ret += count(i + 1, ar);
                    ar[i] = cc;
                } if (ar[i - 1] != 'Y') {
                    char cc = ar[i];
                    ar[i] = 'Y';
                    ret += count(i + 1, ar);
                    ar[i] = cc;
                }
                return dp[i] = ret;
            }
            int ret = 0;
            if (ar[i-1] != 'C' && ar[i+1] != 'C') {
                char cc = ar[i];
                ar[i] = 'C';
                ret += count(i+1, ar);
                ar[i] = cc;
            }
            if (ar[i-1] != 'M' && ar[i+1] != 'M') {
                char cc = ar[i];
                ar[i] = 'M';
                ret += count(i+1, ar);
                ar[i] = cc;
            }
            if (ar[i-1] != 'Y' && ar[i+1] != 'Y') {
                char cc = ar[i];
                ar[i] = 'Y';
                ret += count(i + 1, ar);
                ar[i] = cc;
            }
            return dp[i] = ret;
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
