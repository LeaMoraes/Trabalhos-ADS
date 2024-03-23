using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CalculadoraAula1.Modelo
{
    public class Controle
    {

        public string mensagem;
        public string resultado;

        public void Executar(string num1, string num2, int metodo)
        {

            mensagem = "";
            Validacao validacao = new Validacao();
            validacao.Validar(num1, num2, metodo);
            if (validacao.mensagem.Equals(""))
            {
                Calculos calculos = new Calculos();
                resultado = calculos.Calcular(validacao.n1, validacao.n2, metodo).ToString();
            }
            else
            {
                mensagem = validacao.mensagem;
            }
            


        }

    }
}
