namespace Lab7
{
    public class DanilevskiyMethod
    {
        private void Fernebius(double[,] matrix, int size, out double[,] matrixF, out double[,] matrixS)
        {
            matrixF = matrix;
            for (int i = 0; i < _size - 1; i++)
            {
                var matrixM = _identity;
                for (int j = 0; j < _size; j++)
                {
                    matrixM[_size - 2 - i, j] = f[_size - 1 - i, j];
                }
                f = MultiplyMatrix(matrixM, f);
                f = MultiplyMatrix(f, matrixM);
                matrixS = MultiplyMatrix(matrixS, InverseMatrix(matrixM));
            }
        }
    }
}