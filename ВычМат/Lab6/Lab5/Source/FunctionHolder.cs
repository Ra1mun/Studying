namespace Lab5.Source
{
    public class FunctionHolder
    {
        public float GetFunction(double x)
        {
            return (float)(x*x - 4);
        }

        public float GetDifferential(float x)
        {
            var diff = 0.000001f;
            return (GetFunction(x + diff) - GetFunction(x - diff)) / (2 * diff);
        }

        public float Get2Differential(float x)
        {
            var diff = 0.000001f;
            return (GetDifferential(x + diff) - GetDifferential(x - diff)) / (2 * diff);
        }
    }
}
