import java.util.Scanner;
class SimpleInterest {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        System.out.print("Enter the time period:");
        int t = read.nextInt();
        System.out.print("Enter the Principal amount:");
        int a = read.nextInt();
        System.out.print("Enter the Annual Rate:");
        int r = read.nextInt();
        int s = (t*a*r)/100;
        System.out.println("The Simple Intrest is:"+s);
        System.out.print("The total amount is:"+(s+a));
    }
}
