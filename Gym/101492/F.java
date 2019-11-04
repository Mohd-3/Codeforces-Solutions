import java.io.*;
import java.util.*;
import java.lang.*;
 public class Main {
    public static void main(String[] args) {
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
            int r = in.nextInt();
            int[] rad = new int[10];
            int[] p = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
            for (int i = 0; i < 10; i++) {
                rad[i] = r*(i+1);
            }
            int[] dx = new int[3];
            int[] dy = new int[3];
            for (int i = 0; i < 3; i++) {
                dx[i] = in.nextInt();
                dy[i] = in.nextInt();
            }
            long sum = 0;
            for (int i = 0; i < 3; i++) {
               for (int j = 0; j < 10; j++) {
                   if (dx[i] >= -rad[j] && dx[i] <= rad[j] && dy[i] >= -rad[j] && dy[i] <= rad[j]) {
                       sum += p[j];
                       break;
                   }
               }
             }
            out.println(sum);
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
     }
 }