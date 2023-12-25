using System;

namespace Lab6
{
    public class MatrixExtesion
    {
        public static Matrix MatrixExpand(Matrix matrix, int newRowLength, int newColumnLength)
        {
            var rows = matrix.GetColumnLength();
            var cols = matrix.GetRowLength();
            var result = new Matrix(newRowLength, newColumnLength);
            
            for(int i=0;i < rows;i++)
            {
                for(int j=0;j<cols;j++)
                {
                    result.SetElement(i, j, matrix.GetElement(i, j));
                }
            }
            
            return result;
        }

        public static Matrix GausReversForX(double[][] matrix, double[][] vector, int n = 1)
        {
            var result = new Matrix(n, 1);
            for (int i = 0; i < n; ++i)
            {
                double sum = 0.0;
                for (int j = 0; j < i; ++j)
                {
                    sum += matrix[i][j] * result.GetElement(j, 0);
                }
                
                result.SetElement(i, 0, (vector[i][0] - sum) / matrix[i][i]);
            }
            return result;
        }

        public static Matrix GausReversForY(double[][] matrix, double[][] vector, int n)
        {
            var result = new Matrix(n, 1);
            var sum = 0.0;
            for (int i = n - 1; i >= 0; --i)
            {
                
                for (int j = i + 1; j < n; ++j)
                {
                    sum += matrix[i][j] * result.GetElement(j, 0);
                }
                result.SetElement(i, 0, (vector[i][0] - sum) / matrix[i][i]);
            }

            return result;
        }
        
        public static Matrix ConvertToUpperTriangular(Matrix matrix)
        {
            var rows = matrix.GetColumnLength();
            var cols = matrix.GetRowLength();
            var result = new Matrix(matrix);
            
            for (int k = 0; k < rows - 1; k++)
            {
                for (int i = k + 1; i < rows; i++)
                {
                    if(result.GetElement(i, i) != 0)
                    {
                        double factor = result.GetElement(i, k) / result.GetElement(k, k);

                        for (int j = k; j < cols; j++)
                        {
                            result.SetElement(i, j, 
                                    result.GetElement(i, j) - (factor * result.GetElement(k,j)));
                        }
                    }
                    else
                    {
                        return result;
                    }
                    
                }
            }
            
            return result;
        }
        
        
        public static Matrix MatrixDecompos2(Matrix matrix)
        {
            var n = matrix.GetColumnLength();
            var m = matrix.GetRowLength();
            var result = new Matrix(n, m);

            result.SetElement(0, 0, Math.Sqrt(matrix.GetElement(0, 0)));

            double temp = 0;
            for (int i = 0; i < n; i++)
            {

                for (int j = 0; j < m; j++)
                {
                    if (j > 1)
                    {
                        result.SetElement(1, j, matrix.GetElement(1, j) / result.GetElement(0, 0));
                    }

                    if (i > 0 && i < n)
                    {
                        temp = 0;
                        for (int k = 0; k < i; k++)
                        {
                            temp += Math.Pow(result.GetElement(k, i), 2);
                            matrix.Iteration++;
                        }
                        result.SetElement(i, i, Math.Sqrt(matrix.GetElement(i, i) - temp));
                    }

                    if (i < j)
                    {
                        for (int k = 0; k < i; k++)
                        {
                            matrix.Iteration++;
                            temp += result.GetElement(k, i) * result.GetElement(k, j);
                        }
                        result.SetElement(i, j, (matrix.GetElement(i, j) - temp) / result.GetElement(i, i));
                    }

                    if (i > j)
                    {
                        result.SetElement(i, j, 0);
                    }

                    matrix.Iteration++;
                }
            }

            return result;
        }

        public static void MatrixDecompos(Matrix matrix, out Matrix lower, out Matrix upper)
        {
            int n = matrix.GetColumnLength();

            lower = new Matrix(n);
            upper = new Matrix(n);

            for (int i = 0, j = n - 1; i < n; i++, j--)
            {
                for (int l = 0; l < i + 1; l++)
                {
                    lower.SetElement(l, 0 , matrix.GetElement(l, 0));
                    if (i > 0)
                    {
                        double sum = 0;
                        for (int k = 0; k < l; k++)
                        {
                            sum = lower.GetElement(i, k) * upper.GetElement(k, l) + sum;
                        }
                        lower.SetElement(i, l, matrix.GetElement(i, l) - sum);
                        sum = 0;
                    }
                    matrix.Iteration++;
                }
                for (int l = 0; l < j + 1; l++)
                {
                    upper.SetElement(0, l, matrix.GetElement(0, l) / lower.GetElement(0, 0));
                    if (j < n - 1)
                    {
                        for (int m = n - 1; m > i - 1; m--)
                        {
                            double sum = 0;
                            for (int k = 0; k < i; k++)
                            {
                                sum = lower.GetElement(i, k) * upper.GetElement(k, m) + sum;
                            }
                            upper.SetElement(i, m, (1 / lower.GetElement(i, i)) * (matrix.GetElement(i, m) - sum));
                            matrix.Iteration++;
                        }
                    }
                }
            }
        }
        
        public static Matrix MatrixTranspose(Matrix matrix)
        {
            var columnLength = matrix.GetColumnLength();
            var rowLength = matrix.GetRowLength();

            if (columnLength != rowLength)
            {
                return null;
            }

            var result = new Matrix(columnLength, rowLength);
            for (int i = 0; i < columnLength; i++)
            {
                for (int j = 0; j < rowLength; j++)
                {
                    result.SetElement(i, j, matrix.GetElement(j, i));
                }
            }

            return result;
        }

        public static double Determinant(Matrix matrix)
        {
            int n = (int)Math.Sqrt(matrix.GetColumnLength());
            double det = 0;

            if (n == 1)
            {
                det = matrix.GetElement(0, 0);
            }
            else if (n == 2)
            {
                det = matrix.GetElement(0,0) * matrix.GetElement(1,1) - matrix.GetElement(0,1) * matrix.GetElement(1,0);
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    var subMatrix = new Matrix(n - 1, n - 1);

                    for (int j = 1; j < n; j++)
                    {
                        for (int k = 0; k < n; k++)
                        {
                            if (k < i)
                            {
                                subMatrix.SetElement(j - 1, k, matrix.GetElement(j, k));
                            }
                            else if (k > i)
                            {
                                subMatrix.SetElement(j - 1, k - 1, matrix.GetElement(j, k));
                            }
                        }
                    }

                    det += Math.Pow(-1, i) * matrix.GetElement(0, i) * Determinant(subMatrix);
                }
            }

            return det;
        }
        public static Matrix GetMinor(Matrix matrix, int column, int row)
        {
            int n = matrix.GetColumnLength();
            var minor = new Matrix(n - 1, n - 1);

            for (int i = 0, k = 0; i < n; i++)
            {
                if (i == row)
                    continue;

                for (int j = 0, l = 0; j < n; j++)
                {
                    if (j == column)
                        continue;

                    minor.SetElement(k, l, matrix.GetElement(i, j));
                    l++;
                }

                k++;
            }

            return minor;
        }
    }
}