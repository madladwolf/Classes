using System;
using System.Collections.Generic;
using System.Text;

namespace _5119_FT03
{
    class Hora
    {
        int hora, min, seg;
        public Hora()
        {
            hora = 0;
            min = 0;
            seg = 0;
        }
        public Hora(int h, int m, int s)
        {
            hora = h;
            min = m;
            seg = s;
        }
        public Hora(Hora h)
        {
            hora = h.hora;
            min = h.min;
            seg = h.seg;
        }


        public void setHora(int h)
        {
            hora = h;
        }
        public void setMin(int m)
        {
            min = m;
        }
        public void setSeg(int s)
        {
            seg = s;
        }
        public int getHora()
        {
            return hora;
        }
        public int getMin()
        {
            return min;
        }
        public int getSeg()
        {
            return seg;
        }
    }
    
}
    
