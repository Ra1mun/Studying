using System;
using System.IO;
using System.Linq;
using System.Net.Mime;
using static Lab6.Matrix;

namespace Lab6
{
    internal class Program
    {

        public static void Main(string[] args)
        {
            var matrixLength = ReadFile("data.txt", out Matrix a, out Matrix b, out Matrix c, out Matrix freeVector);
            ShowMatrix(a);
            ShowMatrix(freeVector);
            if (CheckAccuracy(a))
            {
                MatrixExtesion.MatrixDecompos(a, out b, out c);
                ShowMatrix(b);
                ShowMatrix(c);

                var y = MatrixExtesion.GausReversForY(b.GetArrayMatrix(), freeVector.GetArrayMatrix(), matrixLength.Item1);
                var x = MatrixExtesion.GausReversForX(c.GetArrayMatrix(), y.GetArrayMatrix(), matrixLength.Item1);

                ShowResultMatrix(x, matrixLength.Item1);

                if (x != null)
                    Check(x, a);

                var iters1 = a.Iteration;
                a.Iteration = 0;

                Console.WriteLine("Метод квадртаных корней");
                b = MatrixExtesion.MatrixDecompos2(a);
                ShowMatrix(b);
                c = MatrixExtesion.MatrixTranspose(b);
                ShowMatrix(c);


                var det = MatrixExtesion.Determinant(a);
                Console.WriteLine(det);

                if(det != 0)
                {
                    var y1 = MatrixExtesion.GausReversForY(c.GetArrayMatrix(), freeVector.GetArrayMatrix(), matrixLength.Item1);
                    var x1 = MatrixExtesion.GausReversForX(b.GetArrayMatrix(), y1.GetArrayMatrix(), matrixLength.Item1);

                    Console.WriteLine("Result");
                    ShowMatrix(x1);
                    Console.WriteLine($"Количество итераций Метода Халецкого: " + iters1);
                    Console.WriteLine($"Количество итераций Метода квадратных корней: " + a.Iteration);
                }
                
            }
            Console.ReadLine();
        }
        
        private static (int, int) ReadFile(string source, out Matrix matrixA, out Matrix matrixB, out Matrix matrixC, out Matrix freeVector)
        {
            var infile = new StreamReader(source);
            var line = infile.ReadLine();
            if (line == null)
            {
                matrixA = new Matrix();
                matrixB = new Matrix();
                matrixC = new Matrix();
                freeVector = new Matrix();
                return (0, 0);
            }
            
            var nums = line.Split().Select(Convert.ToDouble).ToArray();
            var n = (int)nums[0];
            var m = (int)nums[1];
            
            (int, int) result = (n, m);
            matrixA = new Matrix(n, m);
            matrixB = new Matrix(n, m);
            matrixC = new Matrix(n, m);
            freeVector = new Matrix(n, 1);
            for (int i = 0; i < n; i++)
            {
                var str = infile.ReadLine();
                if (str == null)
                {
                    continue;
                }
                
                var values = str.Split().Select(Convert.ToDouble).ToArray();
                
                for (int j = 0; j < m; j++)
                {
                    matrixA.SetElement(i, j, values[j]);
                }
                
                freeVector.SetElement(i, 0, values[n]);
            }

            return result;
        }
        
        private static void ShowMatrix(Matrix matrix)
        {
            Console.WriteLine("---------------");
            for (int i = 0; i < matrix.GetColumnLength(); i++)
            {
                for (int j = 0; j < matrix.GetRowLength(); j++)
                {
                    Console.Write(matrix.GetElement(i,j) + " ");
                }
                
                Console.WriteLine();
            }
            Console.WriteLine("---------------");
        }
        
        private static void ShowMatrix(Matrix matrix, int column, int rows = 0)
        {
            Console.WriteLine("---------------");
            for (int i = 0; i < column; i++)
            {
                for (int j = 0; j < rows; j++)
                {
                    Console.Write(matrix.GetElement(i,j) + " ");
                }
                
                Console.WriteLine();
            }
            Console.WriteLine("---------------");
        }
       
        
        private static void ShowResultMatrix(Matrix result, int n)
        {
            Console.WriteLine("Result: ");
            for(int i = 0; i < n; i++)
            {
                Console.WriteLine("x" + (i + 1) + "= " + result.GetElement(i, 0));
            }
        }
        
        private static bool Check(Matrix x, Matrix matrixA)
        {
            if (matrixA.GetRowLength() != x.GetColumnLength())
            {
                return false;
            }

            var aColumnLength = matrixA.GetColumnLength();
            var aRowLength = matrixA.GetRowLength();

            var result = new double[aColumnLength];


            for (int i = 0; i < aColumnLength; i++)
            {
                double element = 0;
                for (int j = 0; j < aRowLength; j++)
                {

                    element += matrixA.GetElement(i, j) * x.GetElement(j, 1);
                }
                result[i] = element;
            }

            for (int i = 0; i < aColumnLength; i++)
            {
                if (!IsClose(result[i], x.GetElement(i, 1)))
                {
                    return false;
                }
                Console.WriteLine(result[i]);
            }
            Console.WriteLine("Check");
            return true;
            
        }
        private static bool IsClose(double a, double b, double tolerance = 1e-8)
        {
            return Math.Abs(a - b) < tolerance;
        }


        private static bool CheckAccuracy(Matrix matrix)
        {
            if(matrix.GetColumnLength() != matrix.GetRowLength())
                return false;
            
            var test = MatrixExtesion.ConvertToUpperTriangular(matrix);
            
            ShowMatrix(test);
            
            double e = 1;
            for(int i  = 0; i < test.GetColumnLength(); i++)
            {
                e *= test.GetElement(i, i);  
            }
            Console.WriteLine(e);
            
            return e != 0;
        }

        public override string ToString()
        {
            return base.ToString();
        }

        public override bool Equals(object obj)
        {
            return base.Equals(obj);
        }

        public override int GetHashCode()
        {
            return base.GetHashCode();
        }
    }
}