import java.math.BigInteger;
import java.util.Scanner;

public class Input {
        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
            
            BigInteger d = scanner.nextBigInteger();
            BigInteger e = scanner.nextBigInteger();
            BigInteger q = d.multiply(e);
            System.out.println(q);
                
            
        }
    }