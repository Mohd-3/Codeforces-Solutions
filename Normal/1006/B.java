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
        static int n;
        public void solve(int cs, InputReader in, PrintWriter out) {
            n = in.nextInt();
            int k = in.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < n; i++)
                arr[i] = in.nextInt();
            Arrays.sort(arr);
            int j = n-1;
            int total = 0;
            List<List<Integer>> li = new ArrayList<>();
            while (k-- > 0) {
               List<Integer> tmp = new ArrayList<>();
               tmp.add(arr[j]);
               li.add(tmp);
               total += arr[j--];
            }
            while (j >= 0) {
                for (List<Integer> l : li) {
                    if (j < 0)
                        break;
                    l.add(arr[j--]);
                }
            }
            out.println(total);
            for (List<Integer> l : li)
                out.print(l.size() + " ");
            out.println();

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
