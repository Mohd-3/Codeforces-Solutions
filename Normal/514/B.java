import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
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
            int n = in.nextInt();
            double x = in.nextDouble(), y = in.nextDouble();
            Set<Double> se = new HashSet<>();
            Point[] arr = new Point[n];
            for (int i = 0; i < n; ++i) {
               arr[i] = new Point(in.nextDouble(), in.nextDouble()); 
            }
            for (int i = 0; i < n; ++i) {
                if (arr[i] == null)
                    continue;
                double x1 = arr[i].x, y1 = arr[i].y; 
                for (int j = i+1; j < n; ++j) {
                    if (arr[j] == null)
                        continue;
                    if ((x1-x) * (arr[j].y-y) == (arr[j].x-x)*(y1-y)) {
                        arr[j] = null;
                    }
                }
            }
            int count = 0;
            for (int i = 0; i < n; ++i)
                if (arr[i] != null)
                    count++;
            out.println(count);

        }
    }

    static class Point {
        double x, y;
        
        public Point(double x, double y) {
            this.x = x;
            this.y = y;
        }
    }

    static class InputReader {
        BufferedReader br;
        StringTokenizer st;
        
        public InputReader(InputStream s) {
            br = new BufferedReader(new InputStreamReader(s));
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

        public double nextDouble() {
            return Double.parseDouble(next());
        }

        public long nextLong() {
            return Long.parseLong(next());
        }

    }
}
