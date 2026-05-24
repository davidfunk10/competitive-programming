// Source: https://usaco.guide/general/io

import java.io.*;
import java.util.StringTokenizer;

public class TrailingZeros {
	public static void main(String[] args) throws IOException {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);

		StringTokenizer st = new StringTokenizer(r.readLine());
		int n = Integer.parseInt(st.nextToken());
		
        
        int trailing = 0;
        
        while(n>=5)
        {
            trailing += n/5;
            n/=5;
        }

        pw.print(trailing);
		pw.close();
	}
}
