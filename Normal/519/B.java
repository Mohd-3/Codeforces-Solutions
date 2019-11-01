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
        public void solve(int cs, InputReader in, PrintWriter out) {
            int n = in.nextInt();
            long a = 0, b = 0, c = 0;
            for (int i = 0; i < n; i++)
                a += in.nextLong();
            for (int i = 0; i < n-1; i++)
                b += in.nextLong();
            for (int i = 0; i < n-2; i++)
                c += in.nextLong();
            out.println(a-b);
            out.println(b-c);

        }
    }

    static class InputReader { 
        BufferedReader br;
        StringTokenizer st;
        
        public InputReader(InputStream i) {
            br = new BufferedReader(new InputStreamReader(i), 32768);
            st = null;
        }

        public InputReader(FileReader s) {
            br = new BufferedReader(s);
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
    }
}


