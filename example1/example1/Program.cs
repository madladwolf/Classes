using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace example1
{
    class Program
    {
        static void Main(string[] args)
        {
            //Create a new object p1 with the default values of 0,0
            Ponto p1 = new Ponto();
            //Create a new object Ponto2 with the same memory position of p1
            Ponto p2 = p1;
            //define X of p2 as "2"
            p2.X = 2;
            //calling ToString on p1
            Console.WriteLine(p1.ToString());
            //stopping the program to end abruptly
            Console.ReadKey();
        }
    }
}
