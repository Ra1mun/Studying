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

        private static bool Check(Matrix matrixA, double e = e-10)
        {
            
        }
    }
}