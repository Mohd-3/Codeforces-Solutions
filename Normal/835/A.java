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

        public void solve(InputReader in, PrintWriter out) {
            int n = in.nextInt(), v1 = in.nextInt(), v2 = in.nextInt(), t1 = in.nextInt(), t2 = in.nextInt();
            int sp1 = 0, sp2 = 0;
            sp1 = t1*2 + v1 * n;
            sp2 = t2 * 2 + v2 * n;
            out.println(sp1 == sp2 ? "Friendship" : (sp1 < sp2 ? "First" : "Second"));
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
