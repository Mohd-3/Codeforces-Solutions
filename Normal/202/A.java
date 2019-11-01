import java.io.*;
import java.util.*;
import java.lang.*;

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

        public void solve(int cs, InputReader in, PrintWriter out) throws IOException {
            List<String> all = new ArrayList<>();
            String s = in.next();
            int n = s.length();
            for (int msk = 0; msk < (1<<n); ++msk) {
                String tmp = "";
                for (int i = 0; i < n; i++) {
                    if ((msk&(1<<i)) != 0)
                        tmp += s.charAt(i);
                }
                StringBuilder sb = new StringBuilder(tmp);
                if (tmp.equals(sb.reverse().toString()))
                    all.add(tmp);
            }
            Collections.sort(all, Collections.reverseOrder());
            out.println(all.get(0));

        }
    }

    static class InputReader {
        BufferedReader br;
        StringTokenizer st;

        public InputReader(InputStream i) {
            br = new BufferedReader(new InputStreamReader(i), 32768);
            st = null;
        }

        public String next() {
            while (st == null || !st.hasMoreTokens()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
            }
            return st.nextToken();
        }

        public int nextInt() {
            return Integer.parseInt(next());
        }

        public long nextLong() {
            return Long.parseLong(next());
        }

        public double nextDouble() {
            return Double.parseDouble(next());
        }

        public String nextLine() {
            try {
                return br.readLine();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        }
        public boolean ready() throws IOException {
            return br.ready();

        }

    }

}
