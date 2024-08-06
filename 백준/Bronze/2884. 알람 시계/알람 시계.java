import java.util.*;
import java.lang.*;
import java.io.*;

public class Main {
	public static void main (String[] args) {
	    Scanner in = new Scanner(System.in);
		int H = in.nextInt();
		int M = in.nextInt();
		int T = 0;
		
		T = H * 60 + M;
		
		if(T < 45){
		    T = 1440 + T - 45;
		}else{
		    T = T - 45;
		}
		
		H = T/60;
		M = T%60;
		
		System.out.println(H +" "+ M);
		
	}
}