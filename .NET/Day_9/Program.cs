using Microsoft.Data.SqlClient;
using System.Data;

namespace Disconnected
{
    internal class Program
    {
        static void Main(string[] args)
        {

            #region SelectQuery
            string _conString = "Data Source=(LocalDB)\\MSSQLLocalDB;Initial Catalog=IETDB;Integrated Security=True;Encrypt=True";
            //SqlConnection con = new SqlConnection(_conString);
            //SqlDataAdapter ad = new SqlDataAdapter("select * from emp", con);
            //ad.MissingSchemaAction = MissingSchemaAction.AddWithKey;
            //DataSet ds = new DataSet();
            //ad.Fill(ds, "emp");
            //foreach (DataRow row in ds.Tables["emp"].Rows)
            //{
            //    int id = Convert.ToInt32(row["id"]);
            //    string nm = row["name"].ToString();
            //    string add = row["address"].ToString();
            //    Console.WriteLine($"Id: {id}, Name: {nm}, Address: {add}");


            //}
            #endregion

            #region INSERT Query
            SqlConnection con = new SqlConnection(_conString);
            SqlDataAdapter da = new SqlDataAdapter("SELECT * FROM emp", con);

            da.MissingSchemaAction = MissingSchemaAction.AddWithKey;

            SqlCommandBuilder builder = new SqlCommandBuilder(da);

            DataSet ds = new DataSet();
            da.Fill(ds, "emp");
          

            Console.WriteLine("Enter Name:");
            string nm = Console.ReadLine();
            Console.WriteLine("Enter Address:");
            string add = Console.ReadLine();

            DataRow newRow = ds.Tables["emp"].NewRow();
            newRow["Name"] = nm;
            newRow["Address"] = add;

            ds.Tables["emp"].Rows.Add(newRow);

            da.Update(ds, "emp");
            Console.WriteLine("Record inserted!");
            #endregion
        }
    }
}

