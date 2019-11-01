import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
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
            long n = in.nextLong();
            int min = 1000000001;
            for(int i = 1; i<=200; i++)
            {
                int lo = 0, hi = (int)1e9;
                for(int j = 0; j<100; j++)
                {
                    int mid = (lo+hi)/2;
                    if(go(mid, i) > n)
                        hi = mid;
                    else
                        lo = mid;
                }
                //System.out.println(i + " " + lo);
                if(go(lo, i) == n && sum(lo) == i)
                    min = Math.min(min, lo);
            }
            if(min > 1e9)
                out.println(-1);
            else
                out.println(min);
        }
        long go(int x, int s)
        {
            return (long)x*(x+s);
        }
        long sum(long n)
        {
            long res = 0;
            while(n > 0)
            {
                res += n%10;
                n/=10;
            }
            return res;
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

        private int read() {
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
            int res = 0;
            do {
                if (c < '0' || c > '9')
                    throw new RuntimeException();
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
            if (c == '-' ) {
                sgn = -1;
                c = read();
            }
            long res = 0;
            do {
                if (c < '0' || c > '9' )
                    throw new RuntimeException();
                res *= 10;
                res += c - '0';
                c = read();
            } while (!isSpaceChar(c));
            return res * sgn;
        }

        public String next() {
            int c;
            do {
                c = read();
            } while (isSpaceChar(c));
            StringBuilder res = new StringBuilder();
            do {
                res.appendCodePoint(c);
                c = read();
            } while (!isSpaceChar(c));
            return res.toString();
        }

        private boolean isSpaceChar(int c) {
            return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
        }



    }
}