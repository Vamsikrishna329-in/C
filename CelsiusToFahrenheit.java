import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the value:");
        float s = scan.nextFloat();
        System.out.print("The temperature from celsius to fahrenheit is:"+ ((s*1.8 )+32));
        }
}
