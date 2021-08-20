import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    
    long buildings = 1;
    long spaces = 1;
    
    for(int i=1; i<n; i++){
        long build = spaces; //3
        long space = spaces + buildings; //5
        
        buildings = build; //2
        spaces = space; //3
    }
    
    long ans = buildings + spaces;
    
    // if(n>37){
    //     System.out.println(ans+1);
    // }
    // else
    System.out.println(ans*ans); // we have to sqaure to calculate the ways the buildings can be built on BOTH sides
  
 }

}
