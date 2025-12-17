namespace Odd_Even
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter a Number");

            int num = Convert.ToInt32(Console.ReadLine());

            if (checkNum(num))
            {
                Console.WriteLine($"{num} is Even Number");
            }
            else
            {
                Console.WriteLine($"{num} is Odd Number");
            }
        }

        private static bool checkNum(int num)
        {
            if (num == 0)
            {
                return true;
            }
            if (num % 2 == 0) return true;

            return false;
        }
    }
}
