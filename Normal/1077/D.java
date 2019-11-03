import java.io.*;
import java.util.*;

public class cutting { 
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
        long[] fr;
        List<Integer> sorted;
        int n, k;
        public void solve(int cs, InputReader2 in, PrintWriter out) {
           n = in.nextInt();
           k = in.nextInt();
           Set<Integer> se = new HashSet<>();
           fr = new long[1000000];
           sorted = new ArrayList<>();
           for (int i = 0; i < n; ++i) {
               int tmp = in.nextInt();
               se.add(tmp);
               fr[tmp]++;
           }
           sorted.addAll(se);
           Collections.sort(sorted, (o1, o2) -> (int)(fr[o2]-fr[o1]));
           int lo = 1, hi = 1000000, med;
           while (lo<hi) {
               med = (lo+hi+1)>>1;
               if (ok(med)) {
                   lo = med;
               } else {
                   hi = med-1;
               }
           }
           for (int i = 0; i < sorted.size(); ++i) {
               long num = fr[sorted.get(i)]/lo;
               if (num == 0)
                   break;
               if (i != 0)
                   out.print(' ');
               for (int j = 0; j < num; ++j) {
                   if (j != 0)
                       out.print(' ');
                   out.print(sorted.get(i));
               }
           }
           out.println();

        }

        boolean ok(int x) {
            int count = 0;
            for (int i = 0; i < sorted.size(); ++i) {
                if (fr[sorted.get(i)]/x == 0)
                    break;
                count+=fr[sorted.get(i)]/x;
            }
            return count >= k;
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



