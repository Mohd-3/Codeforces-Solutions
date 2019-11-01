import java.io.*;
import java.util.*;
 public class trie { 
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
        int[][] trie = new int[1000000][26];
        int[] begin = new int[1000000], end = new int[1000000];
        String[] arr = new String[1000000];
        int nodeCount = 0;
        List<Integer> temp = new ArrayList<>();
        public void solve(int cs, InputReader2 in, PrintWriter out) {
            int t = in.nextInt();
            while (t-- > 0) {
                clear();
                int n = in.nextInt();
                for (int i = 0; i < n; ++i) {
                    arr[i] = in.next();
                    temp.add(i);
                }
                Collections.sort(temp, (o1, o2) -> {
                    return arr[o1].compareTo(arr[o2]);
                });
                for (int i = 0; i < n; ++i) {
                    ins(arr[temp.get(i)], i);
                }
                int[] ans = new int[n];
                for (int i = 0; i < n; ++i) {
                   ans[temp.get(i)] = run(arr[temp.get(i)], i); 
                }
                for (int i = 0; i < n; ++i) {
                    if (i != 0) {
                        out.print(" ");
                    }
                    out.print(ans[i]);
                }
                out.println();
            }
        }
         int run(String s, int idx) {
            int currNode = 0;
            int res = 1 + Math.min(idx, end[0]-idx+1);
            for (int i = 0; i < s.length(); ++i) {
                currNode = trie[currNode][s.charAt(i)-'a'];
                res = Math.min(res, i+1+1+Math.min(idx-begin[currNode], end[currNode]-idx+1));
            }
            return res;
        }
         void ins(String s, int x) {
            int currNode = 0;
            begin[0] = 0;
            end[0] = x;
            for (int i = 0; i < s.length(); ++i) {
                if (trie[currNode][s.charAt(i)-'a'] == -1) {
                    nodeCount++;
                    trie[currNode][s.charAt(i)-'a'] = nodeCount;
                    Arrays.fill(trie[nodeCount], -1);
                    begin[nodeCount] = x;
                }
                currNode = trie[currNode][s.charAt(i)-'a'];
                end[currNode] = x;
            }
        }
         void clear() {
            Arrays.fill(trie[0], -1);
            nodeCount = 0;
            temp.clear();
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
   