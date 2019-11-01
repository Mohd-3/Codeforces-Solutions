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


        public void solve(int cs, Reader in, PrintWriter out) throws IOException {

            int r = in.nextInt(), g = in.nextInt(), b = in.nextInt();
            int min = Math.min(r, Math.min(g, b));
            int r2 = r, g2 = g, b2 = b;
            int tmp = 0, tmp2= 0, tmp3 = r/3 + g/3 + b/3;
            if (r2 > 0 && g2 > 0 && b2 > 0) {
                tmp = 1;
                r2--;
                g2--;
                b2--;
                tmp += r2 / 3 + g2 / 3 + b2 / 3;
            }
            int r3 = r, b3 = b, g3 = g;
            if (r3 > 0 && b3 > 0 && g3 > 0) {
                tmp2 = 2;
                r3 -= 2;
                b3 -= 2;
                g3 -= 2;
                tmp2 += r3 / 3 + g3 / 3 + b3 / 3;
            }
            tmp = Math.max(tmp, tmp2);
            int ones = min;

            r -= min;
            g -= min;
            b -= min;
            ones += r/3 + g/3 + b/3;
            ones = Math.max(ones, tmp);
            out.println(Math.max(ones, tmp3));
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
