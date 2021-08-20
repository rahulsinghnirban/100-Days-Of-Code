import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner sc = new Scanner(System.in);
    int n =sc.nextInt();
    
    int[] zeros = new int[n];
    int[] ones = new int[n];
    
    zeros[0] = 1;
    ones[0] = 1;
    
    for(int i=1; i<n; i++){
        zeros[i] = ones[i-1];
        ones[i] = ones[i-1] + zeros[i-1];
    }
    
    System.out.println(ones[n-1] + zeros[n-1]);
 }

}
