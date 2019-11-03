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

            int n = in.nextInt(), m = in.nextInt(), k = in.nextInt();
            String[] words = new String[n];
            Map<String,Integer> map = new HashMap<>();
            for (int i = 0; i < n; i++) {
                String s = in.next();
                words[i] = s;
                map.put(s, i);
            }
            long[] cost = new long[n];
            for (int i = 0; i < n; i++)
                cost[i] = in.nextLong();
            for (int i = 0; i < m; i++) {
                int z = in.nextInt();
                if (z > 1) {
                    List<Integer> li = new ArrayList<>();
                    Long min = Long.MAX_VALUE;
                    while (z-- > 0) {
                        int tmp = in.nextInt()-1;
                        min = Math.min(min, cost[tmp]);
                        li.add(tmp);
                    }
                    for (Integer d : li)
                        cost[d] = min;
                }
                else if (z == 1) {
                    in.nextInt();
                }
            }
            String[] message = new String[k];
            for (int i = 0; i < k; i++)
                message[i] = in.next();
            int sum = 0;
            for (String ss : message) {
                sum += cost[map.get(ss)];
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
