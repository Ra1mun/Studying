using System;

namespace Lab6
{
    public class Matrix
    {
        public int Iteration { get; set; }
        
        private double[][] _matrix;
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
            _n = matrix.GetColumnLength();
            _m = matrix.GetRowLength();
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

        public int GetColumnLength()
        {
            return _n;
        }
        
        public int GetRowLength()
        {
            return _m;
        }
        
        
    }
}