import java.io.*;
import java.util.*;
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
            int t = in.nextInt();
            while (t-- > 0) {
                int n = in.nextInt(), q = in.nextInt();
                int[] arr = new int[n];
                HashMap<Integer, Integer> m = new HashMap<>();
                int cnt = 0;
                for (int i = 0; i < n; ++i) {
                    arr[i] = in.nextInt();
                    if (arr[i] != 0 && m.getOrDefault(arr[i], 0) == 0) {
                        cnt++;
                    }
                    if (arr[i] != 0) m.put(arr[i], m.getOrDefault(arr[i], 0)+1);
                }
                while (q-- > 0) {
                    int o = in.nextInt();
                    if (o == 2) {
                        out.println(cnt);
                    } else {
                        int p = in.nextInt()-1, v = in.nextInt();
                                        if (m.getOrDefault(arr[p], 0) == 1)
                            cnt--;
                        if (arr[p] != 0)
                            m.put(arr[p], m.get(arr[p])-1);
                        if (v != 0 && m.getOrDefault(v, 0) == 0)
                            cnt++;
                        if (v != 0)
                            m.put(v, m.getOrDefault(v, 0)+1);
                        arr[p] = v;
                    }
                }
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
         public InputReader(File f) throws IOException {
            br = new BufferedReader(new FileReader(f));
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
 