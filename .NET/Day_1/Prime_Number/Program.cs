namespace Prime_Number
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter a Number");
            int num = Convert.ToInt32(Console.ReadLine());

            if (isPrime(num))
            {
                Console.WriteLine($"{num} is a prime number"); 
            }
            else
            {
                Console.WriteLine($"{num} is not a prime number");
            }
        }

        private static bool isPrime(int num)
        {
            if (num <= 1)
            {
                return false;
            }
            if (num == 2) return true;

            for (int i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    return false;
                }
            }

            return true;
        }
    }
}
