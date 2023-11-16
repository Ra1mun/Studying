using Lab5.Source;
using Microsoft.VisualBasic;
using System.Diagnostics;
using System.Drawing.Text;
using System.Security.Cryptography.Xml;

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

        private void MethodButton_Click(object sender, EventArgs e)
        {
            MethodListBox.ClearSelected();
            Method2ListBox.ClearSelected();

            for (int i = 1; i <= 4; i++)
            {
                var eps = 0.01 * Math.Pow(0.1, i);
                ModifyNewthonMethod(Convert.ToDouble(NearbyValueTextBox.Text), eps);
                IterationMethod(Convert.ToDouble(StartValuetextBox.Text), Convert.ToDouble(EndValueTextBox.Text), eps);
            }

        }

        private void ModifyNewthonMethod(double x, double eps)
        {
            var functionHolder = new Source.FunctionHolder();
            var x0 = (float)x;
            int iteration = 0;

            var functionx0 = functionHolder.GetDifferential(x0);
            var functionxn = functionHolder.GetFunction(x0);
            var x1 = x0 - (functionxn / functionx0);

            while (Math.Abs(x1 - x0) > eps)
            {
                x0 = x1;
                functionxn = functionHolder.GetFunction(x1);
                x1 -= (functionxn / functionx0);
                iteration++;
            }

            MethodListBox.Items.Add($"Корень {x1}");
            MethodListBox.Items.Add($"Количество итераций {iteration}");
            MethodListBox.Items.Add($"Точность решения: {eps}");
        }

        private void IterationMethod(double a, double b, double eps)
        {
            var functionHolder = new Source.FunctionHolder();
            var start = (float)a;
            var end = (float)b;
            int k = 0;
            if(functionHolder.GetFunction(start) * functionHolder.GetFunction(end) <= 0)
            {
                while (Math.Abs(start - end) > eps)
                {
                    var c = (start + end) / 2;
                    if (functionHolder.GetFunction(start) * functionHolder.GetFunction(c) < 0)
                    {
                        start = c;
                    }
                    else
                    {
                        end = c;
                    }
                    k++;
                }
            }
            var x1 = (start - end) / 2;

            Method2ListBox.Items.Add($"Корень {x1}");
            Method2ListBox.Items.Add($"Количество итераций {k}");
            Method2ListBox.Items.Add($"Точность решения: {eps}");
        }
    }
}