import java.io.*;
import java.util.*;
import java.lang.*;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStream input = System.in;
        OutputStream output = System.out;
        Reader in = new Reader();
        PrintWriter out = new PrintWriter(new BufferedWriter(new OutputStreamWriter(output)));
        Solution s = new Solution();
        s.solve(1, in, out);
        out.close();
    }

    static class Solution {


        int[] arr;
        int[][] dp;
        int n;
        public void solve(int cs, Reader in, PrintWriter out) throws IOException {
            n = in.nextInt();
            arr = new int[n];
            dp = new int[n+1][n+1];
            for (int[] d : dp)
                Arrays.fill(d, -1);
            for (int i = 0; i < n; i++)
                arr[i] = in.nextInt();
            out.println(sol(0, n-1));

        }
        int sol(int i, int j) {
            if (i > j || i == n || j < 0)
                return 0;
            if (dp[i][j] != -1)
                return dp[i][j];
            int count = 0;
            for (int x = 0; x < n; x++) {
                if (x >= i && x <= j)
                    count += arr[x] ^ 1;
                else
                    count += arr[x];
            }

            return dp[i][j] = Math.max(count, Math.max(sol(i+1, j), sol(i, j-1)));
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

    static class Reader {
        final private int BUFFER_SIZE = 1 << 16;
        private DataInputStream din;
        private byte[] buffer;
        private int bufferPointer, bytesRead;
        public Reader(){
            din=new DataInputStream(System.in);
            buffer=new byte[BUFFER_SIZE]; bufferPointer=bytesRead=0;
        }
        public Reader(String file_name) throws IOException{
            din=new DataInputStream(new FileInputStream(file_name));
            buffer=new byte[BUFFER_SIZE];
            bufferPointer=bytesRead=0;
        }
        public String readLine() throws IOException{
            byte[] buf=new byte[1001]; // line length
            int cnt=0,c;
            while((c=read())!=-1){
                if(c=='\n')
                    break;
                buf[cnt++]=(byte)c;
            }
            return new String(buf,0,cnt);
        }
        public int nextInt() throws IOException{
            int ret=0;
            byte c=read();
            while(c<=' ')c=read();
            boolean neg=(c=='-');
            if(neg)c=read();
            do{
                ret=ret*10+c-'0';
            }
            while((c=read())>='0'&&c<='9');
            if(neg)
                return -ret;
            return ret;
        }
        public long nextLong() throws IOException{
            long ret=0;
            byte c=read();
            while(c<=' ')
                c=read();
            boolean neg=(c=='-');
            if(neg)c=read();
            do{
                ret=ret*10+c-'0';
            }
            while((c=read())>='0'&&c<='9');
            if(neg)
                return -ret;
            return ret;
        }
        public double nextDouble() throws IOException{
            double ret=0,div=1;
            byte c=read();
            while(c<=' ')
                c=read();
            boolean neg=(c=='-');
            if(neg)
                c = read();
            do {
                ret=ret*10+c-'0';
            }
            while((c=read())>='0'&&c<='9');
            if(c=='.')
                while((c=read())>='0'&&c<='9')
                    ret+=(c-'0')/(div*=10);
            if(neg)
                return -ret;
            return ret;
        }
        private void fillBuffer() throws IOException{
            bytesRead=din.read(buffer,bufferPointer=0,BUFFER_SIZE);
            if(bytesRead==-1)
                buffer[0]=-1;
        }
        private byte read() throws IOException{
            if(bufferPointer==bytesRead)
                fillBuffer();
            return buffer[bufferPointer++];
        }
        public void close() throws IOException{
            if(din==null)
                return;
            din.close();
        }
    }

}
