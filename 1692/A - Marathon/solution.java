import java.util.Scanner;
public class AMarathon{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int x;
        while(t-- > 0){
            x = 0;
            int a = input.nextInt();
            int b = input.nextInt();
            if(b > a)   x++;
            int c = input.nextInt();
            if(c > a)   x++;
            int d = input.nextInt();
            if(d > a)   x++;
            System.out.println(x);
        }
        input.close();
    }
}