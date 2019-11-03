import java.io.*;
import java.util.*;

public class C {
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
        int M = 1000000007;
        public void solve(int cs, InputReader in, PrintWriter out) {
            long[] power = new long[100001];
            int n = in.nextInt(), q = in.nextInt();
            for (int i = 0; i < 100001; ++i) {
                power[i] = fastPow(2, i)%M;
            }
            for (int i = 1; i < 100001; ++i) {
                power[i] = (power[i]%M + power[i-1]%M)%M;
            }
            String s = in.next();
            int[] arr = new int[n];
            for (int i = 0; i < n; ++i) {
                if (s.charAt(i) == '0') {
                    arr[i] = 1;
                }
            }
            for (int i = 1; i < n; ++i) {
                arr[i] += arr[i-1];
            }
            while (q-- > 0) {
                int l = in.nextInt()-1, r = in.nextInt()-1;
                int zeros = arr[r]- (l != 0 ? arr[l-1] : 0);
                int p = (r+1)-(l+1);
                long ans = 0;
                ans = (power[p])%M;
                out.println(ans-zeros);
            }

        }
        long fastPow(long n, int p) {
            if (p == 0)
                return 1;
            long ret = fastPow(n, p>>1)%M;
            return (p&1) == 1 ? (((ret%M)*(ret%M))%M)*n : ((ret%M)*(ret%M))%M;
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

