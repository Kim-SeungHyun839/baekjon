import java.util.*;
import java.lang.*;
import java.io.*;

public class Main {
	public static void main (String[] args) {
	    Scanner in = new Scanner(System.in);
		int A = in.nextInt();
		int B = in.nextInt();
		int C = in.nextInt();
		int T = 0;
		
		T = A * 60 + B;
		
		if(T + C >= 1440){
		    T = T + C - 1440;
		}else{
		    T = T + C;
		}
		
		A = T/60;
		B = T%60;
		
		System.out.println(A +" "+ B);
		
	}
}