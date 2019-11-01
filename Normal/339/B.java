import java.util.*;
import java.io.*;

public class Main
{
	public static void main (String[] args) throws IOException
	{
		try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			PrintWriter out = new PrintWriter(System.out);
			StringTokenizer st = new StringTokenizer(br.readLine());
			int n = Integer.parseInt(st.nextToken());
			int k = Integer.parseInt(st.nextToken());
			st = new StringTokenizer(br.readLine());
			long count = 0;
			int pos = 1;
			for (int i = 0; i < k; i++) {
				int tmp = Integer.parseInt(st.nextToken());
				while (pos != tmp) {
					if (pos < tmp) {
					
						count += tmp-pos;
							pos = tmp;
					}
					else {
						count += n-pos;
						count += tmp;
						pos = tmp;
					}
				}
			}
			out.println(count);
			out.flush();
			out.close();
		}
	}
}