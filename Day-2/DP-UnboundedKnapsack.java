	import java.io.*;
	import java.util.*;

	public class Main {

	    public static void main(String[] args) throws Exception {
            Scanner sc = new Scanner(System.in);
            
            int n = sc.nextInt();
            int[] arr = new int[n];
            int[] weight = new int[n];
            
            for(int i=0; i<n; i++){
                arr[i] = sc.nextInt();
            }
            for(int i=0; i<n; i++){
                weight[i] = sc.nextInt();
            }
            
            int cap = sc.nextInt();
            
            int[] dp = new int[cap+1];
            
            dp[0] = 0;
            int max = Integer.MIN_VALUE;
            
            for(int i=1; i<dp.length; i++){
                
                for(int j=0; j<n; j++){
                    
                    if(i >= weight[j]){ // 3 >= 3
                        int v1 = i - weight[j]; // 0
                        int v2 = dp[v1]; //0
                        int v3 = v2 + arr[j]; // 0 + 45 = 45
                        
                        if(v3 > max){
                        max = v3;
                    }
                    
                    }
                    
                    
                    
                }
                
                dp[i] = max;
            }
            
            System.out.println(dp[cap]);
	    }
	}
