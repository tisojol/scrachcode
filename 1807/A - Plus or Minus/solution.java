import java.util.Scanner;
public class APlusOrMinus {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while(t-- > 0){
            int a = input.nextInt( ), b = input.nextInt( ), c = input.nextInt( );
            System.out.println((a+b == c) ? '+' : '-');
        }
        input.close();
    }
}