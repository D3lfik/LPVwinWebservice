using System;
using System.Windows.Forms;
using YourWebServiceNameSpace;

namespace WindowsFormsApp
{
    public partial class MainForm : Form
    {
        private YourWebServiceProxy serviceProxy;

        public MainForm()
        {
            InitializeComponent();
            serviceProxy = new YourWebServiceProxy();
        }

        private void btnCallWebService_Click(object sender, EventArgs e)
        {
            try
            {
                // Call the web service method
                string result = serviceProxy.YourWebServiceMethod(parameter1, parameter2);

                // Process and display the result
                MessageBox.Show(result, "Web Service Result", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Error: {ex.Message}", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }
    }
}
