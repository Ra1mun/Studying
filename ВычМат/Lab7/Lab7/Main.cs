using System;
using System.IO;
using System.Linq;
using static Lab7.MatrixExtension;

namespace Lab7
{
    internal class Program
    {
        private static int _size;
        private static double[,] _identity;
        public static void Main(string[] args)
        {
            var matrixA = ReadFile("data.txt");
            var matrixAt = MatrixTranspose(matrixA);
            matrixA = MultiplyMatrix(matrixA, matrixAt);
            var matrixS = _identity;
            
            Console.WriteLine("Преобразованная матрица:");
            ShowMatrix(matrixS);
            
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
            _identity = new double[_size, _size];
            for (int i = 0; i < _size; i++)
            {
                _identity[i, i] = 1;
            }
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