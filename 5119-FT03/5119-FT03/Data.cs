using System;
using System.Collections.Generic;
using System.Text;

namespace _5119_FT03
{
    class Data
    {
        int dia, mes, ano;
        string diaSemana;
        Hora hora;

        public Data()
        {
            dia = 1;
            mes = 1;
            ano = 2000;
            diaSemana = "segunda";
        }
        public Data(int d, int m, int a, string di, int h, int mes, int s)
        {
            dia = d;
            mes = m;
            ano = a;
            diaSemana = di;
            hora.setHora(h);
        }
        public Data(Data data)
        {
            hora = data.hora;
            dia = data.dia;
            mes = data.mes;
            ano = data.ano;
            diaSemana = data.diaSemana;
        }
        public int getDia()
        {
            return dia;
        }
        public int getMes()
        {
            return mes;
        }
        public int getAno()
        {
            return ano;
        }
        public string getSemana()
        {
            return diaSemana;
        }
    }
}
