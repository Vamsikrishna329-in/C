import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        int even = 0; 
        int odd = 0;
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the size:");
        int n = scan.nextInt();
        int[] values = new int[n];
        System.out.print("Enter the values:");
        for(int i = 0;i < n;i++){
            values[i] = scan.nextInt();
            if(values[i] % 2 == 0){
                System.out.println("even number:"+values[i]);
                even ++;
            }else{
                odd ++;
                System.out.println("odd number:"+values[i]);
            }
        }
        System.out.println("The Number Of Even numbers are: "+ even+ "\n The Number Of Odd number are:"+odd);
    }
}
