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
            int t = in.nextInt();
            while (t-- > 0) {
                int n = in.nextInt(), k = in.nextInt();
                int sum = 0;
                List<List<Integer>> li = new ArrayList<>();
                for (int i = 0; i < n; ++i) {
                    li.add(new ArrayList<>());
                    for (int j = 0; j < 3; ++j)
                        li.get(i).add(in.nextInt());
                    Collections.sort(li.get(i));
                }
                List<Integer> ans = new ArrayList<>();
                for (int i = 0; i < n; ++i) {
                    for (int j = 0; j < 2; ++j) {
                        ans.add(li.get(i).get(j));
                    }
                }
                Collections.sort(ans);
                for (int i = 0; i < k; ++i)
                    sum += ans.get(i);
                out.println(sum);
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