import java.io.*;
import java.util.*;

public class palin { 
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
            int n = in.nextInt(), c = in.nextInt();
            String s = in.next();
            if (c > n/2) {
                c = n-c+1;
                s = new StringBuilder(s).reverse().toString();
            }
            int i = 0, j = n-1;
            int l = n/2, r = 0;
            int count = 0;
            while (i < j) {

                int a = s.charAt(i)-'a', b = s.charAt(j)-'a';
                if (s.charAt(i) != s.charAt(j)) {
                    l = Math.min(l, i);
                    r = Math.max(r, i);
                    if (Math.abs(a-b) <= 13) {
                        count += Math.abs(a-b);
                    } else {
                        count += 26-Math.max(a,b) + Math.min(a, b);
                    }

                }
                i++;
                j--;
            }
            c--;
            if (l ==  n/2 && r == 0) {
                out.println(0);
            }
            else if (l == r) {
                out.println(c-l + count);
            } else {

                out.println(Math.min(Math.abs((r-c)) + Math.abs((r-l)), Math.abs((c-l)) + Math.abs((r-l))) + count);

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



