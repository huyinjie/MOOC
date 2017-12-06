import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        int F;
        Scanner in = new Scanner(System.in);
        F = in.nextInt();
        int C = (int)((F-32)*(5.0/9.0));
        System.out.println(C);
    }
}