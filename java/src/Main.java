import java.util.Scanner;

public class Main {
    /*
    public static void main(String[] args) { // Multiples of 3 or 5
        Scanner in = new Scanner(System.in);
        int number = in.nextInt();
        MultiplesOf3Or5 multiplesOf3Or5 = new MultiplesOf3Or5();
        MultiplesOf3Or5.Solution solution = multiplesOf3Or5.new Solution();
        System.out.println(solution.solution(number));
    }
    */

    /*
    public static void main(String[] args) { // Who likes it?
        System.out.println(WhoLikesIt.Solution.whoLikesIt());
        System.out.println(WhoLikesIt.Solution.whoLikesIt("Peter"));
        System.out.println(WhoLikesIt.Solution.whoLikesIt("Jacob", "Alex"));
        System.out.println(WhoLikesIt.Solution.whoLikesIt("Max", "John", "Mark"));
        System.out.println(WhoLikesIt.Solution.whoLikesIt("Alex", "Jacob", "Mark", "Max"));
    }
    */

    /*
    public static void main(String[] args) { // Isograms
        Scanner in = new Scanner(System.in);
        String str = in.next();
        System.out.println(Isograms.isogram.isIsogram(str));
    }
    */

    /*
    public static void main(String[] args) { // You're a square!
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        System.out.println(YouReASquare.Square.isSquare(n));
    }
    */

    public static void main(String[] args) { // Complementary DNA
        Scanner in = new Scanner(System.in);
        String dna = in.next();
        System.out.println(ComplementaryDNA.DnaStrand.makeComplement(dna));
    }
}

