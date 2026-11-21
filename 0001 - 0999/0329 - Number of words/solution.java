import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();

        int cnt = 0;
        boolean soz = false;

        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);

            if (Character.isLetterOrDigit(c)) {
                if (!soz) {
                    cnt++;
                    soz = true;
                }
            } else {
                soz = false;
            }
        }

        System.out.println(cnt);
    }
}