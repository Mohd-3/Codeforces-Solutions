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
           long n = in.nextInt();
           if ((n*(n+1))/2 % 2 == 0) {
               String[] arr = new String[(int)n];
               int i = 0, j = (int)n-1;
               long sumA = 0, sumB = 0;
               while (i <= j) {
                   if (i%2 == 0) {
                       sumA += i+1;
                       sumA += j+1;
                       arr[i++] = "+";
                       arr[j--] = "+";
                    }
                   else {
                       sumB += i+1;
                       sumB += j+1;
                       arr[i++] = "-";
                       arr[j--] = "-";
                   }
               }
               if (sumA == sumB) {
                   for (String c : arr)
                       out.print(c);
                   out.println();
               }
               else
                   out.println(-1);
            }
           else
               out.println(-1);
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