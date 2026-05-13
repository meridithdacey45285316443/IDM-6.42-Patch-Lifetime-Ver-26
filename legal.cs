using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Abdal_Security_Group_App.Core;

namespace Abdal_Security_Group_App
{
    public partial class Legal_disclaimer : Telerik.WinControls.UI.RadForm
    {
        public Legal_disclaimer()
        {
            InitializeComponent();
        }

        private void Legal_disclaimer_Load(object sender, EventArgs e)
        {
            legal_dis.Text = LegalDisclaimerWriter.Legal_disclaimer_content();
        }

        private void bt_Decline_Click(object sender, EventArgs e)
        {
            Process.GetCurrentProcess().Kill();
            Environment.Exit(0);
        }

        private void bt_Accept_Click(object sender, EventArgs e)
        {
            this.Hide();
            Main main_form = new Main();
            main_form.Show();
        }

        private void Legal_disclaimer_FormClosing(object sender, FormClosingEventArgs e)
        {
            Process.GetCurrentProcess().Kill();
            Environment.Exit(0);
        }
    }
}
