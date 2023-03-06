import java.util.Scanner;
// Other imports go here
// Do NOT change the class name
class Main{
    public static void main(String[] args)
    {
        // Write your code here
      Scanner scanner=new Scanner(System.in);
      int num=scanner.nextInt();
      int rev=0;
      while(num!=0)
      {
        int digit=num%10;
        rev=rev*10+digit;
        num=num/10;
      }
      System.out.println(rev);
    }
}
