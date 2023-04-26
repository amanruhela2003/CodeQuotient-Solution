package Unique_Patterns;

public class Heart_Shape_Star_Pattern {
    public static void main(String[] args) {
        int n=10;
        //HEART SHAPED STAR PATTERN
        
         for (int i =n/2; i <= n; i=i+2) {
            for (int j = 1; j < n-i; j=j+2) {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            for (int j = 1; j <= n-i; j++) {
                System.out.print(" ");
            }
            for(int j=1;j<=i;j++)
            {
            System.out.print("*");
            }
            System.out.println();
        }
        for (int i = n; i >= 1; i--) 
        {
            for (int j = i; j < n; j++) 
            {
                System.out.print(" ");
            }
            for (int j = 1; j <= 2*i-1; j++) 
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    
}
