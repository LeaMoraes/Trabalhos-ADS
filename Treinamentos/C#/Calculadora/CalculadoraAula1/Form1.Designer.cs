namespace CalculadoraAula1
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            lblPrimeiroNumero = new Label();
            txbPrimeiroNumero = new TextBox();
            txbSegundoNumero = new TextBox();
            lblSegundoNumero = new Label();
            btnSomar = new Button();
            lblResultado = new Label();
            btnMais = new Button();
            btnMenos = new Button();
            btnDividir = new Button();
            btnMultiplicar = new Button();
            SuspendLayout();
            // 
            // lblPrimeiroNumero
            // 
            lblPrimeiroNumero.AutoSize = true;
            lblPrimeiroNumero.Location = new Point(61, 57);
            lblPrimeiroNumero.Name = "lblPrimeiroNumero";
            lblPrimeiroNumero.Size = new Size(143, 15);
            lblPrimeiroNumero.TabIndex = 0;
            lblPrimeiroNumero.Text = "Digite o Primeiro Numero";
            lblPrimeiroNumero.Click += label1_Click;
            // 
            // txbPrimeiroNumero
            // 
            txbPrimeiroNumero.Location = new Point(61, 75);
            txbPrimeiroNumero.Name = "txbPrimeiroNumero";
            txbPrimeiroNumero.PlaceholderText = "Coloque um numero";
            txbPrimeiroNumero.Size = new Size(143, 23);
            txbPrimeiroNumero.TabIndex = 1;
            // 
            // txbSegundoNumero
            // 
            txbSegundoNumero.Location = new Point(61, 133);
            txbSegundoNumero.Name = "txbSegundoNumero";
            txbSegundoNumero.PlaceholderText = "Coloque um numero";
            txbSegundoNumero.Size = new Size(143, 23);
            txbSegundoNumero.TabIndex = 3;
            // 
            // lblSegundoNumero
            // 
            lblSegundoNumero.AutoSize = true;
            lblSegundoNumero.Location = new Point(60, 115);
            lblSegundoNumero.Name = "lblSegundoNumero";
            lblSegundoNumero.Size = new Size(145, 15);
            lblSegundoNumero.TabIndex = 2;
            lblSegundoNumero.Text = "Digite o Segundo Numero";
            // 
            // btnSomar
            // 
            btnSomar.Location = new Point(95, 185);
            btnSomar.Name = "btnSomar";
            btnSomar.Size = new Size(75, 23);
            btnSomar.TabIndex = 4;
            btnSomar.Text = "Igual";
            btnSomar.UseVisualStyleBackColor = true;
            btnSomar.Click += btnSomar_Click;
            // 
            // lblResultado
            // 
            lblResultado.AutoSize = true;
            lblResultado.Location = new Point(55, 276);
            lblResultado.Name = "lblResultado";
            lblResultado.Size = new Size(59, 15);
            lblResultado.TabIndex = 5;
            lblResultado.Text = "Resultado";
            lblResultado.Click += lblResultado_Click;
            // 
            // btnMais
            // 
            btnMais.Anchor = AnchorStyles.Bottom | AnchorStyles.Left;
            btnMais.Location = new Point(29, 214);
            btnMais.Name = "btnMais";
            btnMais.Size = new Size(48, 23);
            btnMais.TabIndex = 6;
            btnMais.Text = "+";
            btnMais.UseVisualStyleBackColor = true;
            btnMais.Click += btnMais_Click;
            // 
            // btnMenos
            // 
            btnMenos.Anchor = AnchorStyles.Bottom | AnchorStyles.Left;
            btnMenos.Location = new Point(83, 214);
            btnMenos.Name = "btnMenos";
            btnMenos.Size = new Size(48, 23);
            btnMenos.TabIndex = 7;
            btnMenos.Text = "-";
            btnMenos.UseVisualStyleBackColor = true;
            btnMenos.Click += btnMenos_Click;
            // 
            // btnDividir
            // 
            btnDividir.Anchor = AnchorStyles.Bottom | AnchorStyles.Left;
            btnDividir.Location = new Point(137, 214);
            btnDividir.Name = "btnDividir";
            btnDividir.Size = new Size(48, 23);
            btnDividir.TabIndex = 8;
            btnDividir.Text = "/";
            btnDividir.UseVisualStyleBackColor = true;
            btnDividir.Click += btnDividir_Click;
            // 
            // btnMultiplicar
            // 
            btnMultiplicar.Anchor = AnchorStyles.Bottom | AnchorStyles.Left;
            btnMultiplicar.Location = new Point(191, 214);
            btnMultiplicar.Name = "btnMultiplicar";
            btnMultiplicar.Size = new Size(48, 23);
            btnMultiplicar.TabIndex = 9;
            btnMultiplicar.Text = "*";
            btnMultiplicar.UseVisualStyleBackColor = true;
            btnMultiplicar.Click += btnMultiplicar_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(275, 329);
            Controls.Add(btnMultiplicar);
            Controls.Add(btnDividir);
            Controls.Add(btnMenos);
            Controls.Add(btnMais);
            Controls.Add(lblResultado);
            Controls.Add(btnSomar);
            Controls.Add(txbSegundoNumero);
            Controls.Add(lblSegundoNumero);
            Controls.Add(txbPrimeiroNumero);
            Controls.Add(lblPrimeiroNumero);
            MaximumSize = new Size(291, 368);
            MinimumSize = new Size(291, 368);
            Name = "Form1";
            Text = "Calculadora";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label lblPrimeiroNumero;
        private TextBox txbPrimeiroNumero;
        private TextBox txbSegundoNumero;
        private Label lblSegundoNumero;
        private Button btnSomar;
        private Label lblResultado;
        private Button btnMais;
        private Button btnMenos;
        private Button btnDividir;
        private Button btnMultiplicar;
    }
}
