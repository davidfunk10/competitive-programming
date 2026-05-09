import java.io.*;
import java.util.StringTokenizer;

public class BlockGame {
	public static void main(String[] args) throws IOException {
		BufferedReader r = new BufferedReader(new FileReader("blocks.in"));
		PrintWriter pw = new PrintWriter(new FileWriter("blocks.out"));

		StringTokenizer st = new StringTokenizer(r.readLine());
		int n = Integer.parseInt(st.nextToken());
		
		int[] total = new int[26];

        for(int i=0; i<n; i++)
        {
            st = new StringTokenizer(r.readLine());
            String w1 = st.nextToken();
            String w2 = st.nextToken();

            int[] c1 = new int[26];
            int[] c2 = new int[26];

            for(int k=0; k<w1.length(); k++)
            {
                char c = w1.charAt(k);
                int index = c-'a';
                c1[index]++; 
            }
            
            for(int k=0; k<w2.length(); k++)
            {
                char c = w2.charAt(k);
                int index = c-'a';
                c2[index]++; 
            }

            for(int z=0; z<26; z++)
            {
                int max = Math.max(c1[z],c2[z]);
                total[z]+=max;
            }
        }


        for(int i=0; i<26; i++)
        {
            pw.println(total[i]);
        }
		pw.close();
	}
}
