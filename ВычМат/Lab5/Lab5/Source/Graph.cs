using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab5.Source
{
    public class Graph
    {
        //Пикселей в одном делении оси
        const int PIX_IN_ONE = 10;
        //Длина стрелки
        const int ARR_LEN = 5;
        //Масштаб
        const float SCALE = 2f;
        private readonly int _weight;
        private readonly int _height;
        private readonly float _step;
        private readonly FunctionHolder _functionHolder;
        private readonly PictureBox _pictureBox;
        private readonly Pen _pen;

        private int x0;
        private int y0;

        public Graph(int weight, int height, float step,
            FunctionHolder functionHolder, PictureBox pictureBox,
            Pen pen)
        {
            _functionHolder = functionHolder;
            _weight = weight;
            _height = height;

            _step = step;
            
            x0 = _weight / 2;
            y0 = _height / 2;

            _pictureBox = pictureBox;
            _pen = pen;
        }
        public void DrawGraph()
        {
            Graphics graphics = _pictureBox.CreateGraphics();
            graphics.TranslateTransform(x0, y0);
            graphics.ScaleTransform(SCALE, SCALE);
            DrawXAxis(graphics);
            DrawYAxis(graphics);
            DrawFunction(graphics);
        }
        private void DrawFunction(Graphics graphics)
        {
            var previous = new PointF(0, _functionHolder.GetFunction(0));
            for(var i = -100; i <= 30; i++)
            {
                var current = new PointF(i*_step, _functionHolder.GetFunction(i * _step));
                graphics.DrawLine(_pen, previous, current);
                previous = current;
            }
        }

        private void DrawXAxis(Graphics graphics)
        {
            var start = new Point(-x0, 0);
            var end = new Point(x0, 0);
            for (int i = PIX_IN_ONE; i < end.X - ARR_LEN; i += PIX_IN_ONE)
            {
                graphics.DrawLine(_pen, i, -1, i, 1);
                DrawText(new Point(i, 5), (i / PIX_IN_ONE).ToString(), graphics);
            }
            //Деления в отрицательном направлении оси
            for (int i = -PIX_IN_ONE; i > start.X; i -= PIX_IN_ONE)
            {
                graphics.DrawLine(_pen, i, -2, i, 2);
                DrawText(new Point(i, 5), (i / PIX_IN_ONE).ToString(), graphics);
            }
            //Ось
            graphics.DrawLine(_pen, start, end);
            //Стрелка
            graphics.DrawLines(_pen, GetArrow(start.X, start.Y, end.X, end.Y, ARR_LEN));
        }
        private void DrawYAxis(Graphics graphics)
        {
            var start = new Point(0, y0);
            var end = new Point(0, -y0);
            for (int i = -PIX_IN_ONE; i > end.Y + ARR_LEN; i -= PIX_IN_ONE)
            {
                graphics.DrawLine(_pen, -2, i, 2, i);
                DrawText(new Point(5, i), (-i / PIX_IN_ONE).ToString(), graphics, true);
            }
            //Ось
            graphics.DrawLine(_pen, start, end);
            //Стрелка
            graphics.DrawLines(_pen, GetArrow(start.X, start.Y, end.X, end.Y, ARR_LEN));
        }
        private void DrawText(Point point, string text, Graphics graphics, bool isYAxis = false)
        {
            FontFamily fontFamily = new FontFamily("Arial");
            var f = new Font(fontFamily, 6);
            var size = graphics.MeasureString(text, f);
            var pt = isYAxis
                ? new PointF(point.X + 1, point.Y - size.Height / 2)
                : new PointF(point.X - size.Width / 2, point.Y + 1);
            var rect = new RectangleF(pt, size);
            graphics.DrawString(text, f, Brushes.Black, rect);
        }

        private static PointF[] GetArrow(float x1, float y1, float x2, float y2, float len = 10, float width = 4)
        {
            PointF[] result = new PointF[3];
            //направляющий вектор отрезка
            var n = new PointF(x2 - x1, y2 - y1);
            //Длина отрезка
            var l = (float)Math.Sqrt(n.X * n.X + n.Y * n.Y);
            //Единичный вектор
            var v1 = new PointF(n.X / l, n.Y / l);
            //Длина стрелки
            n.X = x2 - v1.X * len;
            n.Y = y2 - v1.Y * len;
            result[0] = new PointF(n.X + v1.Y * width, n.Y - v1.X * width);
            result[1] = new PointF(x2, y2);
            result[2] = new PointF(n.X - v1.Y * width, n.Y + v1.X * width);
            return result;
        }
    }
}
