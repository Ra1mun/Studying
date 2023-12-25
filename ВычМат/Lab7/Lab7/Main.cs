using System;
using System.IO;
using System.Linq;
using static Lab7.MatrixExtension;

namespace Lab7
{
    internal class Program
    {
        private static int _size;
        public static void Main(string[] args)
        {
            var matrixA = ReadFile("data.txt");
            var matrixS = Identity(_size);
            var f = matrixA;
            for (int i = 1; i < _size; i++)
            {
                var element = f[_size - i, _size - 1 - i];
                if (element == 0)
                {
                    continue;
                }

                var matrixM = Identity(_size);
                
                for (int j = 0; j < _size; j++)
                {
                    if(j == _size - 1 - i)
                    {
                        matrixM[_size - 1 - i, j] = 1 / element;
                    }
                    else
                    {
                        matrixM[_size - 1 - i, j] = (-1)* (f[_size - i, j] / element);   
                    }
                    
                }
                ShowMatrix(matrixM);
                f = MultiplyMatrix(InverseMatrix(matrixM), f);
                f = MultiplyMatrix(f, matrixM);
                Console.WriteLine("---------");
                matrixS = MultiplyMatrix(matrixS, matrixM);
            }

            Console.WriteLine("Преобразованная матрица:");
            var test = MultiplyMatrix(InverseMatrix(matrixS), matrixA);
            test = MultiplyMatrix(test, matrixS);
            ShowMatrix(test);
            Console.ReadLine();
            
        }
        private static double[,] ReadFile(string source)
        {
            var infile = new StreamReader(source);
            var line = infile.ReadLine();
            if (line == null)
            {
                return null;
            }
            
            var nums = line.Split().Select(Convert.ToDouble).ToArray();
            _size = (int)nums[0];
            var result = new double[_size, _size];
            for (int i = 0; i < _size; i++)
            {
                var str = infile.ReadLine();
                if (str == null)
                {
                    continue;
                }
                
                var values = str.Split().Select(Convert.ToDouble).ToArray();
                
                for (int j = 0; j < _size; j++)
                {

                    result[i, j] = values[j];
                }
            }

            return result;
        }

        private static void ShowMatrix(double[,] matrix)
        {
            int size = (int) Math.Sqrt(matrix.Length);
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < _size; j++)
                {
                    Console.Write(matrix[i, j] + " ");
                }
                Console.WriteLine();
            }
        }
        
        private static bool Check(double[ , ] matrixA, double e = 1e-8)
        {
            return false;
        }
    }
}