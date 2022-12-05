import java.util.Random;
import java.util.Scanner;

class Game {
    String Name = new String();
    public Scanner scan = new Scanner(System.in);

    private int a;
    private int No_of_try = 0;

    public void setdata(String n) {
        Name = n;
    }

    public void process() {

        System.out.print("Dear " + Name + " Guess the number : ");
        a = scan.nextInt();

        Random random = new Random();
        int b = random.nextInt(100);

        String mode = "continue";
        while (!mode.equals("exit")) {
            No_of_try++;

            if (a > b) {
                System.out.println("Your guessed no. is greater than the actual no. so enter the no. again");
                a = scan.nextInt();
            } else if (a < b) {
                System.out.println("Your guessed no. is smaller than the actual no. so enter the no. again");
                a = scan.nextInt();
            } else {
                System.out.println("You guessed the correct no. and enter exit to see your performance");
                mode = scan.next();
            }
        }

    }

    public void closescanner() {
        scan.close();
    }

    public void getdata() {
        System.out.println("Your Performance : ");
        System.out.println("Name of player : " + Name);
        System.out.println("No. of attempt you take to solve the puzzle : " + No_of_try);
    }

}

public class Guess_the_Number {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int no_of_players;

        System.out.println("Enter the number of players");
        no_of_players = sc.nextInt();

        String[] name = new String[no_of_players];

        Game person[] = new Game[no_of_players]; // syntax of declaring the array class

        for (int i = 0; i < no_of_players; i++) {

            System.out.print("Enter name of player" + (i + 1) + " : ");
            name[i] = sc.next();

            person[i] = new Game();

            person[i].setdata(name[i].toString());
            person[i].process();
            person[i].getdata();
        }

        sc.close();

    }
}