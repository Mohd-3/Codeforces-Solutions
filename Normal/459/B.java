import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            PrintWriter out = new PrintWriter(System.out);
            int n = Integer.parseInt(br.readLine());
            long[] arr = new long[n];
            StringTokenizer st = new StringTokenizer(br.readLine());
            for (int i = 0; i < n; i++)
                arr[i] = Long.parseLong(st.nextToken());
            Arrays.sort(arr);
            long min = arr[0], max = arr[arr.length-1];
            long diff = max-min;
            int i = 0, j = arr.length-2;
            long count = 0;
            if (diff == 0) {
                long ways = 0;
                long ttt = n;
                while (ttt-- > 1)
                    ways += ttt;
                out.print("0 " + (n == 2 ? "1" : ways));
            }
            else {
            out.print(diff + " ");
            if (arr.length > 2) {
                while (i < arr.length) {
                    if (arr[i++] == min)
                        count++;
                    else
                        break;
                }
                long tmp = count;
                while (j >= 0) {
                    if (arr[j--] == max)
                        count += tmp;
                    else
                        break;
                }
                out.print(count);
            }
            else
                out.print(1);
            }
            out.println();
            out.flush();
            out.close();
        }
    }
}


            
