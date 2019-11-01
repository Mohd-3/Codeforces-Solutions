import java.io.*;
import java.util.*;
 public class monsters { 
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
                int n = in.nextInt();
                factors = new HashMap<>();
                long count =0;
                while (n-- > 0) {
                    factorize(in.nextInt());
                }
                for (Map.Entry<Integer, Integer> ent : factors.entrySet()) {
                    count += (long)(Math.ceil(ent.getValue()/3.0));
                }
                 out.println(count);
                            }
        }
         static class Pair {
            int n, c;
             public Pair(int n, int c) {
                this.n = n;
                this.c = c;
            }
        }
         HashMap<Integer, Integer> factors;
        void factorize(int n) {
            for (int i = 2; i*i <= n; ++i) {
                int power = 0;
                while (n%i==0) {
                    n/=i;
                    ++power;
                }
                if (power > 0) {
                    //.factors.add(new Pair(i, power));
                    factors.put(i, factors.getOrDefault(i, 0)+1);
                }
             }
            if (n > 1) {
                //factors.add(new Pair(n, 1));
                factors.put(n, factors.getOrDefault(n, 0)+1);
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
    