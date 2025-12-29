using Microsoft.Data.SqlClient;

namespace Assignment
{
    internal class Program
    {
        static string connectionString = "Data Source=(LocalDB)\\MSSQLLocalDB;Initial Catalog=IETDB2;Integrated Security=True";


        static void Main(string[] args)
        {
           

            Console.Write("Enter Username: ");
            string username = Console.ReadLine();

            Console.Write("Enter Password: ");
            string password = Console.ReadLine();

            bool isValid = CheckCredentials(username, password);

            if (isValid)
            {
                Console.WriteLine("\nResult: Valid - Login Successful!");
            }
            else
            {
                Console.WriteLine("\nResult: Invalid - Wrong Username or Password");
            }

           
        }

        static bool CheckCredentials(string username, string password)
        {
            using (SqlConnection conn = new SqlConnection(connectionString))
            {
                conn.Open();

                string query = "SELECT COUNT(*) FROM emp WHERE username = @username AND password = @password";

                using (SqlCommand cmd = new SqlCommand(query, conn))
                {
                    cmd.Parameters.AddWithValue("@username", username);
                    cmd.Parameters.AddWithValue("@password", password);

                    int count = (int)cmd.ExecuteScalar();
                    return count > 0;
                }

            }
        }




    }
}

