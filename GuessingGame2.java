import java.util.Scanner;
public class GuessingGame2{
    public static void main(String[] args){
        int mode;
        int tries = 0, maxNum = 0, random = 0;
        int guess;
        Scanner sc = new Scanner(System.in);
        System.out.print("Choose Mode:\n" + "1. Easy\n" + "2. Medium\n" + "3. Hard\n" + "4. Extreme\n" + "5. Extreme II\n" + "6. Extreme III\n" + "Enter: ");
        mode = sc.nextInt();
        switch(mode){
        case 1:
            tries = 3;
            maxNum = 10;
            random = (int) (Math.random() * 10 + 1);
            break;
        case 2:
            tries = 7;
            maxNum = 100;
            random = (int) (Math.random() * 100 + 1);
            break;
        case 3:
            tries = 12;
            maxNum = 1000;
            random = (int) (Math.random() * 1000 + 1);
            break;
        case 4:
            tries = 16;
            maxNum = 10000;
            random = (int) (Math.random() * 10000 + 1);
            break;
        case 5:
            tries = 20;
            maxNum = 100000;
            random = (int) (Math.random() * 100000 + 1);
            break;
        case 6:
            tries = 23;
            maxNum = 1000000;
            random = (int) (Math.random() * 1000000 + 1);
            break;
        default:
            System.out.println("Invalid Choice");
            mode = 7;
    };
    if(mode != 7){
        System.out.println("The computer is thinking of a number between 1 and " + maxNum);
        System.out.println("You must guess that number in " + tries + " tries or less");
    }
        
        for(int i = 0; i < tries; i++){
        if(mode == 7){
            break;
        }
        int j = i + 1;
        System.out.println("Guess " + j + ": ");
        System.out.print("Enter number 1 to "+ maxNum + ": ");
        guess = sc.nextInt();
        if(i == 0 && guess == random){
            System.out.println("Correct, First Try!");
            break;
        }
        if(guess > random){
            System.out.println("Too High");
        }
        if(guess < random){
            System.out.println("Too Low");
        }
        if(guess == random && i != 0 && i < tries){
            System.out.println("Correct, the number was " + random);
            System.out.println("It took you " + j + " tries");
            break;
        }
        if(j == tries){
            System.out.println("You are out of attempts");
            System.out.println("The correct number was " + random);
        }
    }
    }
}