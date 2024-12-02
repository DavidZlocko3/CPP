tinyurl.com/skola-android1
using System.Collections;

ArrayList lista = new ArrayList();
lista.Add(8);
lista.Add(15);
lista.Add(40);
lista.Add(42420);
lista.Add(676);
lista.Sort();
lista.Reverse();
lista.Add(Int32.Parse(Console.ReadLine()));
foreach (int i in lista)
{
    Console.WriteLine(i);
}







using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace David1212
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            pB_Auti.SizeMode = PictureBoxSizeMode.Normal;
         }

        private void cB_1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (cB_1.SelectedItem == "Macke")
            {
                pB_cB.Load("https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSV7NPa0Z2SbwLgNGQgpXo86hOQjx3W-LP-ng&s");
            }
            else if (cB_1.SelectedItem == "Majmuni")
            {
                pB_cB.Load("https://img.24sata.hr/1mw-9tpmWOpjJtNAXyixSTmi9mg=/1200x800/smart/media/images/src/20150938/1794242780bcb9bd8db1d818d2877ba6.jpg");
            }
            else if (cB_1.SelectedItem == "Psi")
            {
                pB_cB.Load("https://radio-mreznica.hr/wp-content/uploads/2023/08/Mango-1-1024x612.jpg");
            }
            else if (cB_1.SelectedItem == "Ptice")
            {
                pB_cB.Load("https://www.skole.hr/wp-content/uploads/2022/11/sjenica.jpg");
            }
            else if (cB_1.SelectedItem == "Kornjace")
            {
                pB_cB.Load("https://zoo.hr/wp-content/uploads/2019/05/%C4%8Dan%C4%8Dara-Testudo-hermanni-1620x1080.jpg");
            }
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void pictureBox2_Click(object sender, EventArgs e)
        {

        }

        private void lB_1_SelectedIndexChanged(object sender, EventArgs e)
        {
            string link = lB_1.SelectedItem as string;
            if (lB_1.SelectedItem=="Mclaren Senna")
            {
                pB_Auti.Load("https://mclaren.scene7.com/is/image/mclaren/McLaren-Senna-VPdrive-Silverstone-04:crop-4x3?wid=1920&hei=1440");
            }
            else if (lB_1.SelectedItem == "Mclaren Senna GTR") 
            {
                pB_Auti.Load("https://mclaren.scene7.com/is/image/mclaren/Senna-GTR-Extreme-1200x1200:crop-4x3?wid=1920&hei=1440");
            }
            else if (lB_1.SelectedItem == "Mclaren P1")
            {
                pB_Auti.Load("https://mclaren.scene7.com/is/image/mclaren/McLaren%20P1%20GTR%20front%203_4:crop-3x1?wid=1920&hei=640");
            }
            else if (lB_1.SelectedItem == "Mclaren F1")
            {
                pB_Auti.Load("https://mclaren.scene7.com/is/image/mclaren/MSO-Heritage-1920x1080:crop-16x9?wid=1920&hei=1080");
            }
            else if(lB_1.SelectedItem == "Mclaren Artura")
            {
                pB_Auti.Load("https://mclaren.scene7.com/is/image/mclaren/Hero1:crop-3x1?wid=1920&hei=640");
            }
            if (lB_1.SelectedItem == link)
            {
                pB_Auti.Load(link);
            }

        }

        private void rB_2_CheckedChanged(object sender, EventArgs e)
        {
            pB_Auti.SizeMode = PictureBoxSizeMode.StretchImage;
        }

        private void rB_3_CheckedChanged(object sender, EventArgs e)
        {
            pB_Auti.SizeMode = PictureBoxSizeMode.CenterImage;
        }

        private void rB_4_CheckedChanged(object sender, EventArgs e)
        {
            pB_Auti.SizeMode = PictureBoxSizeMode.Zoom;
        }

        private void rB_5_CheckedChanged(object sender, EventArgs e)
        {
            pB_Auti.SizeMode = PictureBoxSizeMode.AutoSize;
        }

        private void b_1_Click(object sender, EventArgs e)
        {
            lB_1.Items.Add(tB_1.Text);
        }
    }
}















using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace David1212
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            pB_Auti.SizeMode = PictureBoxSizeMode.Normal;
         }

        private void cB_1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (cB_1.SelectedItem == "Macke")
            {
                pB_cB.Load("https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSV7NPa0Z2SbwLgNGQgpXo86hOQjx3W-LP-ng&s");
            }
            else if (cB_1.SelectedItem == "Majmuni")
            {
                pB_cB.Load("https://img.24sata.hr/1mw-9tpmWOpjJtNAXyixSTmi9mg=/1200x800/smart/media/images/src/20150938/1794242780bcb9bd8db1d818d2877ba6.jpg");
            }
            else if (cB_1.SelectedItem == "Psi")
            {
                pB_cB.Load("https://radio-mreznica.hr/wp-content/uploads/2023/08/Mango-1-1024x612.jpg");
            }
            else if (cB_1.SelectedItem == "Ptice")
            {
                pB_cB.Load("https://www.skole.hr/wp-content/uploads/2022/11/sjenica.jpg");
            }
            else if (cB_1.SelectedItem == "Kornjace")
            {
                pB_cB.Load("https://zoo.hr/wp-content/uploads/2019/05/%C4%8Dan%C4%8Dara-Testudo-hermanni-1620x1080.jpg");
            }
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void pictureBox2_Click(object sender, EventArgs e)
        {

        }

        private void lB_1_SelectedIndexChanged(object sender, EventArgs e)
        {
            string link = lB_1.SelectedItem as string;
            if (lB_1.SelectedItem=="Mclaren Senna")
            {
                pB_Auti.Load("https://mclaren.scene7.com/is/image/mclaren/McLaren-Senna-VPdrive-Silverstone-04:crop-4x3?wid=1920&hei=1440");
            }
            else if (lB_1.SelectedItem == "Mclaren Senna GTR") 
            {
                pB_Auti.Load("https://mclaren.scene7.com/is/image/mclaren/Senna-GTR-Extreme-1200x1200:crop-4x3?wid=1920&hei=1440");
            }
            else if (lB_1.SelectedItem == "Mclaren P1")
            {
                pB_Auti.Load("https://mclaren.scene7.com/is/image/mclaren/McLaren%20P1%20GTR%20front%203_4:crop-3x1?wid=1920&hei=640");
            }

            else if (lB_1.SelectedItem == "Mclaren F1")
            {
                pB_Auti.Load("https://mclaren.scene7.com/is/image/mclaren/MSO-Heritage-1920x1080:crop-16x9?wid=1920&hei=1080");
            }
            else if(lB_1.SelectedItem == "Mclaren Artura")
            {
                pB_Auti.Load("https://mclaren.scene7.com/is/image/mclaren/Hero1:crop-3x1?wid=1920&hei=640");
            }
            else if (lB_1.SelectedItem == link)
            {
                pB_Auti.Load(link);
            }

        }

        private void rB_2_CheckedChanged(object sender, EventArgs e)
        {
            pB_Auti.SizeMode = PictureBoxSizeMode.StretchImage;
        }

        private void rB_3_CheckedChanged(object sender, EventArgs e)
        {
            pB_Auti.SizeMode = PictureBoxSizeMode.CenterImage;
        }

        private void rB_4_CheckedChanged(object sender, EventArgs e)
        {
            pB_Auti.SizeMode = PictureBoxSizeMode.Zoom;
        }

        private void rB_5_CheckedChanged(object sender, EventArgs e)
        {
            pB_Auti.SizeMode = PictureBoxSizeMode.AutoSize;
        }

        private void b_1_Click(object sender, EventArgs e)
        {
            lB_1.Items.Add(tB_1.Text);
        }

        private void contextMenuStrip1_Opening(object sender, CancelEventArgs e)
        {
           
        }

        private void menuStrip1_ItemClicked(object sender, ToolStripItemClickedEventArgs e)
        {
          
        }

        private void oProgramuToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("David Jambrošić");
        }

        private void zatvoriToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void obrisiToolStripMenuItem_Click(object sender, EventArgs e)
        {
            var tsItem = (ToolStripMenuItem)sender;
            var cms = (ContextMenuStrip)tsItem.Owner;
            ((ListBox)cms.SourceControl).Items.Clear();
            if (cms.SourceControl == lB_1)
            {
                lB_1.Items.Remove(1);
            }
            if (cms.SourceControl == tB_1)
            {
                tB_1.Text.Remove(1);
            }
        }
    }
}



































using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace David1212
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            pB_Auti.SizeMode = PictureBoxSizeMode.Normal;
         }

        private void cB_1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (cB_1.SelectedItem == "Macke")
            {
                pB_cB.Load("https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSV7NPa0Z2SbwLgNGQgpXo86hOQjx3W-LP-ng&s");
            }
            else if (cB_1.SelectedItem == "Majmuni")
            {
                pB_cB.Load("https://img.24sata.hr/1mw-9tpmWOpjJtNAXyixSTmi9mg=/1200x800/smart/media/images/src/20150938/1794242780bcb9bd8db1d818d2877ba6.jpg");
            }
            else if (cB_1.SelectedItem == "Psi")
            {
                pB_cB.Load("https://radio-mreznica.hr/wp-content/uploads/2023/08/Mango-1-1024x612.jpg");
            }
            else if (cB_1.SelectedItem == "Ptice")
            {
                pB_cB.Load("https://www.skole.hr/wp-content/uploads/2022/11/sjenica.jpg");
            }
            else if (cB_1.SelectedItem == "Kornjace")
            {
                pB_cB.Load("https://zoo.hr/wp-content/uploads/2019/05/%C4%8Dan%C4%8Dara-Testudo-hermanni-1620x1080.jpg");
            }
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void pictureBox2_Click(object sender, EventArgs e)
        {

        }

        private void lB_1_SelectedIndexChanged(object sender, EventArgs e)
        {
            string link = lB_1.SelectedItem as string;
            if (lB_1.SelectedItem=="Mclaren Senna")
            {
                pB_Auti.Load("https://mclaren.scene7.com/is/image/mclaren/McLaren-Senna-VPdrive-Silverstone-04:crop-4x3?wid=1920&hei=1440");
            }
            else if (lB_1.SelectedItem == "Mclaren Senna GTR") 
            {
                pB_Auti.Load("https://mclaren.scene7.com/is/image/mclaren/Senna-GTR-Extreme-1200x1200:crop-4x3?wid=1920&hei=1440");
            }
            else if (lB_1.SelectedItem == "Mclaren P1")
            {
                pB_Auti.Load("https://mclaren.scene7.com/is/image/mclaren/McLaren%20P1%20GTR%20front%203_4:crop-3x1?wid=1920&hei=640");
            }

            else if (lB_1.SelectedItem == "Mclaren F1")
            {
                pB_Auti.Load("https://mclaren.scene7.com/is/image/mclaren/MSO-Heritage-1920x1080:crop-16x9?wid=1920&hei=1080");
            }
            else if(lB_1.SelectedItem == "Mclaren Artura")
            {
                pB_Auti.Load("https://mclaren.scene7.com/is/image/mclaren/Hero1:crop-3x1?wid=1920&hei=640");
            }
            else if (lB_1.SelectedItem == link)
            {
                pB_Auti.Load(link);
            }

        }

        private void rB_2_CheckedChanged(object sender, EventArgs e)
        {
            pB_Auti.SizeMode = PictureBoxSizeMode.StretchImage;
        }

        private void rB_3_CheckedChanged(object sender, EventArgs e)
        {
            pB_Auti.SizeMode = PictureBoxSizeMode.CenterImage;
        }

        private void rB_4_CheckedChanged(object sender, EventArgs e)
        {
            pB_Auti.SizeMode = PictureBoxSizeMode.Zoom;
        }

        private void rB_5_CheckedChanged(object sender, EventArgs e)
        {
            pB_Auti.SizeMode = PictureBoxSizeMode.AutoSize;
        }

        private void b_1_Click(object sender, EventArgs e)
        {
            lB_1.Items.Add(tB_1.Text);
        }

        private void contextMenuStrip1_Opening(object sender, CancelEventArgs e)
        {
           
        }

        private void menuStrip1_ItemClicked(object sender, ToolStripItemClickedEventArgs e)
        {
          
        }

        private void oProgramuToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("David Jambrošić");
        }

        private void zatvoriToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void obrisiToolStripMenuItem_Click(object sender, EventArgs e)
        {
            var tsItem = (ToolStripMenuItem)sender;
            var cms = (ContextMenuStrip)tsItem.Owner;
            if (cms.SourceControl == lB_1)
            {
                ((ListBox)cms.SourceControl).Items.Clear();
            }
            if (cms.SourceControl == cB_1)
            {
                ((System.Windows.Forms.ComboBox)cms.SourceControl).Items.Clear();
            }
        }
    }
}
















using System;
using System.IO;
using System.Windows.Forms;

namespace AAAAA
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            string Direktorij = @"C:\Users\ucenik\Documents\3.RT\GUI\AAAAA\AAAAA\bin";

                string[] directories = Directory.GetDirectories(Direktorij);
                foreach (string directory in directories)
                {
                    string directoryName = Path.GetFileName(directory);
                    lB_1.Items.Add(directoryName);
                }
        }

        private void b_mapa_Click(object sender, EventArgs e)
        {
            string Direktorij = @"C:\Users\ucenik\Documents\3.RT\GUI\AAAAA\AAAAA\bin";
            string fullPath = Path.Combine(Direktorij, tB_mapa.Text);

            try
            {
                Directory.CreateDirectory(fullPath);
                lB_1.Items.Add(tB_mapa.Text);
                
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Error creating directory: {ex.Message}", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void label2_Click(object sender, EventArgs e)
        {
        }

        private void b_dat_Click(object sender, EventArgs e)
        {
            string Direktorij = @"C:\Users\ucenik\Documents\3.RT\GUI\AAAAA\AAAAA\bin";
            string fullPath = Path.Combine(Direktorij, tB_mapa.Text);

            try
            {
                Directory.Delete(fullPath);
                lB_1.Items.Remove(tB_dat.Text);

            }
            catch (Exception ex)
            {
                MessageBox.Show($"Error creating directory: {ex.Message}", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void b_pr_Click(object sender, EventArgs e)
        {
            string Direktorij = @"C:\Users\ucenik\Documents\3.RT\GUI\AAAAA\AAAAA\bin";
            string fullPath1 = Path.Combine(Direktorij, tB_pr1.Text);
            string Direktorij2 = @"C:\Users\ucenik\Documents\3.RT\GUI\AAAAA\AAAAA\bin\";
            string fullPath2 = Path.Combine(Direktorij2, tB_pr2.Text);
            
            try
            {
                Directory.Move(fullPath1,fullPath2);
                
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Error creating directory: {ex.Message}", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void tB_pr2_TextChanged(object sender, EventArgs e)
        {

        }

        private void lB_1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}





