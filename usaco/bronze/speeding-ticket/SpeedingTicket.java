import java.io.*;
import java.util.StringTokenizer;

public class SpeedingTicket {
	public static void main(String[] args) throws IOException {
		BufferedReader r = new BufferedReader(new FileReader("speeding.in"));
		PrintWriter pw = new PrintWriter(new FileWriter("speeding.out"));

		StringTokenizer st = new StringTokenizer(r.readLine());
		int N = Integer.parseInt(st.nextToken());
		int M = Integer.parseInt(st.nextToken());

        int[] speed = new int[100]; 
        int[] limit = new int[100];

        int mileTracker1 = 0;
        int mileTracker2 = 0;


        for(int i=0; i<N; i++)
        {
            st = new StringTokenizer(r.readLine());
            int miles = Integer.parseInt(st.nextToken());
            int sl = Integer.parseInt(st.nextToken());
            
            for(int j=0; j<miles; j++)
            {
                limit[j+mileTracker1] = sl;
            }
            mileTracker1 +=miles; 
        }

        
        for(int i=0; i<M; i++)
        {
            st = new StringTokenizer(r.readLine());
            int miles = Integer.parseInt(st.nextToken());
            int bs = Integer.parseInt(st.nextToken());
            
            for(int j=0; j<miles; j++)
            {
                speed[j+mileTracker2] = bs;
            }
            mileTracker2 +=miles; 
        }

        int maxDif = 0; 

        for(int i=0; i<100; i++)
        {
            if(speed[i]-limit[i]>maxDif)
                maxDif = speed[i]-limit[i];
        }


		
		pw.print(maxDif);
		
		pw.close();
	}
}
