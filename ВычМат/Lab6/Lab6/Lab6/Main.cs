using System;
using System.IO;
using System.Linq;
using System.Net.Mime;
using static Lab6.Matrix;

namespace Lab6
{
    internal class Program
    {
        private static Matrix _a;
        private static Matrix _freeVector;
        private static Matrix _b;
        private static Matrix _c;
        private static Matrix _x;

        public static void Main(string[] args)
        {
            var matrixLength = ReadFile("data.txt");
            ShowMatrix(_a);
            _a.MatrixTranspose();
            ShowMatrix(_a);
            /*if (CheckAccuracy(_a))
            {
                _b = MatrixDecompos2(_a);
            }
            
            ShowMatrix(_a);
            ShowMatrix(_b);
            
            _b.MatrixTranspose();
            _c = _b;
            ShowMatrix(_c);
            _b.MatrixTranspose();
            
            var y = GausRevers2(_b.GetArrayMatrix(), _freeVector.GetArrayMatrix(), matrixLength.Item1);
            _x = GausRevers(_c.GetArrayMatrix(), y.GetArrayMatrix(), matrixLength.Item1);
            
            ShowResultMatrix(_x, matrixLength.Item1);
            
            if(_x!=null)
                Check(_x);*/
        }
        
        private static (int, int) ReadFile(string source)
        {
            var infile = new StreamReader(source);
            var line = infile.ReadLine();
            if (line == null)
            {
                return (0, 0);
            }
            
            var nums = line.Split().Select(Convert.ToDouble).ToArray();
            var n = (int)nums[0];
            var m = (int)nums[1];
            
            (int, int) result = (n, m);
            _a = new Matrix(n, m);
            _b = new Matrix(n, m);
            _c = new Matrix(n, m);
            _freeVector = new Matrix(n, 1);
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
                    _a.SetElement(i, j, values[j]);
                }
                _freeVector.SetElement(i, 0, n);
            }

            return result;
        }
        
        private static void ShowMatrix(Matrix matrix)
        {
            Console.WriteLine("---------------");
            for (int i = 0; i < matrix.GetMatrixColumnLength(); i++)
            {
                for (int j = 0; j < matrix.GetMatrixRowLength(); j++)
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
        
        private static void ShowMatrices()
        {
            ShowMatrix(_a);
            ShowMatrix(_b);
            ShowMatrix(_c);
        }
        private static void Check(Matrix x)
        {
            Matrix result = MultiplyMatrices(_a, x);
            
            Console.WriteLine("Check");
            ShowMatrix(result, result.GetMatrixColumnLength(), 1);
        }

        static void ShowResultMatrix(Matrix result, int n)
        {
            Console.WriteLine("Result: ");
            for(int i = 0; i < n; i++)
            {
                Console.WriteLine("x" + (i + 1) + "= " + result.GetElement(i, 0));
            }
        }
        private static bool CheckAccuracy(Matrix matrix)
        {
            if(matrix.GetMatrixColumnLength() != matrix.GetMatrixRowLength())
                return false;
            
            var test = ConvertToUpperTriangular(matrix);
            
            ShowMatrix(test);
            
            double e = 1;
            for(int i  = 0; i < test.GetMatrixColumnLength(); i++)
            {
                e *= test.GetElement(i, i);  
            }
            Console.WriteLine(e);
            
            return e != 0;
        }
    }
}