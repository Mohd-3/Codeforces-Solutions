import java.io.*;
import java.util.*;

public class Main {
	static int[] cnt;
	static boolean[] non;
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			PrintWriter out = new PrintWriter(System.out);
			StringTokenizer st = new StringTokenizer(br.readLine());
			int n = Integer.parseInt(st.nextToken()), k = Integer.parseInt(st.nextToken());
			sieve1(n+1);
			int count = 0;
			for (int j = 2; j <= n; j++) {
				if (cnt[j] == 0){
					for (int i = 0; i < prm.size()-1; i++) {
						if (prm.get(i) + prm.get(i+1) + 1 == j) {
							count++;
							continue;
						}
					}
				}
			}
			out.println(count >= k ? "YES" : "NO");
			out.flush();
			out.close();
		}
	}
	static List<Integer> prm = new ArrayList<Integer>();
	public static void sieve1(int n) {
		cnt = new int[n];
		cnt[0] = cnt[1] = 1;
		for (int i = 2; i < n; i++) {
			if (cnt[i] == 0) {
				prm.add(i);
				for (int j = i*i; j < n; j+=i) {
					cnt[j]++;
				}
			}
		}
	}
}