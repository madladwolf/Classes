using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ex1
{
    class Program
    {
        static void Main(string[] args)
        {
            string nome, p, s1, s2, s3;
            int soma = 0;
            string[] vec = { "arroz", "atum", "leite", "sopa" };


            Console.WriteLine("Insira o seu nome completo:");
            nome = Console.ReadLine();
            p = nome.Split(' ').First();
            string u = nome.Split(' ').Last();
            Console.WriteLine(p + ' ' + u);
            if (ver(nome))
            {
                Console.WriteLine("Não numerico.");
            }
            else { Console.WriteLine("Numerico."); }

            Console.WriteLine("Insira 3 Strings");
            s1 = Console.ReadLine();
            s2 = Console.ReadLine();
            s3 = Console.ReadLine();
            tamanho(s1, s2, s3);

            Console.WriteLine();
            soma = somaString(vec);
            Console.WriteLine("soma" + soma);
            System.Threading.Thread.Sleep(10000);

        } 

        static void tamanho(string a, string b, string c)
        {
            if (a.Length > b.Length)
            {
                if (a.Length > c.Length)
                {
                    Console.WriteLine("A maior é " + a);
                }
                else
                {
                    Console.WriteLine("A maior é " + b);
                }
            }
            else
            {
                if (b.Length > c.Length) Console.WriteLine("A maior é: " + b);
                else Console.WriteLine("A maior é: " + c);
            }
        }

        static bool vecString(string[] vec)
        {
            int i, aux=0;
            int a = vec.Length;
            for (i = 0; i < a; i++)
            {
                if (vec[i] == vec[0])
                {
                    aux++;
                }

            }
            if (aux == a)
            {
                return true;
            }
            return false;
        }

        static int somaString(string[] vec)
        {
            int i = 0, soma = 0;
            for(i=0; i < vec.Length; i++)
            {
                soma = vec[i].Length + soma;
            }
            return soma;
        }

        static void replace(string str)
        {
            str = str.Replace("v", "b");
        }

        static bool ver(string str)
        {
            if (str.All(char.IsDigit))
                return false;
            return true;
        }

        static bool ver2(string str)
        {
            if (str.Any(char.IsDigit))
                return false;
            return true;
        }

        static string Ordem(string s1, string s2)
        {
            if (string.Compare(s1, s2) < 0)
            {
                Console.WriteLine("A primeira e a primeira");
            }
            if(string.Compare(s1, s2) == 0)
            {
                Console.WriteLine("É igual");
            }
            else { Console.WriteLine("A s2 vem primeiro"); }
        }

        static void ordemVec(string[] vec)
        {
            int i;
            Array.Sort(vec);
            for (i = 0; i < vec.Length; i++)
                {
                Console.WriteLine(vec[i]);
                }
        }

        static void jogo()
        {
            
        }
    }
}