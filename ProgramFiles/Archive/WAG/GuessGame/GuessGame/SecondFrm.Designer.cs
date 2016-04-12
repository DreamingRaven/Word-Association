namespace GuessGame
{
    partial class SecondFrm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
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
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.panel1 = new System.Windows.Forms.Panel();
            this.listComputer = new System.Windows.Forms.ListBox();
            this.panel7 = new System.Windows.Forms.Panel();
            this.listWord = new System.Windows.Forms.ListBox();
            this.panel8 = new System.Windows.Forms.Panel();
            this.panel10 = new System.Windows.Forms.Panel();
            this.panel4 = new System.Windows.Forms.Panel();
            this.label3 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.label9 = new System.Windows.Forms.Label();
            this.panel9 = new System.Windows.Forms.Panel();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.label14 = new System.Windows.Forms.Label();
            this.panel2 = new System.Windows.Forms.Panel();
            this.CounterMe = new System.Windows.Forms.Label();
            this.panel3 = new System.Windows.Forms.Panel();
            this.CounterCC = new System.Windows.Forms.Label();
            this.panel5 = new System.Windows.Forms.Panel();
            this.Test = new System.Windows.Forms.ListBox();
            this.label4 = new System.Windows.Forms.Label();
            this.panel6 = new System.Windows.Forms.Panel();
            this.MyWord = new System.Windows.Forms.ListBox();
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.panel1.SuspendLayout();
            this.panel7.SuspendLayout();
            this.panel10.SuspendLayout();
            this.panel4.SuspendLayout();
            this.panel9.SuspendLayout();
            this.panel2.SuspendLayout();
            this.panel3.SuspendLayout();
            this.panel5.SuspendLayout();
            this.panel6.SuspendLayout();
            this.SuspendLayout();
            // 
            // panel1
            // 
            this.panel1.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.panel1.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.panel1.Controls.Add(this.listComputer);
            this.panel1.Controls.Add(this.panel7);
            this.panel1.Controls.Add(this.panel10);
            this.panel1.Controls.Add(this.panel4);
            this.panel1.Location = new System.Drawing.Point(12, 12);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(505, 429);
            this.panel1.TabIndex = 0;
            // 
            // listComputer
            // 
            this.listComputer.Font = new System.Drawing.Font("Microsoft YaHei", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.listComputer.FormattingEnabled = true;
            this.listComputer.ItemHeight = 21;
            this.listComputer.Location = new System.Drawing.Point(246, 188);
            this.listComputer.Name = "listComputer";
            this.listComputer.Size = new System.Drawing.Size(257, 172);
            this.listComputer.TabIndex = 4;
            // 
            // panel7
            // 
            this.panel7.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.panel7.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.panel7.Controls.Add(this.listWord);
            this.panel7.Controls.Add(this.panel8);
            this.panel7.Location = new System.Drawing.Point(-2, 187);
            this.panel7.Name = "panel7";
            this.panel7.Size = new System.Drawing.Size(247, 172);
            this.panel7.TabIndex = 5;
            // 
            // listWord
            // 
            this.listWord.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.listWord.Font = new System.Drawing.Font("Microsoft YaHei", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.listWord.FormattingEnabled = true;
            this.listWord.ItemHeight = 21;
            this.listWord.Location = new System.Drawing.Point(-2, -2);
            this.listWord.Name = "listWord";
            this.listWord.Size = new System.Drawing.Size(252, 170);
            this.listWord.TabIndex = 7;
            this.listWord.SelectedIndexChanged += new System.EventHandler(this.listWord_SelectedIndexChanged);
            // 
            // panel8
            // 
            this.panel8.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.panel8.Location = new System.Drawing.Point(246, 6);
            this.panel8.Name = "panel8";
            this.panel8.Size = new System.Drawing.Size(247, 165);
            this.panel8.TabIndex = 6;
            // 
            // panel10
            // 
            this.panel10.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.panel10.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.panel10.Controls.Add(this.textBox2);
            this.panel10.Location = new System.Drawing.Point(246, 356);
            this.panel10.Name = "panel10";
            this.panel10.Size = new System.Drawing.Size(257, 71);
            this.panel10.TabIndex = 4;
            // 
            // panel4
            // 
            this.panel4.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.panel4.Controls.Add(this.label3);
            this.panel4.Controls.Add(this.label1);
            this.panel4.Controls.Add(this.label9);
            this.panel4.Location = new System.Drawing.Point(82, -2);
            this.panel4.Name = "panel4";
            this.panel4.Size = new System.Drawing.Size(329, 77);
            this.panel4.TabIndex = 0;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("SimSun", 24F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label3.Location = new System.Drawing.Point(86, 38);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(151, 33);
            this.label3.TabIndex = 10;
            this.label3.Text = "00:00:00";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft YaHei", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label1.ForeColor = System.Drawing.Color.Green;
            this.label1.Location = new System.Drawing.Point(38, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(261, 28);
            this.label1.TabIndex = 9;
            this.label1.Text = "Word association game";
            // 
            // label9
            // 
            this.label9.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.label9.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(128)))), ((int)(((byte)(128)))), ((int)(((byte)(255)))));
            this.label9.Location = new System.Drawing.Point(-1, 35);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(323, 2);
            this.label9.TabIndex = 8;
            this.label9.Text = "label9";
            // 
            // panel9
            // 
            this.panel9.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.panel9.Controls.Add(this.textBox1);
            this.panel9.Controls.Add(this.label14);
            this.panel9.Location = new System.Drawing.Point(12, 372);
            this.panel9.Name = "panel9";
            this.panel9.Size = new System.Drawing.Size(252, 71);
            this.panel9.TabIndex = 3;
            // 
            // textBox1
            // 
            this.textBox1.Font = new System.Drawing.Font("Microsoft YaHei", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.textBox1.Location = new System.Drawing.Point(2, 27);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(238, 28);
            this.textBox1.TabIndex = 2;
            this.textBox1.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            this.textBox1.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.TextBox1_Press);
            // 
            // label14
            // 
            this.label14.AutoSize = true;
            this.label14.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.label14.Font = new System.Drawing.Font("Microsoft YaHei", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label14.Location = new System.Drawing.Point(3, 2);
            this.label14.Name = "label14";
            this.label14.Size = new System.Drawing.Size(104, 22);
            this.label14.TabIndex = 1;
            this.label14.Text = "Input Word";
            // 
            // panel2
            // 
            this.panel2.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.panel2.Controls.Add(this.CounterMe);
            this.panel2.Location = new System.Drawing.Point(12, 12);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(86, 77);
            this.panel2.TabIndex = 0;
            // 
            // CounterMe
            // 
            this.CounterMe.AutoSize = true;
            this.CounterMe.Font = new System.Drawing.Font("SimSun", 24F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.CounterMe.Location = new System.Drawing.Point(22, 18);
            this.CounterMe.Name = "CounterMe";
            this.CounterMe.Size = new System.Drawing.Size(32, 33);
            this.CounterMe.TabIndex = 0;
            this.CounterMe.Text = "0";
            // 
            // panel3
            // 
            this.panel3.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.panel3.Controls.Add(this.CounterCC);
            this.panel3.Location = new System.Drawing.Point(422, 12);
            this.panel3.Name = "panel3";
            this.panel3.Size = new System.Drawing.Size(95, 77);
            this.panel3.TabIndex = 1;
            // 
            // CounterCC
            // 
            this.CounterCC.AutoSize = true;
            this.CounterCC.Font = new System.Drawing.Font("SimSun", 24F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.CounterCC.Location = new System.Drawing.Point(25, 20);
            this.CounterCC.Name = "CounterCC";
            this.CounterCC.Size = new System.Drawing.Size(32, 33);
            this.CounterCC.TabIndex = 1;
            this.CounterCC.Text = "0";
            // 
            // panel5
            // 
            this.panel5.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.panel5.Controls.Add(this.Test);
            this.panel5.Controls.Add(this.label4);
            this.panel5.Controls.Add(this.panel6);
            this.panel5.Font = new System.Drawing.Font("Microsoft YaHei", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.panel5.Location = new System.Drawing.Point(12, 88);
            this.panel5.Name = "panel5";
            this.panel5.Size = new System.Drawing.Size(505, 115);
            this.panel5.TabIndex = 1;
            // 
            // Test
            // 
            this.Test.Font = new System.Drawing.Font("Microsoft YaHei", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.Test.FormattingEnabled = true;
            this.Test.ItemHeight = 21;
            this.Test.Location = new System.Drawing.Point(246, -1);
            this.Test.Name = "Test";
            this.Test.Size = new System.Drawing.Size(257, 130);
            this.Test.TabIndex = 3;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("SimSun", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label4.Location = new System.Drawing.Point(351, 22);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(53, 19);
            this.label4.TabIndex = 2;
            this.label4.Text = "Test";
            // 
            // panel6
            // 
            this.panel6.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.panel6.Controls.Add(this.MyWord);
            this.panel6.Location = new System.Drawing.Point(-2, -2);
            this.panel6.Name = "panel6";
            this.panel6.Size = new System.Drawing.Size(252, 115);
            this.panel6.TabIndex = 1;
            // 
            // MyWord
            // 
            this.MyWord.Font = new System.Drawing.Font("Microsoft YaHei", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.MyWord.FormattingEnabled = true;
            this.MyWord.ItemHeight = 21;
            this.MyWord.Location = new System.Drawing.Point(-2, -2);
            this.MyWord.Name = "MyWord";
            this.MyWord.Size = new System.Drawing.Size(252, 130);
            this.MyWord.TabIndex = 1;
            // 
            // timer1
            // 
            this.timer1.Interval = 1000;
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // textBox2
            // 
            this.textBox2.Font = new System.Drawing.Font("Microsoft YaHei", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.textBox2.Location = new System.Drawing.Point(3, 29);
            this.textBox2.Multiline = true;
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(238, 28);
            this.textBox2.TabIndex = 3;
            // 
            // SecondFrm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.ClientSize = new System.Drawing.Size(520, 453);
            this.Controls.Add(this.panel5);
            this.Controls.Add(this.panel3);
            this.Controls.Add(this.panel2);
            this.Controls.Add(this.panel9);
            this.Controls.Add(this.panel1);
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "SecondFrm";
            this.Text = "Word association game";
            this.Load += new System.EventHandler(this.SecondFrm_Load);
            this.panel1.ResumeLayout(false);
            this.panel7.ResumeLayout(false);
            this.panel10.ResumeLayout(false);
            this.panel10.PerformLayout();
            this.panel4.ResumeLayout(false);
            this.panel4.PerformLayout();
            this.panel9.ResumeLayout(false);
            this.panel9.PerformLayout();
            this.panel2.ResumeLayout(false);
            this.panel2.PerformLayout();
            this.panel3.ResumeLayout(false);
            this.panel3.PerformLayout();
            this.panel5.ResumeLayout(false);
            this.panel5.PerformLayout();
            this.panel6.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Panel panel2;
        private System.Windows.Forms.Panel panel4;
        private System.Windows.Forms.Panel panel3;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label CounterMe;
        private System.Windows.Forms.Label CounterCC;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Panel panel5;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Panel panel6;
        private System.Windows.Forms.Panel panel10;
        private System.Windows.Forms.Panel panel9;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Label label14;
        private System.Windows.Forms.Timer timer1;
        private System.Windows.Forms.ListBox MyWord;
        private System.Windows.Forms.ListBox Test;
        private System.Windows.Forms.Panel panel7;
        private System.Windows.Forms.ListBox listComputer;
        private System.Windows.Forms.ListBox listWord;
        private System.Windows.Forms.Panel panel8;
        private System.Windows.Forms.TextBox textBox2;
    }
}