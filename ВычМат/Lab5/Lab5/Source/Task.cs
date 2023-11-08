namespace Lab5.Source
{
    public class Task
    {
        public float GetFunction(double x)
        {
            return 2.2f - (float)Math.Pow(2, x);
        }

        public float GetDifferential(double x)
        {
            var diff = 0.000001f;
            return (GetFunction(x + diff) - GetFunction(x - diff)) / (2 * diff);
        }
    }
}
