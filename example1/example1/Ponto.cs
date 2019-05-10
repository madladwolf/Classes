using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace example1
{   // Class Ponto (X & Y as atributes) 
    class Ponto
    {
        //auto properties (let the program know if you
        //give a value is set
        //ask for value is get
        public int X { get; set; }
        public int Y { get; set; }
        //Builders
        public Ponto() { this.X = 0;this.Y = 0; }
        public Ponto(int x, int y)
        {
            this.X = x;
            this.Y = y;
        }
        //Overriding ToString() so it does what we want
        public override string ToString()
        {
            return "Ponto (" + X + "," + Y + ")";
        }
    }
}
