// Source: https://usaco.guide/general/io

import java.io.*;
import java.util.StringTokenizer;

public class CoinPiles {
	public static void main(String[] args) throws IOException {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);

		StringTokenizer st = new StringTokenizer(r.readLine());
		int n = Integer.parseInt(st.nextToken());
		
        for(int i=0; i<n; i++)
        {
            st = new StringTokenizer(r.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            boolean cond1 = (a+b)%3==0;
            boolean cond2 = Math.max(a,b) <= 2 * Math.min(a,b);
        if (cond1&&cond2)
        {
            pw.println("YES");
        }
        else
        {
            pw.println("NO");
        }

        }
        
		
		pw.close();
	}
}
