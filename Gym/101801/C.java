import java.io.*;
import java.util.*;
 public class tv { 
    public static void main(String[] args) { 
        InputStream input = System.in;
        OutputStream output = System.out;
        InputReader2 in = new InputReader2(input);
        PrintWriter out = new PrintWriter(output);
        Solution s = new Solution();
        s.solve(1, in, out);
        out.close();
    }
     static class Solution { 
                double EPS = 0.0000001;
        int k;
        public void solve(int cs, InputReader2 in, PrintWriter out) {
            int t = in.nextInt();
            while (t-- > 0) {
                int n = in.nextInt(), m = in.nextInt();
                k = in.nextInt();
                int[][] grid = new int[n][m];
                int[][] zero = new int[n+1][m+1], one = new int[n+1][m+1];
                for (int i = 0; i < n; ++i) {
                    for (int j = 0; j < m; ++j) {
                        grid[i][j] = in.nextInt();
                        if (grid[i][j] == 1) {
                            one[i][j] =1;
                        } else {
                            zero[i][j] = 1;
                        }
                    }
                }
                out.println(min(n, m, zero, one));
            }
         }
        long min(int n, int m, int[][] arr, int[][] one) {
            long bestSum = 0;
            long maxArea = 0;
            for (int i = 1; i <= n; ++i) {
                for (int j = 1; j <= m; ++j) {
                    arr[i][j] += arr[i-1][j];
                    one[i][j] += one[i-1][j];
                }
            }
            for (int top = 1; top <= n; ++top) {
                for (int btm = top; btm <= n; ++btm) {
                    long sumOne = 0, sumZero = 0;
                    for (int i = 1; i <= m; ++i) {
                        sumZero += arr[btm][i] - arr[top-1][i];
                        sumOne += one[btm][i] - one[top-1][i];
                        if (sumZero > bestSum && sumOne <= k) {
                            if ((btm-(top-1)+1)*i > maxArea) {
                                bestSum = sumZero;
                                maxArea = (btm-(top-1)+1)*i;
                            }
                                                    }
                      }
                }
            }
            return maxArea;
        }
      }
    static class InputReader2 {
        private InputStream stream;
        private byte[] buf = new byte[1024];
        private int curChar;
        private int numChars;
         public InputReader2(InputStream stream) {
            this.stream = stream;
        }
         public int read() {
            if (numChars == -1) {
                throw new RuntimeException();
            }
            if (curChar >= numChars) {
                curChar = 0;
                try {
                    numChars = stream.read(buf);
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
                if (numChars <= 0) {
                    return -1;
                }
            }
            return buf[curChar++];
        }
         public int nextInt() {
            int c = read();
            while (isSpaceChar(c)) {
                c = read();
            }
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = read();
            }
            int res = 0; // long or int
            do {
                if (c < '0' || c > '9') {
                    throw new RuntimeException();
                }
                res *= 10;
                res += c - '0';
                c = read();
            } while (!isSpaceChar(c));
            return res * sgn;
        }
         public double nextDouble() {
            int c = read();
            while (isSpaceChar(c)) {
                c = read();
            }
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = read();
            }
            double res = 0, div = 1;
            do {
               res *= 10;
               res += c - '0';
               c = read();
            } while (c >= '0' && c <= '9');
            if (c == '.') {
                while ((c = read()) >= '0' && c <= '9') {
                    res += (c - '0') / (div *= 10);
                }
            }
            return res * sgn;
        }
        public String next() {
            int c = read();
            while (isSpaceChar(c)) {
                c = read();
            }
            StringBuilder res = new StringBuilder();
            do {
                res.appendCodePoint(c);
                c = read();
            } while (!isSpaceChar(c));
            return res.toString();
        } 
        public boolean isSpaceChar(int c) {
            return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
        }
    }
}
    