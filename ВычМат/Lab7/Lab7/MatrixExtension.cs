namespace Lab7
{
    public static class MatrixExtension
    {
        public static double[,] MultiplyMatrix(double[,] matrix1, double[,] matrix2, int size)
        {
            double[,] result = new double[size, size];
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    result[i, j] = 0;
                    for (int k = 0; k < size; k++)
                    {
                        result[i, j] += matrix1[i, k] * matrix2[k, j];
                    }
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

    }
}