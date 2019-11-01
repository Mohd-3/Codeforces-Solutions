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
        
        double EPS = 0.0000001;
        int n, m, starti, startj;
        public void solve(int cs, InputReader in, PrintWriter out) {
            int[] a = {0, 1, 2, 3};
            Map<Integer, Character> map = new HashMap<>();
            map.put(0, 'R');
            map.put(1, 'L');
            map.put(2, 'U');
            map.put(3, 'D');
            n = in.nextInt();
            m = in.nextInt();
            char[][] grid = new char[n][m];
            for (int i = 0; i < n; i++) {
                grid[i] = in.next().toCharArray();
                for (int j = 0; j < m; j++) {
                    if (grid[i][j] == 'S') {
                        starti = i;
                        startj = j;
                    }
                }
                
            }
            String dir = in.next();
            int count = 0;
            if (check(grid, map, a, dir))
                count++;
            while (next_perm(a)) {
                if (check(grid, map, a, dir))
                    count++;
            }
            out.println(count);
        }
        boolean isValid(int i, int j) {
            return i >= 0 && j >= 0 && i < n && j < m;
        }

        boolean check(char[][] grid, Map<Integer, Character> map, int[] a, String dir) {
            int i = starti, j = startj;
            for (int k = 0; k < dir.length(); k++) {
                int dd = a[dir.charAt(k)-'0'];
                char c = map.get(dd);
                if (c == 'R')
                    j++;
                else if (c == 'L')
                    j--;
                else if (c == 'U')
                    i--;
                else if (c == 'D')
                    i++;
                if (!isValid(i, j) || grid[i][j] == '#')
                    return false;
                if (grid[i][j] == 'E')
                    return true;
            
            }
            return false;
        }
                    
                
            
        boolean next_perm(int a[]) {
            for (int i = a.length-2, j; i>= 0; i--) {
                if (a[i+1] > a[i]) {
                    for (j = a.length-1; a[j] <= a[i]; j--);
                    swap(a, i, j);
                    for (j = 1; j <= (a.length-i)/2; j++)
                        swap(a, i+j, a.length-j);
                    return true;
                }
            }
            return false;
        }

        void swap(int[] a, int i, int j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
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


