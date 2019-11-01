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
            int k = in.nextInt();
            String s = in.next();
            int sum = 0;
            int[] arr = new int[s.length()];
            for (int i = 0; i < s.length(); i++) {
                int x = s.charAt(i)-'0';
                arr[i] = x;
                sum += x;
            }
            Arrays.sort(arr);
            int count = 0;
            int i = 0;
            while (sum < k) {
               sum -= arr[i++];
               sum += 9;
               count++;
            }
            out.println(count);
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
