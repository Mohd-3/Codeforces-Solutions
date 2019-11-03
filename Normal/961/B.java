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
        s.solve(1, in, out);
        out.close();
    }

    static class Solution {

        public void solve(int cs, InputReader in, PrintWriter out) {

            int n = in.nextInt(), k = in.nextInt();
            int[] lec = new int[n];
            int[] beh = new int[n];
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                lec[i] = in.nextInt();
            }
            for (int i = 0; i < n; i++) {
                beh[i] = in.nextInt();
            }
            for (int i = 0; i < n; i++) {
                arr[i] = beh[i] == 0 ? lec[i] : 0;
            }
            for (int i = 1; i < n; i++) {
                arr[i] = arr[i]+arr[i-1];
            }
            int max = 0;
            for (int i = k-1; i < n; i++) {
               if (i-k<= 0) {
                   max = arr[i];
               }
               else {
                   max = Math.max(max, arr[i]-arr[i-k]);
               }
            }
            for (int i = 0; i < n; i++) {
                if (beh[i] == 1)
                    max += lec[i];
            }
            out.println(max);

        }


    }

    static class InputReader {
        BufferedReader br;
        StringTokenizer st;

        public InputReader(InputStream i) {
            br = new BufferedReader(new InputStreamReader(i), 32768);
            st = null;
        }

        public InputReader(FileReader s) {
            br = new BufferedReader(s);
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

        public long nextLong() {
            return Long.parseLong(next());
        }

        public double nextDouble() {
            return Double.parseDouble(next());
        }

        public String nextLine() {
            try {
                return br.readLine();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        }

    }

}
