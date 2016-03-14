using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace GuessGame
{
    public partial class FirstFrm : Form
    {
        public FirstFrm()
        {
            InitializeComponent();
        }

        private void panel1_Paint(object sender, PaintEventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            
            string str = "Name:" + textName.Text.Trim();
            str += "\n";
            str += "Age:" + textAge.Text.Trim();
            str += "\n";
            str += "Vacation:" + textVacation.Text.Trim();
            if (radioMale.Checked)
            {
                str += "\n";
                str +="Gender:"+radioMale.Text.Trim();
            }
            if (redioFemale.Checked)
            {
                str += "\n";
                str += "Gender:" + redioFemale.Text.Trim();
            }
            new SecondFrm(str).Show();
            this.Hide();
        }
    }
}
