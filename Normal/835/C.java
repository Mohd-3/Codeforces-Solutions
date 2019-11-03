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
            int n = in.nextInt(), q = in.nextInt(), c = in.nextInt();
            star[] arr = new star[n];
            for (int i = 0; i < n; i++) {
                arr[i] = new star(in.nextInt(), in.nextInt(), in.nextInt());
            }
            while (q-- > 0) {
                int t = in.nextInt(), x1 = in.nextInt(), y1 = in.nextInt(), x2 = in.nextInt(), y2 = in.nextInt();
                int sum = 0;
                for (star s : arr)  {
                    if (s.x >= x1 && s.y >= y1 && s.x <= x2 && s.y <= y2) {
                        sum += (s.s+t) % (c+1);
                        }
                    }

                out.println(sum);
                }
            }


        }
        static class star {
            int x, y, s;
            public star(int x, int y, int s) {
                this.x = x;
                this.y= y;
                this.s = s;
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
