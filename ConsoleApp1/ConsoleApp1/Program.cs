using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            //Read&Write to files (Se vencimento superior que 1000)
            StreamReader read = new StreamReader(@"C:\Users\t0114312\Documents\files\vencimentos.txt");
            StreamWriter wr = new StreamWriter(@"C:\Users\t0114312\Documents\files\supmil.txt");
            int aux1 = 0;
            while (!read.EndOfStream)
            {
                string linha = read.ReadLine();
                string[] campos = linha.Split(' ');
                int aux0 = campos[2].Length;
                if (aux0 >= 4)
                {
                    wr.Write(campos[0] + ' ' + campos[1] + ' ' + campos[2]);
                    aux1++;
                }
            }
            if(aux1 == 0)
            {
                wr.Write("Nao existem valores a apresentar");
            }
            read.Close();
            wr.Close();
        }
    }
}
