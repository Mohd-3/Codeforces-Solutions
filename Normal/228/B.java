import java.io.*;
import java.util.*;

public class twotables { 
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
        public void solve(int cs, InputReader2 in, PrintWriter out) {
            int n = in.nextInt(), m = in.nextInt();
            int[][] arr = new int[n][m];
            for (int i = 0; i < n; ++i) {
                String tmp = in.next();
                for (int j = 0; j < m; ++j) {
                    arr[i][j] = tmp.charAt(j) == '0' ? 0 : 1;
                }
            }
            int n2 = in.nextInt(), m2 = in.nextInt();
            int[][] arr2 = new int[n2][m2];
            for (int i = 0; i < n2; ++i) {
                String tmp = in.next();
                for (int j = 0; j < m2; ++j) {
                    arr2[i][j] = tmp.charAt(j) == '0' ? 0 : 1;
                }
            }
            long best = -1;
            int idx1 = 0, idx2 = 0;
            for (int x = -50; x <= 50; ++x) {
                for (int y = -50; y <= 50; ++y) {
                    long current = 0;
                    for (int i = 0; i < n; ++i) {
                        for (int j = 0; j < m; ++j) {
                            if (i+x < 0 || i+x >= n2 || j+y < 0 || j+y >= m2)
                                continue;
                            current += arr[i][j]*arr2[i+x][j+y];
                            
                        }
                    }
                    if (current > best) {
                        best = current;
                        idx1 =x;
                        idx2 = y;
                    }
                }
            }
            out.println(idx1 + " " + idx2);
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



