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
            int n = in.nextInt(), l = in.nextInt(), r = in.nextInt(), x = in.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < n; i++)
                arr[i] = in.nextInt();
            int count = 0;
            for (int msk = 0; msk < 1<<n; msk++) {
                List<Integer> li = new ArrayList<>();
                int sum = 0;
                for (int i = 0; i < n; i++) {
                    if ((msk&(1<<i)) != 0) {
                        li.add(arr[i]);
                        sum += arr[i];
                    }
                }
                if (sum >= l && sum <= r) {
                    Collections.sort(li);
                    if (li.get(li.size()-1) - li.get(0) >= x)
                        count++;
                }
            }
            out.println(count);
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
            }
            catch (IOException e) {
                throw new RuntimeException(e);
            }
        }
    }
}
