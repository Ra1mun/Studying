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
            IntervalListBox.Items.Add($"Сходимость : {Convergant}");
        }

        private void MethodButton_Click(object sender, EventArgs e)
        {
            MethodListBox.ClearSelected();
            Method2ListBox.ClearSelected();

            for (int i = 1; i <= 4; i++)
            {
                var eps = 0.01 * Math.Pow(0.1, i);
                ModifyNewthonMethod(Convert.ToDouble(NearbyValueTextBox.Text), eps);
                NewthonMethod(Convert.ToDouble(NearbyValueTextBox.Text), eps);
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

        private void NewthonMethod(double x, double eps)
        {
            var functionHolder = new Source.FunctionHolder();
            var x0 = (float)x;
            int iteration = 0;
            var x1 = x0 - (functionHolder.GetFunction(x0) / functionHolder.GetDifferential(x0));

            while (Math.Abs(x1 - x0) > eps)
            {
                x0 = x1;
                x1 -= (functionHolder.GetFunction(x0) / functionHolder.GetDifferential(x0));
                iteration++;
            }

            Method2ListBox.Items.Add($"Корень {x1}");
            Method2ListBox.Items.Add($"Количество итераций {iteration}");
            Method2ListBox.Items.Add($"Точность решения: {eps}");
            Method2ListBox.Items.Add($"Оценка точности: {CalculateAccureacy(x1, MinFunction(Convert.ToDouble(StartIntervalTextBox.Text),
                Convert.ToDouble(EndIntervalTextBox.Text), Convert.ToDouble(StepIntervalTextBox.Text)))}");
        }

        private bool Convergant(double a, double b, double x0)
        {
            var functionHolder = new FunctionHolder();
            return functionHolder.GetFunction(a) * functionHolder.GetFunction(b) < 0 &&
                functionHolder.GetFunction(x0) * functionHolder.Get2Differential((float)x0) > 0;
        }
        private float CalculateAccureacy(float root, float min)
        {
            var functionHodler = new FunctionHolder();
            return (float)Math.Abs(functionHodler.GetFunction(root)) / min;
        }

        private float MinFunction(double a, double b, double step)
        {
            var functionHolder = new FunctionHolder();
            var min = functionHolder.GetFunction(a);
            for (var i = a; i < b; i = i + step)
            {
                if (min > functionHolder.GetFunction(i))
                {
                    min = functionHolder.GetFunction(i);
                }
            }
            return min;
        }
    }
}