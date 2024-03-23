using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CalculadoraAula1.Modelo
{
    public class Validacao
    {

        public int n1;
        public int n2;
        public string mensagem;

        public void Validar(string num1, string num2, int metodo)
        {

            mensagem = "";
            try
            {

                n1 = Convert.ToInt32(num1);
                n2 = Convert.ToInt32(num2);

                if (metodo.Equals(3) && n2.Equals(0)){
                    mensagem = "Erro no calculo: Divisão por Zero";
                }
            }

            catch(Exception erro)
            {

                mensagem = "Números Inválidos";

            }

        }

    }
}
