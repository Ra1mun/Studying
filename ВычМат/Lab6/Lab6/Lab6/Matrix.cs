using System;

namespace Lab6
{
    public class Matrix
    {
        public static int Iteration { get; private set; }
        
        private readonly double[][] _matrix;
        private readonly int _m;
        private readonly int _n;

        public Matrix()
        {
            _n = 0;
            _m = 0;
            _matrix = null;
        }
        
        public Matrix(int n)
        {
            _n = n;
            _m = n;
            _matrix = new double[n][];
            for (int i = 0; i < n; i++)
            {
                _matrix[i] = new double[n];
            }
        }
        
        public Matrix(int n, int m)
        {
            _n = n;
            _m = m;
            _matrix = new double[n][];
            for (int i = 0; i < n; i++)
            {
                _matrix[i] = new double[m];
            }
        }

        public Matrix(Matrix matrix)
        {
            _n = matrix.GetMatrixColumnLength();
            _m = matrix.GetMatrixRowLength();
            _matrix = new double[_n][];
            
            for (int i = 0; i < _n; ++i)
            {
                _matrix[i] = new double[_m];
                for(int j = 0; j < _m;j++)
                {
                    _matrix[i][j] = matrix.GetElement(i, j);
                }
            }
        }

        public double[][] GetArrayMatrix()
        {
            return _matrix;
        }
        
        public double GetElement(int i, int j)
        {
            if (i < _n && i > -1 && j < _m && j > -1)
            {
                return _matrix[i][j];
            }
            
            return 0;
        }
        
        public void SetElement(int i, int j, double value)
        {
            if (i < _n && j < _m && i > -1 && j > -1)
            {
                _matrix[i][j] = value;
            }
        }

        public int GetMatrixColumnLength()
        {
            return _n;
        }
        
        public int GetMatrixRowLength()
        {
            return _m;
        }
        
        public void MatrixTranspose()
        {
            if (_n != _m)
            {
                return;
            }
            
            for(int i = 0; i < _n; i++)
            {
                for(int j = 0; j < _m; j++)
                {
                    (_matrix[i][j], _matrix[j][i]) = (_matrix[j][i], _matrix[i][j]);
                }
            }
        }

        public Matrix MatrixDecompose(Matrix matrix,
            int n, int m, out Matrix C)
        {
            if (n != m)
            {
                C = null;
                return null;
            }
            
            C = new Matrix(n);
            var B = new Matrix(n, m);
            
            for (int i = 0; i < n; ++i)
            {
                B.SetElement(i,0, matrix.GetElement(i, 0));
                C.SetElement(i,0, matrix.GetElement(0, i) / B.GetElement(0, 0));
                Iteration++;
            }
            for(int i = 0; i< n;++i)
            {
                for(int j = 0; j<n;++j)
                {
                    double sum1 = 0;
                    double sum2 = 0;
                    
                    if((j>0)&&(i>=j))
                    {
                        for(int k=0;k < j;++k)
                        {
                            sum1 += B.GetElement(i, k) * C.GetElement(k, j);
                            Iteration++;
                        }
                        B.SetElement(i, j, matrix.GetElement(i, j) - sum1);
                    }
                    if ((i > 0) && (j >= i))
                    {
                        C.SetElement(i, j, (1 / B.GetElement(i, i)) * (matrix.GetElement(i, j) - sum2));
                    }
                    
                    Iteration++;
                }
            }
            return B;
        }

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