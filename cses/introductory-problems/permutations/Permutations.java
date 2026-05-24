import java.io.*;
import java.util.StringTokenizer;

public class Permutations {
	public static void main(String[] args) throws IOException {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);

		StringTokenizer st = new StringTokenizer(r.readLine());



		int n = Integer.parseInt(st.nextToken());
		
        if(n!=2 && n!=3)
        {

            for(int i=2; i<=n; i+=2)
            {
                pw.print(i+" ");
            }

            for(int i =1; i<=n; i+=2)
            {
                pw.print(i+" ");
            }

        }
        else{

            pw.print("NO SOLUTION");
        }
            
            


		pw.close();
	}
}
