/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		while(t!=0){
		  //  System.out.println(t);
		    int n = sc.nextInt();
		    int l = sc.nextInt();
		    
		    if(n == 1 || n == 2 || n == 3){
		        System.out.println(l);
		    }
		    else{
		        
		        for(int i=n; i>=0; i--){
		            
		            double num = Math.sqrt(i);
		            
		            if(check(num) == true){
		                System.out.println((int)num * l);
		                break;
		              //  return;
		            }
		            
		        }
		        
		    }
		    
		    t--;
		}
	}
	
	public static boolean check(double n){ // 5
	    int a = (int)n; // 3
	    
	    double b = n - a; // 2 - 2.0 = 0
	    
	    if(b>0){
	        return false;
	    }
	    else{
	        return true;
	    }
	    
	}
}
