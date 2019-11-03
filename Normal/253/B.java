import java.io.*;
import java.util.*;

public class Main {

    static int[][] dp;
    public static void main (String[] args) throws IOException
	{
		try (BufferedReader br = new BufferedReader(new FileReader(new File("input.txt")))) {
			PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter(new File("output.txt"))));
			int n = Integer.parseInt(br.readLine());
			int[] arr = new int[n];
			StringTokenizer st = new StringTokenizer(br.readLine());
			for (int i = 0; i < n; i++) {
				arr[i] = Integer.parseInt(st.nextToken());
			}
			Arrays.sort(arr);
			dp = new int[n+1][n+1];
			for (int[] d : dp)
				Arrays.fill(d, -1);
			out.println(check(arr, 0, n-1));
			out.flush();
			out.close();
		}
	}
	
	public static int check(int[] arr, int i, int j) {
		if (i >= j) {
			return 0;
		}
		if (arr[j] == arr[i]*2) {
			return 0;
		}
		if (dp[i][j] != -1) {
			return dp[i][j];
		}
		return dp [i][j] = 1 + Math.min(check(arr, i+1, j), check(arr, i, j-1));
	}
}