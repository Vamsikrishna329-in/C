import java.util.*;
import java.lang.Math;
class QuadraticRoots{
    public static void main(String[] args){
        float a,b,c,discriminat;
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the a,b,c values with space between them(-nan means roots are imaginary):");
        a = scan.nextFloat();
        b = scan.nextFloat();
        c = scan.nextFloat();
        discriminat = b*b - 4*a*c;
        if(discriminat < 0){
            System.out.println("Roots are Imaginary");
        }else{
            float r1= (float)(-b+Math.sqrt(discriminat))/(2*a);
            float r2= (float)(-b-Math.sqrt(discriminat))/(2*a);
            System.out.print("Roots are : " +r1);
            System.out.print(" " +r2);
        }
    }
}
