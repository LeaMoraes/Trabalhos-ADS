﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CalculadoraAula1.Modelo
{
    public class Validacao
    {

        public string num1;
        public string num2;
        public int n1;
        public int n2;
        public string mensagem;

        public void validar()
        {

            mensagem = "";
            try
            {

                n1 = Convert.ToInt32(num1);
                n2 = Convert.ToInt32(num2);

            }

            catch(Exception erro)
            {

                mensagem = "Números Inválidos";

            }

        }

    }
}