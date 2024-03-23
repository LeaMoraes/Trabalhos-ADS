using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CalculadoraAula1.Modelo
{
    public class Calculos
    {


        public int Calcular(int n1, int n2, int metodo)
        {

            if (metodo.Equals(1)) return n1 + n2;
            if (metodo.Equals(2)) return n1 - n2;
            if (metodo.Equals(3)) return n1 / n2;
            if (metodo.Equals(4)) return n1 * n2;
            return 0;

            }
            

        }
    }

