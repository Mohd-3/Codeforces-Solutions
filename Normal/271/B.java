import java.io.*;
import java.util.*;

public class primeMatrix {
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
       
        double EPS = 0.0000001;
        int[] com;
        public void solve(int cs, InputReader in, PrintWriter out) {
            sieve(1000000);
            int n = in.nextInt(), m = in.nextInt();
            int[][] grid = new int[n][m];
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    grid[i][j] = in.nextInt();
                }
            }
            int min = (int)1e9;
            for (int i = 0; i < n; ++i) {
                int minR = 0;
                for (int j = 0; j < m; ++j) {
                    int tmp = grid[i][j];
                    int minTemp = (int)1e9;
                    while (com[tmp] == 1 && tmp < 1000000) {
                        tmp++;
                    }
                    if (tmp < 1000000 && com[tmp] == 0)
                        minTemp = Math.min(minTemp, tmp-grid[i][j]);
                    minR += minTemp;
                }
                min = Math.min(min, minR);
            }
            int min2 = (int)1e9;
            for (int j = 0; j < m; ++j) {
                int minC = 0;
                for (int i = 0; i < n; ++i) {
                    int tmp = grid[i][j];
                    int minTemp = (int)1e9;
                    while (com[tmp] == 1 && tmp < 1000000) {
                        tmp++;
                    }
                    if (tmp < 1000000 && com[tmp] == 0)
                        minTemp = Math.min(minTemp, tmp-grid[i][j]);
                    minC += minTemp;
                }
                min2 = Math.min(min2, minC);
            }
            out.println(Math.min(min, min2));

        }

        void sieve(int n) {
            com = new int[n+1];
            com[0] = com[1] = 1;
            for (int i = 2; i*i <= n; ++i) {
                if (com[i] == 0) {
                    for (int j = i*i; j <= n; j+=i) {
                        com[j] = 1;
                    }
                }
            }
        }
    }

    static class InputReader {
        private InputStream stream;
        private byte[] buf = new byte[1024];
        private int curChar;
        private int numChars;

        public InputReader(InputStream stream) {
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

