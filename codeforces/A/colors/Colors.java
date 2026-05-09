import java.io.*;
import java.util.StringTokenizer;

public class Colors {
	public static void main(String[] args) throws IOException {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);


		StringTokenizer st = new StringTokenizer(r.readLine());
		int n = Integer.parseInt(st.nextToken());
		

        int[] state = new int[26];

        for(int i =0; i<n; i++)
        {
            st = new StringTokenizer(r.readLine());
            String word = st.nextToken();

            char c = word.charAt(0);
            int index = c-'A';

            state[index] = 1;

        }

        int count = 0;
        for(int i=0; i<state.length; i++)
        {
            if(state[i]==1)
            {
                count++;
            }
        }

        pw.print(count);
		pw.close();
	}
}
