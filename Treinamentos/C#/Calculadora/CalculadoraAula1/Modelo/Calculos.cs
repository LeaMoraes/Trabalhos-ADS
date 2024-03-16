using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CalculadoraAula1.Modelo
{
    public class Calculos
    {
        public int n1;
        public int n2;
        public int resposta;
        public int metodo;

        public void calcular()
        {

            switch (metodo)
            {
                case 1:
                    resposta = n1 + n2;
                    break;

                case 2:
                    resposta = n1 - n2;
                    break;

                case 3:
                    resposta = n1 / n2;
                    break;

                case 4:
                    resposta = n1 * n2;
                    break;
            }
            

        }
    }
}
