import java.io.*;
import java.util.*;

public class A {
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
        public void solve(int cs, InputReader in, PrintWriter out) {
            int n = in.nextInt();
            Integer[] arr = new Integer[n];
            for (int i =0; i < n; ++i)
                arr[i] = in.nextInt();
            if (arr.length == 1 || (arr.length == 2 && arr[0] == arr[1])) {
                out.println(-1);
                return;
            }
            for (int msk = 1; msk < (1<<n); ++msk) {
                int a = 0, b = 0;
                int count = 0;
                int[] sol = new int[n];
                for (int i = 0; i < n; ++i) {
                    if ((msk&(1<<i)) != 0) {
                        a += arr[i];
                        count++;
                        sol[i] = 1;
                    } else {
                        b += arr[i];
                    }
                }
                if (b != 0 && a != b) {
                    out.println(count);
                    for (int i = 0; i < n; ++i) {
                        if (sol[i] == 1) {
                            out.print(i+1 + " ");
                        }
                    }
                    out.println();
                    return;
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
