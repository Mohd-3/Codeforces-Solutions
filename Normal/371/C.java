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
        
        double EPS = 0.0000001;
        long[] p;
        long[] got;
        long[] recipe;
        long b = 0, s = 0, c = 0, r;
        public void solve(int cs, InputReader in, PrintWriter out) {
            String rec = in.next();
            p = new long[3];
            got = new long[3];
            recipe = new long[3];
            for (int i = 0; i < rec.length(); ++i) {
                if (rec.charAt(i) == 'B')
                    recipe[0]++;
                else if (rec.charAt(i) == 'S')
                    recipe[1]++;
                else
                    recipe[2]++;
            }
            for (int i = 0; i < 3; i++)
                got[i] = in.nextLong();
            for (int i = 0; i < 3; i++)
                p[i] = in.nextLong();
            r = in.nextLong();
            long lo = 0, hi = 1000001000000L, med;
            while (lo<hi) {
                med = lo+((hi-lo+1)>>1);
                if (check(med)) {
                    lo = med;
                }
                else 
                    hi = med-1;
            }
            out.println(lo);

        }

        boolean check(long n) {
            long money = r;
            for (int i = 0; i < 3; i++) {
                long tmp = got[i];
                if (recipe[i]*n > tmp) {
                    if (money <= 0)
                        return false;
                    if ((recipe[i]*n-tmp) * p[i] > money)
                        return false;
                    money -= (recipe[i]*n-tmp) * p[i];
                }

            }
            return true;

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
            buffer=new byte[BUFFER_SIZE];
            bufferPointer=bytesRead=0;
        }

        public Reader(String file_name) throws IOException{
            din=new DataInputStream(new FileInputStream(file_name));
            buffer=new byte[BUFFER_SIZE];
            bufferPointer=bytesRead=0;
        }

        public String readLine() throws IOException{
            byte[] buf=new byte[64]; // line length
            int cnt=0,c;
            while((c=read())!=-1){
                if(c=='\n')break;
                buf[cnt++]=(byte)c;
            }
            return new String(buf,0,cnt);
        }

        public int nextInt() throws IOException{
            int ret=0;byte c=read();
            while(c<=' ')c=read();
            boolean neg=(c=='-');
            if(neg)c=read();
            do{ret=ret*10+c-'0';}while((c=read())>='0'&&c<='9');
            if(neg)return -ret;
            return ret;
        }

        public long nextLong() throws IOException{
            long ret=0;byte c=read();
            while(c<=' ')c=read();
            boolean neg=(c=='-');
            if(neg)c=read();
            do{ret=ret*10+c-'0';}while((c=read())>='0'&&c<='9');
            if(neg)return -ret;
            return ret;
        }

        public double nextDouble() throws IOException{
            double ret=0,div=1;byte c=read();
            while(c<=' ')c=read();
            boolean neg=(c=='-');
            if(neg)c = read();
            do {ret=ret*10+c-'0';}while((c=read())>='0'&&c<='9');
            if(c=='.')while((c=read())>='0'&&c<='9')
                ret+=(c-'0')/(div*=10);
            if(neg)return -ret;
            return ret;
        }

        private void fillBuffer() throws IOException{
            bytesRead=din.read(buffer,bufferPointer=0,BUFFER_SIZE);
            if(bytesRead==-1)buffer[0]=-1;
        }

        private byte read() throws IOException{
            if(bufferPointer==bytesRead)fillBuffer();
            return buffer[bufferPointer++];
        }

        public void close() throws IOException{
            if(din==null) return;
            din.close();
        }
    }
}


