using CalculadoraAula1.Modelo;

namespace CalculadoraAula1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public int metodo = 1;
        

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void lblResultado_Click(object sender, EventArgs e)
        {

        }

        private void btnMais_Click(object sender, EventArgs e)
        {
            metodo = 1;
        }

        private void btnMenos_Click(object sender, EventArgs e)
        {

            metodo = 2;
        }

        private void btnDividir_Click(object sender, EventArgs e)
        {
            metodo = 3;
        }

        private void btnMultiplicar_Click(object sender, EventArgs e)
        {
            metodo = 4;
        }

        private void btnSomar_Click(object sender, EventArgs e)
        {
            Controle controle = new Controle();
            controle.num1 = txbPrimeiroNumero.Text;
            controle.num2 = txbSegundoNumero.Text;
            controle.metodo = metodo;   
            controle.excutar();
            
            if (controle.mensagem.Equals(""))
            {
                lblResultado.Text = controle.resultado;
            }
            else
            {
                lblResultado.Text = controle.mensagem;
            }
        }
    }
}
