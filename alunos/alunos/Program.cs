using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace alunos
{
    class Program
    {
        static void Main(string[] args)
        {
            StreamReader rd = new StreamReader(@"C:\Users\t0114312\Documents\files\notas.txt");
            StreamWriter aprovados = new StreamWriter(@"C:\Users\t0114312\Documents\files\aprovados.txt");
            StreamWriter reprovados = new StreamWriter(@"C:\Users\t0114312\Documents\files\reprovados.txt");
            int aux1 = 0;
            int aux0 = 0;
            while (!rd.EndOfStream)
            {
                string LAlunos = rd.ReadLine();
                string[] aluno = LAlunos.Split(' ');
                if (double.Parse(aluno[2]) > 9.5)
                {
                    aprovados.WriteLine(aluno[0] + ' ' + aluno[1] + ' ' + aluno[2]);
                    aux1++;
                }
                else { reprovados.WriteLine(aluno[0] + ' ' + aluno[1] + ' ' + aluno[2]); aux0++; }

            }
            if(aux0 == 0)
            {
                reprovados.WriteLine("Nao contem registos");
            }
            if(aux1 == 0) { aprovados.WriteLine("Nao contem registos"); }
            rd.Close();
            aprovados.Close();
            reprovados.Close();
        }
    }
}
