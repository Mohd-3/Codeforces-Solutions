import java.util.*;
import java.io.*;

public class Main
{
	static int n, m;
	static int[] arr;
	static int[][] dp;
	public static void main (String[] args) throws IOException  
	{
		try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			PrintWriter out = new PrintWriter(System.out);
			StringTokenizer st = new StringTokenizer(br.readLine());
			n = Integer.parseInt(st.nextToken());
			m = Integer.parseInt(st.nextToken());
			arr = new int[n];
			dp = new int[n+1][m+1];
			for (int[] d : dp)
				Arrays.fill(d, -1);
			for (int i = 0; i < n; i++) {
				st = new StringTokenizer(br.readLine());
				arr[i] = Integer.parseInt(st.nextToken());
				
			}
			out.println(check(0, 0));
			out.flush();
			out.close();
			
		}
	}
	public static int check(int i, int prev) {
		if (i == n)
			return 0;
		if (dp[i][prev] != -1)
			return dp[i][prev];
		if (arr[i] < prev)
			return dp[i][prev] = 1+check(i+1, prev);
		return dp[i][prev] = Math.min(1+check(i+1, prev), check(i+1, arr[i]));
	}
}