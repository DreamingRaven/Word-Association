using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Collections;

namespace GuessGame
{
    public partial class SecondFrm : Form
    {
        string word;
        public static int danci;
        string message;
        DateTime dtbegin;
        ArrayList wordArr = new ArrayList();
        public SecondFrm(string message)
        {
            this.message = message;
            danci = 0;
            InitializeComponent();
            
        }

        private void SecondFrm_Load(object sender, EventArgs e)
        {
            string[] msgItem = message.Split('\n');
            MyWord.Items.AddRange(msgItem);
            this.timer1.Enabled = true;
            dtbegin = DateTime.Now;
            label3.Text = "00:00:00";
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
        }
        private void TextBox1_Press(object sender, KeyPressEventArgs e)
        {
            if (e.KeyChar == 13)
            {
                ++danci;
                CounterMe.Text = danci.ToString();
                wordArr.Clear();
                wordArr.Add(textBox1.Text.Trim());
                listWord.Items.AddRange(wordArr.ToArray());
                textBox1.Clear();
            }
        }
        private void timer1_Tick(object sender, System.EventArgs e)
        {
            TimeSpan ts = DateTime.Now - dtbegin;
            //label1.Text = DateTime.Now.ToString();
            string str = ts.ToString();

            if (str.Length > 12)
                label3.Text = str.Substring(0, 8);
        }

        private void listWord_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}
