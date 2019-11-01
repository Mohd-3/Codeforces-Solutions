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
           String s1 = in.next(), s2 = in.next();
           int[] f1 = new int[26];
           for (int i = 0; i < s1.length(); ++i)
               f1[s1.charAt(i)-'a']++;
           int[] f2 = new int[26];
           for (int i = 0; i < s2.length(); ++i)
               f2[s2.charAt(i)-'a']++;
           int count = 0;
           for (int i = 0; i < s2.length(); ++i) {
               if (f1[s2.charAt(i)-'a'] >= f2[s2.charAt(i)-'a']) {
                   count++;
                   f1[s2.charAt(i)-'a']--;
                   f2[s2.charAt(i)-'a']--;
               }
               else if (f1[s2.charAt(i)-'a'] != 0){ 
                   count += f1[s2.charAt(i)-'a'];
                   f1[s2.charAt(i)-'a'] = 0;
               }
               else {
                   if (!s1.contains(String.valueOf(s2.charAt(i)))) {
                       count = -2;
                       break;

                   }
               }
           }
           out.println(count > 0 ? count : -1);

        }
    }

    static class Point {
        double x, y;
        
        public Point(double x, double y) {
            this.x = x;
            this.y = y;
        }
    }

    static class InputReader {
        BufferedReader br;
        StringTokenizer st;
        
        public InputReader(InputStream s) {
            br = new BufferedReader(new InputStreamReader(s));
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

        public double nextDouble() {
            return Double.parseDouble(next());
        }

        public long nextLong() {
            return Long.parseLong(next());
        }

    }
}

