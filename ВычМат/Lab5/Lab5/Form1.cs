using Lab5.Source;
using Microsoft.VisualBasic;
using System.Diagnostics;
using System.Drawing.Text;

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
            var graph = new Graph(GraphicBox.Size.Width, GraphicBox.Size.Height, 0.5f, new Source.FunctionHolder(),
                GraphicBox, new Pen(Color.Black, 1f));

            graph.DrawGraph();
        }

        private void IntervalButton_Click(object sender, EventArgs e)
        {
            IntervalListBox.Items.Clear();
            var functionHolder = new Source.FunctionHolder();
            var start = Convert.ToDouble(StartIntervalTextBox.Text);
            var end = Convert.ToDouble(EndIntervalTextBox.Text);
            var step = Convert.ToDouble(StepIntervalTextBox.Text);
            var eps = 0.000001f;
            var currentFunction = functionHolder.GetFunction(start + step);
            var previousFunction = functionHolder.GetFunction(start);
            for (var i = start + 2 * step; i < end; i = i + step)
            {
                if ((currentFunction > 0 && previousFunction < 0)
                    || (currentFunction < 0 && previousFunction > 0)
                    || (currentFunction == eps && previousFunction != eps)
                    || (currentFunction != eps && previousFunction == eps))
                {
                    IntervalListBox.Items.Add(i);
                }

                previousFunction = currentFunction;
                currentFunction = functionHolder.GetFunction(i);
            }
        }
        private void ShodButton_Click(object sender, EventArgs e)
        {
            ShodListBox.ClearSelected();
            Stopwatch stopwatch = new Stopwatch();
            double x0 = 3;
            double x1 = 5;
            double eps = float.Epsilon;
            int n = 0;
            var functionHolder = new Source.FunctionHolder();
            stopwatch.Start();
            while (Math.Abs(x1 - x0) > eps)
            {
                x1 = functionHolder.GetFunction(x0);
                x0 = x1;
                n++;
            }
            stopwatch.Stop();
            ShodListBox.Items.Add("сходится");
            ShodListBox.Items.Add($"Время: {stopwatch.ElapsedTicks} тиков");
        }

        private void MethodButton_Click(object sender, EventArgs e)
        {
            var functionHolder = new Source.FunctionHolder();
            var x0 = Convert.ToDouble(StartTextBox.Text);
            var eps = 0.000001f;
            int k = 0;
            var functionx0 = functionHolder.GetDifferential((float)x0);
            var functionxn = functionHolder.GetFunction(x0);
            var x1 = x0 - (functionxn / functionx0);

            while (Math.Abs(x1 - x0) > eps)
            {
                x0 = x1;
                functionxn = functionHolder.GetFunction(x1);
                x1 -= (functionxn / functionx0);
                k++;
            }
            MethodListBox.Items.Add($"Корень {x1}");
            MethodListBox.Items.Add($"Количество итераций {k}");
            MethodListBox.Items.Add($"Погрешность: {x1 - x0}");
        }


    }
}