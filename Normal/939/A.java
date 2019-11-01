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

        static int[] arr;
        static int n;
        public void solve(InputReader in, PrintWriter out) {
            n = in.nextInt();
            arr = new int[n];
            for (int i = 0; i < n; i++)
                arr[i] = in.nextInt();
            boolean found = false;
            for (int i = 0; i < n; i++) {
                int tmp = arr[i]-1;
                tmp = arr[tmp]-1;
                tmp = arr[tmp]-1;
                if (tmp == i) {
                    found = true;
                    break;
                }
            }
            out.println(found ? "YES" : "NO");

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
