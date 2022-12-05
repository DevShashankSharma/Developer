import java.util.Random;
import java.util.Scanner;

public class Rock_Paper_Scissors {
    public static void main(String[] args) {

        Random random = new Random();
        Scanner scan = new Scanner(System.in);

        String str = "stone";

        /*
         * 0 = paper
         * 1 = scissor
         * 2 = stone
         */
        while (!str.equals("exit")) {
            System.out.println("Enter stone , paper and scissor  AND exit to exit game");

            str = scan.next();
            
            int c = random.nextInt(3);
     

            if ((str.equals("stone") && c == 2) || (str.equals("paper") && c == 0)
                    || (str.equals("scissor") && c == 1)) {
                System.out.println("Draw");
            }
             else if (str.equals("paper") && c == 2) {
                System.out.println("you win");
            }
             else if (str.equals("scissor") && c == 0) {
                System.out.println("you win");
            } 
            else if (str.equals("stone") && c == 1) {
                System.out.println("you win");
            }
             else if (str.equals("exit")) {
                break;
            } 
            else {
                System.out.println("you loss  . Have good luck in next time");
            }
        }

        scan.close();
    }
}
