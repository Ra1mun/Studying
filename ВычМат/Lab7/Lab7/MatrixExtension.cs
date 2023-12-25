using System;

namespace Lab7
{
    public static class MatrixExtension
    {
        public static double[,] MultiplyMatrix(double[,] matrix1, double[,] matrix2)
        {
            if (matrix1.Length != matrix2.Length)
            {
                return null;
            }

            var size = (int) Math.Sqrt(matrix1.Length);

            double[,] result = new double[size, size];

            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    double sum = 0;
                    for (int k = 0; k < size; k++)
                    {
                        sum += matrix1[i, k] * matrix2[k, j];
                    }
                    result[i, j] = sum;
                }
            }

            return result;
        }

        public static double[,] MatrixTranspose(double[,] matrix)
        {
            var size = (int)Math.Sqrt(matrix.Length);
            var result = new double[size, size];
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    result[i, j] = matrix[j, i];
                }
            }

            return result;
        }
        
        public static double[,] MoveColumnToEnd(double[,] matrix, int size, int column)
        {
            for (int i = 0; i < size; i++)
            {
                double temp = matrix[i, column];
                for (int j = column; j < size - 1; j++)
                {
                    matrix[i, j] = matrix[i, j + 1];
                }
                matrix[i, size - 1] = temp;
            }
            return matrix;
        }
        
        public static double[,] MoveColumnToIndex(double[,] matrix, int size, int column, int index)
        {
            for (int i = 0; i < size; i++)
            {
                double temp = matrix[i, size - 1 - column];
                for (int j = size - 1 - column; j > index; j--)
                {
                    matrix[i, j] = matrix[i, j - 1];
                }
                matrix[i, index] = temp;
            }
            return matrix;
        }

        public static double[,] InverseMatrix(double[,] matrix)
        {
            int n = (int) Math.Sqrt(matrix.Length);
            double[,] inverse = new double[n, n];
            double det = Determinant(matrix);

            if (det == 0)
            {
                throw new Exception("Matrix is not invertible.");
            }

            double[,] adjugate = Adjugate(matrix);

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    inverse[i, j] = adjugate[i, j] / det;
                }
            }

            return inverse;
        }

        private static double Determinant(double[,] matrix)
        {
            int n = (int) Math.Sqrt(matrix.Length);
            double det = 0;

            if (n == 2)
            {
                det = matrix[0, 0] * matrix[1, 1] - matrix[0, 1] * matrix[1, 0];
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    double[,] submatrix = new double[n - 1, n - 1];
                    for (int j = 1; j < n; j++)
                    {
                        for (int k = 0; k < n; k++)
                        {
                            if (k < i)
                            {
                                submatrix[j - 1, k] = matrix[j, k];
                            }
                            else if (k > i)
                            {
                                submatrix[j - 1, k - 1] = matrix[j, k];
                            }
                        }
                    }

                    det += Math.Pow(-1, i) * matrix[0, i] * Determinant(submatrix);
                }
            }

            return det;
        }

        private static double[,] Adjugate(double[,] matrix)
        {
            int n = (int)Math.Sqrt(matrix.Length);
            double[,] adjugate = new double[n, n];

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    double[,] submatrix = new double[n - 1, n - 1];
                    for (int k = 0; k < n - 1; k++)
                    {
                        for (int l = 0; l < n - 1; l++)
                        {
                            int x = k < i ? k : k + 1;
                            int y = l < j ? l : l + 1;
                            submatrix[k, l] = matrix[x, y];
                        }
                    }
                    adjugate[j, i] = Math.Pow(-1, i + j) * Determinant(submatrix);
                }
            }

            return adjugate;
        }

        public static double[,] Identity(int size)
        {
            var result = new double[size, size];
            for(int i = 0; i < size; i++)
            {
                result[i, i] = 1;
            }

            return result;
        }
    }
}