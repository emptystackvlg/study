using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Laba_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void buttonStart_Click(object sender, EventArgs e)
        {
            var a = Convert.ToDouble(textBoxA.Text);
            var b = Convert.ToDouble(textBoxB.Text);
            var h = Convert.ToDouble(textBoxh.Text);
            double y;
            listBoxTab.Items.Add("x\t\t\ty");
            for (double x = a; x < b; x += h) 
            {
                if (x >= 0.9)
                {
                    //y = 1/ Math.Pow((0.1+x),2);
                    y = 3;
                }
                else  
                { 
                }
                if (x >= 0  && x < 0.9)
                {
                    y = 0.2 * x  + 0.1;
                }
                else 
                {
                    y = Math.Pow(x,2) + 0.2;
                }

                listBoxTab.Items.Add(Math.Round(x, 2).ToString() + "\t\t\t" +Math.Round(y, 2).ToString()) ;
            }
        }
    }
}
