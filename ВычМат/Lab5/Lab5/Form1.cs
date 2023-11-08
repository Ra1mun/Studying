using Lab5.Source;
using Microsoft.VisualBasic;

namespace Lab5
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void CreateGraphicButton_Click(object sender, EventArgs e)
        {
            var graph = new Graph(GraphicBox.Size.Width, GraphicBox.Size.Height, 0.1f, new Source.Task(),
                GraphicBox, new Pen(Color.Black, 1f));

            graph.DrawGraph();
        }

        private void IntervalButton_Click(object sender, EventArgs e)
        {
            IntervalListBox.Items.Clear();
            var start = Convert.ToDouble(StartIntervalTextBox.Text);
            var end = Convert.ToDouble(EndIntervalTextBox.Text);
            var step = Convert.ToDouble(StepIntervalTextBox.Text);
            var task = new Source.Task();
            var currentFunction = task.GetFunction(start);
            var nextFunction = task.GetFunction(start + step);
            for(var i = start; i <= end - start; i++)
            {
                currentFunction = task.GetFunction(i);
                nextFunction = task.GetFunction(i + step);
                if ((currentFunction >= 0.0f && nextFunction < 0.0) ||
                   (currentFunction < 0.0f && nextFunction >= 0.0) ||
                   (currentFunction == float.Epsilon && nextFunction != float.Epsilon) ||
                   (currentFunction != float.Epsilon && nextFunction == float.Epsilon))
                    IntervalListBox.Items.Add($"{i} - {i + step}");
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {

        }
    }
}