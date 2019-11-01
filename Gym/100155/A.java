import java.io.*;
import java.util.*;
 public class A { 
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
            int t = in.nextInt();
            while (t-- > 0) {
                int c = in.nextInt(), v = in.nextInt();
                int[] carr = new int[c];
                int[][] votes = new int[v][c];
                int max = 0;
                for (int i = 0; i < v; ++i) {
                    for (int j = 0; j < c; ++j) {
                        int tmp = in.nextInt()-1;
                        if (j == 0) {
                            carr[tmp]++;
                            max = Math.max(carr[tmp], max);
                        }
                        votes[i][j] = tmp;
                    }
                }
                            int idx1 = -1, idx2 = -1;
                for (int i = 0; i < c; ++i) {
                    if (carr[i] == max) {
                        if (idx1 == -1) {
                            idx1 = i;
                        } else {
                            idx2 = i;
                        }
                    }
                }
                if (idx2 == -1) {
                    out.println((idx1+1) + " 1");
                } else {
                    for (int i = 0; i < v; ++i) {
                        if (votes[i][0] != idx1 && votes[i][0] != idx2) {
                            for (int j = 1; j < c; ++j) {
                                if (votes[i][j] == idx1 || votes[i][j] == idx2) {
                                    carr[votes[i][j]]++;
                                    break;
                                }
                            }
                        }
                    }
                    max = 0;
                    for (int i = 0; i < c; ++i) {
                        if (carr[i] > max) {
                            max = carr[i];
                            idx1 = i;
                        }
                    }
                    out.println((idx1+1) + " 2");
                }
             }
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
         public long nextLong() {
            int c = read();
            while (isSpaceChar(c)) {
                c = read();
            }
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = read();
            }
            long res = 0; // long or int
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
   