import java.io.*;
import java.util.*;

public class spies { 
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
            int n = in.nextInt(), m = in.nextInt(), s = in.nextInt(), f = in.nextInt();
            StringBuilder sb = new StringBuilder();
            char dir = f > s ? 'R' : 'L';
            int time = 1;
            while (m-- > 0) {
                int t = in.nextInt(), l = in.nextInt(), r = in.nextInt();
                int add = dir == 'R' ? 1 : -1;
                
                while (time < t && s != f) {
                    s += add;
                    sb.append(dir);
                    time++;
                }
                int newS = s + add;
                if (s != f) {
                    if ((s <= r && s >= l) || (newS <= r && newS >=l)) {
                        sb.append('X');
                    } else {
                        s = newS;
                        sb.append(dir);
                    }
                    time++;
                }
            }
            if (s != f) {
                int kk = Math.abs(s-f);
                while (kk-- > 0)
                    sb.append(dir);
            }
            out.println(sb.toString());

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



