import java.io.*;
import java.util.StringTokenizer;

public class MixingMilk {
	public static void main(String[] args) throws IOException {
		BufferedReader r = new BufferedReader(new FileReader("mixmilk.in"));
		PrintWriter pw = new PrintWriter(new FileWriter("mixmilk.out"));

		StringTokenizer st = new StringTokenizer(r.readLine());
		int ac = Integer.parseInt(st.nextToken());
		int a = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(r.readLine());
		int bc = Integer.parseInt(st.nextToken());
		int b = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(r.readLine());
		int cc = Integer.parseInt(st.nextToken());
		int c = Integer.parseInt(st.nextToken());



        int[] cap = new int[3];


        cap[0] = ac;
        cap[1] = bc;
        cap[2] = cc;

        int[] state = new int[3];

        state[0]=a;
        state[1]=b;
        state[2]=c;


        

        for(int i = 0; i<100; i++)
        {
            int from = i%3;
            int to = (i+1)%3;

            int poured = Math.min(state[from],cap[to]-state[to]);

            state[from] -= poured;
            state[to] += poured;

        }

		
		for(int i=0; i<3; i++)
        {
            pw.println(state[i]);
        } 

		pw.close();
	}
}
