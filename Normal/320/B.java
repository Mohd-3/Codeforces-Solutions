import java.io.*;
import java.util.*;

public class ping { 
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
        int[] vis;
        List<Pair> li;
        int n;
        public void solve(int cs, InputReader2 in, PrintWriter out) {
            n = in.nextInt();
            li = new ArrayList<>();
            vis = new int[n];
            int n2 = n;
            while (n2--> 0) {
                int op = in.nextInt(), a = in.nextInt(), b = in.nextInt();
                if (op == 1) {
                    li.add(new Pair(a, b));
                } else {
                    a--;
                    b--;
                    Arrays.fill(vis, 0);
                    dfs(a);
                    if (vis[b] == 1) {
                        out.println("YES");
                    } else {
                        out.println("NO");
                    }
                }
            }
        }
        void dfs(int src) {
            vis[src] = 1;
            Pair start = li.get(src);
            for (int i = 0; i < li.size(); ++i) {
                if (i == src || vis[i] == 1)
                    continue;
                Pair end = li.get(i);
                if ((start.x < end.y && start.x > end.x) || (start.y > end.x && start.y < end.y)) {
                    dfs(i);
                }
            }
        }

        static class Pair {
            int x, y;
            public Pair(int x, int y) {
                this.x = x;
                this.y = y;
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



