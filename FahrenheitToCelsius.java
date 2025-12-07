import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        System.out.println("This program converts Fahrenheit to Celsius");
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the value:");
        float s = scan.nextFloat();
         System.out.print("The temperature from fahrenheit to celsius:"+(s-32)/1.8);
    }
}
