using Lab5.Source;
using Microsoft.VisualBasic;
using System.Diagnostics;
using System.Drawing.Text;
using System.Security.Cryptography.Xml;

namespace Lab5
{
    public partial class Form1 : Form
    {
        private float _nearbyValue;
        private double _a;
        private double _b;
        private double _step;

        public Form1()
        {
            InitializeComponent();
        }

        private void IntervalButton_Click(object sender, EventArgs e)
        {
            IntervalListBox.ClearSelected();
            IntervalMethod();

        }

        private void MethodButton_Click(object sender, EventArgs e)
        {
            MethodListBox.ClearSelected();
            Method2ListBox.ClearSelected();

            for (int i = 0; i <= 3; i++)
            {
                var eps = 0.01 * Math.Pow(0.1, i);
                ModifyNewthonMethod(Convert.ToDouble(NearbyValueTextBox.Text), eps);
                NewthonMethod(Convert.ToDouble(NearbyValueTextBox.Text), eps);
            }

        }

        private void ConvergantButton_Click(object sender, EventArgs e)
        {
            ConvergantListBox.ClearSelected();
            ConvergantListBox.Items.Add($"Сходимость: {Convergant(_a, _b, _nearbyValue)}");
            ConvergantListBox.Items.Add($"Оценка точности: {CalculateAccureacy(_nearbyValue, MinFunction(_a, _b, _step))}");
        }

        private void IntervalMethod()
        {
            var functionHolder = new Source.FunctionHolder();
            var start = Convert.ToDouble(StartIntervalTextBox.Text);
            var end = Convert.ToDouble(EndIntervalTextBox.Text);
            var step = Convert.ToDouble(StepIntervalTextBox.Text);
            var eps = 0.000001f;
            var currentFunction = functionHolder.GetFunction(start + step);
            var previousFunction = functionHolder.GetFunction(start);
            for (var i = start + 2 * step; i < end; i = i + step)
            {
                if (currentFunction * previousFunction < 0)
                {
                    IntervalListBox.Items.Add(i);
                }

                previousFunction = currentFunction;
                currentFunction = functionHolder.GetFunction(i);
            }
            _a = start; _b = end; _step = step;
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
            _nearbyValue = x1;
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