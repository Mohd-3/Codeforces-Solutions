import java.io.*;
import java.util.*;
import java.lang.*;

public class Main {
    public static void main(String[] args) {
        InputStream input = System.in;
        OutputStream output = System.out;
        PrintWriter out = new PrintWriter(output);
        InputReader in = new InputReader(input);
        Solution s = new Solution();
        s.solve(1, in, out);
        out.close();

    }

    static class Solution {
        static int n;
        public void solve(int cs, InputReader in, PrintWriter out) {
            n = in.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < n; i++)
                arr[i] = in.nextInt();
            for (int i = 0; i < n; i++) {
                if ((arr[i] & 1) == 0)
                            arr[i]--;
            }
            out.print(arr[0]);
            for (int i = 1; i < n; i++)
                out.print(" " + arr[i]);
            out.println();

        }

    }

    static class InputReader {
        BufferedReader br;
        StringTokenizer st;

        public InputReader(InputStream i) {
            br = new BufferedReader(new InputStreamReader(i));
            st = null;
        }

        public String next() {
            while (st == null || !st.hasMoreTokens()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
            }
            return st.nextToken();
        }

        public int nextInt() {
            return Integer.parseInt(next());
        }
        public double nextDouble() {
            return Integer.parseInt(next());
        }
        public long nextLong() {
            return Long.parseLong(next());
        }
    }
}
