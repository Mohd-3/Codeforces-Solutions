import java.io.*;
import java.util.*;
import java.lang.*;

public class Main {
    public static void main(String[] args) {
        InputStream input = System.in;
        OutputStream output = System.out;
        PrintWriter out = new PrintWriter(output);
        InputReader in = new InputReader(input);
        Solution s = new Solution();
        s.solve(1, in, out);
        out.close();

    }

    static class Solution {

        public void solve(int cs, InputReader in, PrintWriter out) {
            int t = in.nextInt();
            while (t-- > 0) {
                int n = in.nextInt();
                String s = in.next();
                int i = 0, j = n-1;
                boolean good = true;
                while (i < j) {
                    if (s.charAt(i) != s.charAt(j)) {
                        if ((s.charAt(i) == 'a' && s.charAt(j) == 'z') || (s.charAt(i) == 'z' && s.charAt(j) == 'a') ||
                                (s.charAt(i) == 'a' && s.charAt(j) != 'c' && s.charAt(j) != 'a') ||
                                (s.charAt(i) == 'z' && s.charAt(j) != 'z' && s.charAt(j) != 'x') ||
                                (s.charAt(j) == 'a' && s.charAt(i) != 'c' && s.charAt(i) != 'a') ||
                                (s.charAt(j) == 'z' && s.charAt(i) != 'z' && s.charAt(i) != 'x')) {
                            good = false;
                            break;
                        }
                        else if ((s.charAt(i)+1 != s.charAt(j)+1) && (s.charAt(i)+1 != s.charAt(j)-1) &&
                                (s.charAt(i)-1 != s.charAt(j)+1) && (s.charAt(i)-1 != s.charAt(j)-1)) {
                            good = false;
                            break;
                        }
                    }
                    i++;
                    j--;

                }
                out.println(good ? "YES" : "NO");
            }
       }
    }

    static class InputReader {
        BufferedReader br;
        StringTokenizer st;

        public InputReader(InputStream i) {
            br = new BufferedReader(new InputStreamReader(i));
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
        public double nextDouble() {
            return Integer.parseInt(next());
        }
        public long nextLong() {
            return Long.parseLong(next());
        }
    }
}
