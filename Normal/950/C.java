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
        s.solve(in, out);
        out.close();
    }

    static class Solution {

        public void solve(InputReader in, PrintWriter out) {
           String s = in.next();
           List<List<Integer>> li = new ArrayList<>();
           boolean[] vis = new boolean[s.length()];
           for (int i = 0; i < s.length(); ++i) {
               if (vis[i] || s.charAt(i) == '1')
                   continue;
               List<Integer> tmp = new ArrayList<>();
               int d = (int)s.charAt(i);
               int chk = d;
               vis[i] = true;
               tmp.add(i+1);
               for (int j = i+1; j< s.length(); ++j) {
                   if (vis[j])
                       continue;
                   int d2 = (int)s.charAt(j);
                   if (d2 == (d^1)) {
                       tmp.add(j+1);
                       d = d2;
                       vis[j] = true;
                   }
                   if (tmp.size() == 3) {
                       li.add(tmp);
                       break;
                   }

               }
               if (tmp.size() < 3 && chk == 48)
                   li.add(Arrays.asList((i+1)));
           }
           if (li.size() == 0)
               out.println(-1);
           else {
               out.println(li.size());
               for (List<Integer> l : li) {
                   out.print(l.size());
                   for (int i = 0; i < l.size(); i++) {
                       out.print(" " + l.get(i));
                   }
                   out.println();
               }
           }

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
                }
                catch (IOException e) {
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
            }
            catch (IOException e) {
                throw new RuntimeException(e);
            }
        }
    }

}
