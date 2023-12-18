using System;

namespace Lab6
{
    public class MatrixExtesion
    {
        public static Matrix MatrixExpand(Matrix matrix, int newRowLength, int newColumnLength)
        {
            var rows = matrix.GetMatrixColumnLength();
            var cols = matrix.GetMatrixRowLength();
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

        public static Matrix GausRevers(double[][] matrix, double[][] vector, int n = 1)
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

        public static Matrix GausRevers2(double[][] matrix, double[][] vector, int n)
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
            var rows = matrix.GetMatrixColumnLength();
            var cols = matrix.GetMatrixRowLength();
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
        
        public static Matrix MultiplyMatrices(Matrix matrixA, Matrix matrixB)
        {
            if (matrixA.GetMatrixRowLength() != matrixB.GetMatrixColumnLength())
            {
                return null;
            }
            
            var aColumnLength = matrixA.GetMatrixColumnLength();
            var aRowLength = matrixA.GetMatrixRowLength();
            var bRowLength = matrixB.GetMatrixRowLength();

            var result = new Matrix(aColumnLength, bRowLength);
            for (int i = 0; i < aColumnLength; i++)
            {
                for (int j = 0; j < bRowLength; j++)
                {
                    for (int k = 0; k < aRowLength; k++)
                    {
                        double element;
                        element = result.GetElement(i, j) + matrixA.GetElement(i, k) * matrixB.GetElement(k, j);
                        result.SetElement(i, j, element);
                    }
                }
            }
            return result;
        }
        
        public static Matrix MatrixDecompos2(Matrix matrix)
        {
            var n = matrix.GetMatrixColumnLength();
            var m = matrix.GetMatrixRowLength();
            var result = new Matrix(n, m);

            result.SetElement(0, 0, Math.Sqrt(matrix.GetElement(0, 0)));
            
            double temp = 0;
            for(int i = 0;i < n; i++)
            {
                for(int j = 0;j < m; j++)
                {
                    if(j > 1)
                    {
                        result.SetElement(1, j, matrix.GetElement(1, j) / result.GetElement(0, 0));
                    }
                    
                    if(i>0 && i<n)
                    {
                        temp = 0;
                        for(int k = 0;k < i; k++)
                        {
                            temp += Math.Pow(result.GetElement(k, i), 2);
                            Iteration++;
                        }
                        result.SetElement(i, i, Math.Sqrt(matrix.GetElement(i, i) - temp));
                    }
                    
                    if(i<j)
                    {
                        for (int k = 0; k < i; k++)
                        {
                            Iteration++;
                            temp += result.GetElement(k, i) * result.GetElement(k, j);
                        }
                        result.SetElement(i, j, (matrix.GetElement(i, j) - temp) / result.GetElement(i, i));
                    }
                    
                    if(i>j)
                    {
                        result.SetElement(i, j, 0);
                    }
                    
                    Iteration++;
                }
            }
            return result;
        }
    }
}