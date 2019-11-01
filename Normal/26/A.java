import java.io.*;
import java.util.*;

public class Main {
	static int[] cnt;
	static boolean[] non;
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			PrintWriter out = new PrintWriter(System.out);
			int n = Integer.parseInt(br.readLine());
			cnt = new int[n+1];
			sieve1(n+1);
			int count = 0;
			for (int x : cnt)
				if (x == 2)
					count++;
			out.println(count);
			out.flush();
			out.close();
		}
	}
	
	public static void sieve1(int n) {
		cnt[0] = cnt[1] = 1;
		for (int i = 2; i < n; i++) {
			if (cnt[i] == 0) {
				for (int j = i+i; j < n; j+=i) {
					cnt[j]++;
				}
			}
		}
	}
}