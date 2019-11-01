import java.util.*;
import java.io.*;
import java.util.stream.Collectors;

public class Main
{
	public static void main (String[] args) throws IOException
	{
		try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
			PrintWriter out = new PrintWriter(System.out);
			int n = Integer.parseInt(br.readLine());
			Map<String, Integer> m = new HashMap<>();
			while (n-- > 0) {
				String s = br.readLine();
				if (m.containsKey(s))
					m.put(s, m.get(s)+1);
				else 
					m.put(s, 1);
			}
			out.println(m.values().stream().max(Integer::compare).get());
			out.flush();
			out.close();
		}
	}
}