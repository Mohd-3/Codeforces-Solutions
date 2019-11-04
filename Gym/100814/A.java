import java.io.*;
import java.util.*;
 public class arcade { 
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
                char[] arr = in.next().toCharArray();
                int n = 1;
                for (int x = 1; x <= arr.length; ++x) {
                    n *= x;
                }
                double chance = 0.0;
                int i = 0;
                while (next_perm(arr)) {
                    i++;
                }
                if (i == 1) {
                    chance = 1.0/n;
                }
                else if (i > 1) {
                    chance = Math.pow((n+1), i-1)/Math.pow(n, i);
                }
                out.printf("%.9f%n", chance);
            }
         }
        boolean next_perm(char a[]) {
            for (int i = a.length-2, j; i>= 0; i--) {
                if (a[i+1] > a[i]) {
                    for (j = a.length-1; a[j] <= a[i]; j--);
                    swap(a, i, j);
                    for (j = 1; j <= (a.length-i)/2; j++)
                        swap(a, i+j, a.length-j);
                    return true;
                }
            }
            return false;
        }
         void swap(char[] a, int i, int j) {
            char temp = a[i];
            a[i] = a[j];
            a[j] = temp;
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
   