import java.io.*;
import java.util.*;

public class Main { 
    static int k, n;
    static int[] a, b;
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            n = Integer.parseInt(st.nextToken());
            k = Integer.parseInt(st.nextToken());
            a = new int[n];
            b = new int[n];
            st = new StringTokenizer(br.readLine());
            for (int i = 0; i < n; i++)
                a[i] = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine());
            for (int i = 0; i < n; i++)
                b[i] = Integer.parseInt(st.nextToken());

            System.out.println(binarySearch());
        }
    }
    public static long binarySearch() {
        long lo = 0, hi = 10000000005L, med;
        while (lo<hi) {
            med = (hi+lo+1)/2;
            if (ok(med))
                lo = med;
            else
                hi = med-1;
        }
        return lo;
    }

    public static boolean ok(long med) {
        long tmp = k;
        for (int i = 0; i <n; i++) {
            long needed = med * a[i];
            if (b[i] >= needed)
                continue;
            else {
                if (needed - b[i] <= tmp)
                    tmp -= needed-b[i];
                else
                    return false;
            }
        }
        return true;
    }
}

            

