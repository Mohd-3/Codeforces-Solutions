import java.io.*;
import java.util.*;

public class Main { 
    public static void main(String[] args) throws IOException { 
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            int n = Integer.parseInt(br.readLine());
            int[] arr = new int[n];
            StringTokenizer st = new StringTokenizer(br.readLine());
            int sum = 0;
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(st.nextToken());
                sum += arr[i];
            }
            Arrays.sort(arr);
            int x = arr[n-1];
            sum -= arr[n-1];
            int coins = 1;
            int i = n-2;
            while (x <= sum) {
                x += arr[i];
                sum -= arr[i--];
                coins++;
            }
            System.out.println(coins);
        }
    }
}
            

