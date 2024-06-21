import java.util.Random;
import java.util.Scanner;

public class SnakeAndRiddles {
    private int dice, pos, newPos, cnt = 0;
    private final Random rand = new Random();

    public static void main(String[] args) {
        SnakeAndRiddles game = new SnakeAndRiddles();
        game.startGame();
    }

    private void startGame() {
        Scanner sc = new Scanner(System.in);
        System.out.println("\nTHE SNAKE AND THE LADDER");
        System.out.println("~~~~~~~~~~~~~~~~~~~~~~~~");
        System.out.println("\n\tMenu\n\t1. VIEW PLAYBOOK \n\t2. START PLAYING");
        System.out.print("Choose an option: ");
        int choice = sc.nextInt();
        sc.nextLine(); // Consume newline

        System.out.println();

        if (choice == 1) {
            showPlaybook();
        }

        if (choice == 2) {
            System.out.println("Note:- The first dice has already been rolled for you");
        }
        
        if (choice == 1 || choice == 2) {
            System.out.println("\nLET THE GAME BEGIN...");
            do {
                System.out.println("\nRoll the dice ");
                sc.nextLine(); // Wait for the user to press ENTER
                dice = rand.nextInt(6) + 1;
                System.out.println("DICE ROLLED: (" + dice + ")");
                pos += dice;

                if (pos > 100) {
                    pos = 96;
                }

                if (dice == 6) {
                    System.out.println("\nWoah it's a SIX\nLooks like someone is very lucky with the dice");
                    System.out.println("Your current pos: [" + pos + "]");
                    continue;
                }
                System.out.println("Your current pos: [" + pos + "]");
                cnt++;
                chkPos();
                if (pos < newPos) {
                    System.out.println("\nWOHOO... you've got on a ladder. \nYour current pos: [" + newPos + "]");
                }

                if (pos > newPos) {
                    System.out.println("\nUH-OH... you're confronted by a snake!\nNow answer a simple riddle to save yourself from the snake.\n\n");
                    if (lifeline() == 1) {
                        System.out.println("\nWOWW... You got the riddle correct\nRest assured the snake is not gonna bite you!!\n\n");
                        newPos = pos;
                        System.out.println("Your current pos: [" + newPos + "]");
                    } else {
                        System.out.println("\nOOPS... you couldn't get the riddle correct\nYou have been bitten by the snake...\n\n");
                        System.out.println("Your current pos: [" + newPos + "]");
                    }
                }
                pos = newPos;
            } while (pos < 100);
            System.out.println("\nCONGRATS!! \nCHAMPION \nYOU WON in " + cnt + " throws \n");
        }
        sc.close();
    }

    private void showPlaybook() {
        System.out.println("\nPLAYBOOK:___________________________________________________________________________________________________________\n");
        System.out.println("|                                                                  |                                                |");
        System.out.println("|  100    99   98   97   96   95   94   93   92   91               |   1: START                 99: snake to 41     |");
        System.out.println("|  81     82   83   84   85   86   87   88   89   90               |  89: snake to 53           74: ladder to 92    |");
        System.out.println("|  80     79   78   77   76   75   74   73   72   71               |  76: snake to 58           62: ladder to 81    |");
        System.out.println("|  61     62   63   64   65   66   67   68   69   70               |  66: snake to 45           54: snake to 31     |");
        System.out.println("|  60     59   58   57   56   55   54   53   52   51               |  43: snake to 18           50: ladder to 69    |");
        System.out.println("|  41     42   43   44   45   46   47   48   49   50               |  40: snake to 3            33: ladder to 90    |");
        System.out.println("|  40     39   38   37   36   35   34   33   32   31               |  27: snake to 5            13: ladder to 46    |");
        System.out.println("|  21     22   23   24   25   26   27   28   29   30               |  11: snake to 7             4: ladder to 25    |");
        System.out.println("|  20     19   18   17   16   15   14   13   12   11               |                                                |");
        System.out.println("|  1       2    3    4    5    6    7    8    9   10               |                 100: THE END                   |");
        System.out.println("|__________________________________________________________________|_______________________________________________/\n");

        System.out.println("\nInstructions:\n -->> Press ENTER to roll the dice\n -->> Reach 100 to WIN the game\n -->> If somehow you happen to reach a position greater than 100\n      then you will be automatically directed to the position-96 \n -->> First dice has already been rolled as a demo\n");
        System.out.println("\nRules for Riddles:\n -->> Riddles are there to save you from snake bites\n -->> Answer of riddles are NOT space-separated\n -->> Answer of riddles are to be given in lower caps only\n");
    }

    @SuppressWarnings("resource")
    private int riddle() {
        int r = rand.nextInt(5);
        Scanner sc = new Scanner(System.in);
        String ans;

        switch (r) {
            case 0:
                System.out.println("I have a neck but no head and I even wear a cap. You know who am I?");
                ans = sc.next();
                return (ans.equals("bottle")) ? 1 : 0;
            case 1:
                System.out.println("Which room has no doors and no windows?");
                ans = sc.next();
                return (ans.equals("mushroom")) ? 1 : 0;
            case 2:
                System.out.println("During which month do people sleep the least?");
                ans = sc.next();
                return (ans.equals("february")) ? 1 : 0;
            case 3:
                System.out.println("What belongs to you but others use it more than you do?");
                ans = sc.next();
                return (ans.equals("name")) ? 1 : 0;
            case 4:
                System.out.println("Poor people have it. Rich people need it. If you eat it, you'll die. What is it?");
                ans = sc.next();
                return (ans.equals("nothing")) ? 1 : 0;
            default:
                return 0;
        }
    }

    private int lifeline() {
        return (riddle() == 1) ? 1 : 0;
    }

    private void chkPos() {
        switch (pos) {
            case 4:
                newPos = 25;
                break;
            case 13:
                newPos = 46;
                break;
            case 33:
                newPos = 90;
                break;
            case 50:
                newPos = 69;
                break;
            case 62:
                newPos = 81;
                break;
            case 74:
                newPos = 92;
                break;
            case 11:
                newPos = 7;
                break;
            case 27:
                newPos = 5;
                break;
            case 40:
                newPos = 3;
                break;
            case 43:
                newPos = 18;
                break;
            case 54:
                newPos = 31;
                break;
            case 66:
                newPos = 45;
                break;
            case 76:
                newPos = 58;
                break;
            case 89:
                newPos = 53;
                break;
            case 99:
                newPos = 41;
                break;
            default:
                newPos = pos;
        }
    }
}
