import java.io.*;
import java.util.*;

public class easyNumber {
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
       
        public void solve(int cs, InputReader in, PrintWriter out) {
            int M = 1073741824;
            int a = in.nextInt(), b = in.nextInt(), c = in.nextInt();
            int sum =0;
            countDivisors(1000000);
            for (int i = 1; i <= a; ++i) {
                for (int j = 1; j <= b; ++j) {
                    for (int k = 1; k <= c; ++k) {
                        sum = (sum%M + numberOfDivisors[i*j*k]%M)%M;
                    }
                }
            }
            out.println(sum%M);

        }
        int[] numberOfDivisors;
        void countDivisors(int n) {
            numberOfDivisors = new int[n+1];
            numberOfDivisors[0] = numberOfDivisors[1] = 1;
            for (int i = 2; i*i <= n; ++i) {
                if (numberOfDivisors[i] == 0) {
                    for (int j = i; j <= n; j+=i) {
                        int e = 0;
                        int q = j;
                        while (q%i == 0) {
                            ++e;
                            q/=i;
                        }
                        if (numberOfDivisors[j] != 0)
                            numberOfDivisors[j]*=(e+1);
                        else
                            numberOfDivisors[j] = e+1;
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

