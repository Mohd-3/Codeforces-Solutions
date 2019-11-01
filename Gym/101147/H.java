import java.io.*;
import java.util.*;
 public class commandos { 
    public static void main(String[] args) throws IOException { 
        InputStream input = new FileInputStream("commandos.in");
        OutputStream output = System.out;
        InputReader2 in = new InputReader2(input);
        PrintWriter out = new PrintWriter(output);
        Solution s = new Solution();
        s.solve(1, in, out);
        out.close();
    }
     static class Solution { 
                double EPS = 0.0000001;
        int t, n;
        int[][][] map;
        int[][][] dp = new int[10][10][10];
        public void solve(int cs, InputReader2 in, PrintWriter out) {
            t = in.nextInt();
            while (t-- > 0) {
                n = in.nextInt();
                map = new int[10][10][10];
                for (int[][] dd : dp)
                    for (int[] d : dd)
                        Arrays.fill(d, -1);
                while (n-- > 0) {
                    int f = in.nextInt()-1, x = in.nextInt()-1, y = in.nextInt()-1, h = in.nextInt();
                    map[f][y][x] = h;
                }
                out.println(sol(9, 0, 0));
            }
         }
         int sol(int f, int x, int y) {
            if (x == 10 || y == 10 || f < 0)
                return 0;
            if (dp[f][x][y] != -1)
                return dp[f][x][y];
            return dp[f][x][y] = map[f][x][y] + Math.max(sol(f-1, x, y), Math.max(sol(f, x+1, y), sol(f, x, y+1)));
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
   