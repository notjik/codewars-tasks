using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace cs
{
    internal class Program
    {
        /*
        static void Main(string[] args) // Collatz Conjecture (3n+1)
        {
            uint n = uint.Parse(Console.ReadLine());
            Console.WriteLine(CollatzConjecture.Kata.Hotpo(n));
        }
        */

        /*
        static void Main(string[] args) // Multiples of 3 or 5
        {
            int value = int.Parse(Console.ReadLine());
            Console.WriteLine(MultiplesOf3Or5.Kata.Solution(value));
        }
        */

        /*
        static void Main(string[] args) // Who likes it?
        {
            string[] name = Console.ReadLine().Split(new[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);
            Console.WriteLine(WhoLikesIt.Kata.Likes(name));
        }
        */

        /*
        static void Main(string[] args) // Isograms
        {
            string str = Console.ReadLine();
            Console.WriteLine(Isograms.Kata.IsIsogram(str));
        }
        */

        /*
        static void Main(string[] args) // You're a square!
        {
            int n = int.Parse(Console.ReadLine());
            Console.WriteLine(YouReASquare.Kata.IsSquare(n));
        }
        */

        /*
        static void Main(string[] args) // Complementary DNA
        {
            string dna = Console.ReadLine();
            Console.WriteLine(ComplementaryDNA.DnaStrand.MakeComplement(dna));
        }
        */

        static void Main(string[] args) // Replace With Alphabet Position
        {
            string text = Console.ReadLine();
            Console.WriteLine(ReplaceWithAlphabetPosition.Kata.AlphabetPosition(text));
        }
    }
}
