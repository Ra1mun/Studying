namespace Lab5
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            IntervalLabel = new Label();
            StartIntervalTextBox = new TextBox();
            label1 = new Label();
            label2 = new Label();
            label3 = new Label();
            EndIntervalTextBox = new TextBox();
            StepIntervallabel = new Label();
            StepIntervalTextBox = new TextBox();
            NearbyValueLabel = new Label();
            NearbyValueTextBox = new TextBox();
            label8 = new Label();
            SolutionLabel = new Label();
            IntervalListBox = new ListBox();
            IntervalButton = new Button();
            SolutionButton = new Button();
            NewtonLabel = new Label();
            MethodListBox = new ListBox();
            Method2ListBox = new ListBox();
            NewthonMethodlabel = new Label();
            ConvergantListBox = new ListBox();
            button1 = new Button();
            ConvergantButton = new Button();
            SuspendLayout();
            // 
            // IntervalLabel
            // 
            IntervalLabel.AutoSize = true;
            IntervalLabel.Location = new Point(17, 50);
            IntervalLabel.Margin = new Padding(4, 0, 4, 0);
            IntervalLabel.Name = "IntervalLabel";
            IntervalLabel.Size = new Size(196, 25);
            IntervalLabel.TabIndex = 2;
            IntervalLabel.Text = "Проверка интервалов";
            // 
            // StartIntervalTextBox
            // 
            StartIntervalTextBox.Location = new Point(17, 130);
            StartIntervalTextBox.Margin = new Padding(4, 5, 4, 5);
            StartIntervalTextBox.Name = "StartIntervalTextBox";
            StartIntervalTextBox.Size = new Size(235, 31);
            StartIntervalTextBox.TabIndex = 3;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(17, 100);
            label1.Margin = new Padding(4, 0, 4, 0);
            label1.Name = "label1";
            label1.Size = new Size(0, 25);
            label1.TabIndex = 4;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(17, 100);
            label2.Margin = new Padding(4, 0, 4, 0);
            label2.Name = "label2";
            label2.Size = new Size(248, 25);
            label2.TabIndex = 5;
            label2.Text = "Введите начальное значение";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(263, 100);
            label3.Margin = new Padding(4, 0, 4, 0);
            label3.Name = "label3";
            label3.Size = new Size(241, 25);
            label3.TabIndex = 7;
            label3.Text = "Введите конечное значение";
            // 
            // EndIntervalTextBox
            // 
            EndIntervalTextBox.Location = new Point(263, 130);
            EndIntervalTextBox.Margin = new Padding(4, 5, 4, 5);
            EndIntervalTextBox.Name = "EndIntervalTextBox";
            EndIntervalTextBox.Size = new Size(235, 31);
            EndIntervalTextBox.TabIndex = 6;
            // 
            // StepIntervallabel
            // 
            StepIntervallabel.AutoSize = true;
            StepIntervallabel.Location = new Point(509, 100);
            StepIntervallabel.Margin = new Padding(4, 0, 4, 0);
            StepIntervallabel.Name = "StepIntervallabel";
            StepIntervallabel.Size = new Size(201, 25);
            StepIntervallabel.TabIndex = 9;
            StepIntervallabel.Text = "Введите значение шага";
            // 
            // StepIntervalTextBox
            // 
            StepIntervalTextBox.Location = new Point(509, 130);
            StepIntervalTextBox.Margin = new Padding(4, 5, 4, 5);
            StepIntervalTextBox.Name = "StepIntervalTextBox";
            StepIntervalTextBox.Size = new Size(235, 31);
            StepIntervalTextBox.TabIndex = 8;
            // 
            // NearbyValueLabel
            // 
            NearbyValueLabel.AutoSize = true;
            NearbyValueLabel.Location = new Point(17, 235);
            NearbyValueLabel.Margin = new Padding(4, 0, 4, 0);
            NearbyValueLabel.Name = "NearbyValueLabel";
            NearbyValueLabel.Size = new Size(284, 25);
            NearbyValueLabel.TabIndex = 11;
            NearbyValueLabel.Text = "Введите приближенное значение";
            // 
            // NearbyValueTextBox
            // 
            NearbyValueTextBox.Location = new Point(17, 265);
            NearbyValueTextBox.Margin = new Padding(4, 5, 4, 5);
            NearbyValueTextBox.Name = "NearbyValueTextBox";
            NearbyValueTextBox.Size = new Size(235, 31);
            NearbyValueTextBox.TabIndex = 10;
            // 
            // label8
            // 
            label8.AutoSize = true;
            label8.Location = new Point(606, 15);
            label8.Margin = new Padding(4, 0, 4, 0);
            label8.Name = "label8";
            label8.Size = new Size(149, 25);
            label8.TabIndex = 16;
            label8.Text = "Функция 2.2-2^x";
            // 
            // SolutionLabel
            // 
            SolutionLabel.AutoSize = true;
            SolutionLabel.Location = new Point(17, 195);
            SolutionLabel.Margin = new Padding(4, 0, 4, 0);
            SolutionLabel.Name = "SolutionLabel";
            SolutionLabel.Size = new Size(163, 25);
            SolutionLabel.TabIndex = 17;
            SolutionLabel.Text = "Решить уравнение";
            // 
            // IntervalListBox
            // 
            IntervalListBox.FormattingEnabled = true;
            IntervalListBox.ItemHeight = 25;
            IntervalListBox.Location = new Point(934, 100);
            IntervalListBox.Margin = new Padding(4, 5, 4, 5);
            IntervalListBox.Name = "IntervalListBox";
            IntervalListBox.Size = new Size(281, 204);
            IntervalListBox.TabIndex = 18;
            // 
            // IntervalButton
            // 
            IntervalButton.Location = new Point(754, 125);
            IntervalButton.Margin = new Padding(4, 5, 4, 5);
            IntervalButton.Name = "IntervalButton";
            IntervalButton.Size = new Size(171, 43);
            IntervalButton.TabIndex = 19;
            IntervalButton.Text = "Поиск интервала";
            IntervalButton.UseVisualStyleBackColor = true;
            IntervalButton.Click += IntervalButton_Click;
            // 
            // SolutionButton
            // 
            SolutionButton.Location = new Point(263, 265);
            SolutionButton.Margin = new Padding(4, 5, 4, 5);
            SolutionButton.Name = "SolutionButton";
            SolutionButton.Size = new Size(171, 38);
            SolutionButton.TabIndex = 20;
            SolutionButton.Text = "Решить уравнение";
            SolutionButton.UseVisualStyleBackColor = true;
            SolutionButton.Click += MethodButton_Click;
            // 
            // NewtonLabel
            // 
            NewtonLabel.AutoSize = true;
            NewtonLabel.Location = new Point(17, 327);
            NewtonLabel.Margin = new Padding(4, 0, 4, 0);
            NewtonLabel.Name = "NewtonLabel";
            NewtonLabel.Size = new Size(320, 25);
            NewtonLabel.TabIndex = 27;
            NewtonLabel.Text = "Модифицированный метод Ньютона";
            // 
            // MethodListBox
            // 
            MethodListBox.FormattingEnabled = true;
            MethodListBox.ItemHeight = 25;
            MethodListBox.Location = new Point(17, 365);
            MethodListBox.Margin = new Padding(4, 5, 4, 5);
            MethodListBox.Name = "MethodListBox";
            MethodListBox.Size = new Size(303, 304);
            MethodListBox.TabIndex = 32;
            // 
            // Method2ListBox
            // 
            Method2ListBox.FormattingEnabled = true;
            Method2ListBox.ItemHeight = 25;
            Method2ListBox.Location = new Point(330, 365);
            Method2ListBox.Margin = new Padding(4, 5, 4, 5);
            Method2ListBox.Name = "Method2ListBox";
            Method2ListBox.Size = new Size(303, 304);
            Method2ListBox.TabIndex = 33;
            // 
            // NewthonMethodlabel
            // 
            NewthonMethodlabel.AutoSize = true;
            NewthonMethodlabel.Location = new Point(330, 327);
            NewthonMethodlabel.Margin = new Padding(4, 0, 4, 0);
            NewthonMethodlabel.Name = "NewthonMethodlabel";
            NewthonMethodlabel.Size = new Size(144, 25);
            NewthonMethodlabel.TabIndex = 34;
            NewthonMethodlabel.Text = "Метод Ньютона";
            // 
            // ConvergantListBox
            // 
            ConvergantListBox.FormattingEnabled = true;
            ConvergantListBox.ItemHeight = 25;
            ConvergantListBox.Location = new Point(662, 365);
            ConvergantListBox.Name = "ConvergantListBox";
            ConvergantListBox.Size = new Size(251, 304);
            ConvergantListBox.TabIndex = 35;
            // 
            // button1
            // 
            button1.Location = new Point(0, 0);
            button1.Name = "button1";
            button1.Size = new Size(112, 34);
            button1.TabIndex = 36;
            button1.Text = "button1";
            button1.UseVisualStyleBackColor = true;
            // 
            // ConvergantButton
            // 
            ConvergantButton.Location = new Point(662, 316);
            ConvergantButton.Name = "ConvergantButton";
            ConvergantButton.Size = new Size(237, 36);
            ConvergantButton.TabIndex = 37;
            ConvergantButton.Text = "Посчитать сходимость";
            ConvergantButton.UseVisualStyleBackColor = true;
            ConvergantButton.Click += button2_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(10F, 25F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = SystemColors.GradientInactiveCaption;
            ClientSize = new Size(1227, 692);
            Controls.Add(ConvergantButton);
            Controls.Add(button1);
            Controls.Add(ConvergantListBox);
            Controls.Add(NewthonMethodlabel);
            Controls.Add(Method2ListBox);
            Controls.Add(MethodListBox);
            Controls.Add(NewtonLabel);
            Controls.Add(SolutionButton);
            Controls.Add(IntervalButton);
            Controls.Add(IntervalListBox);
            Controls.Add(SolutionLabel);
            Controls.Add(label8);
            Controls.Add(NearbyValueLabel);
            Controls.Add(NearbyValueTextBox);
            Controls.Add(StepIntervallabel);
            Controls.Add(StepIntervalTextBox);
            Controls.Add(label3);
            Controls.Add(EndIntervalTextBox);
            Controls.Add(label2);
            Controls.Add(label1);
            Controls.Add(StartIntervalTextBox);
            Controls.Add(IntervalLabel);
            Margin = new Padding(4, 5, 4, 5);
            Name = "Form1";
            Text = "Модифицированный метод Ньютона";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion
        private Label IntervalLabel;
        private TextBox StartIntervalTextBox;
        private Label label1;
        private Label label2;
        private Label label3;
        private TextBox EndIntervalTextBox;
        private Label StepIntervallabel;
        private TextBox StepIntervalTextBox;
        private Label NearbyValueLabel;
        private TextBox NearbyValueTextBox;
        private Label label8;
        private Label SolutionLabel;
        private ListBox IntervalListBox;
        private Button IntervalButton;
        private Button SolutionButton;
        private Label NewtonLabel;
        private ListBox MethodListBox;
        private ListBox Method2ListBox;
        private Label NewthonMethodlabel;
        private ListBox ConvergantListBox;
        private Button button1;
        private Button ConvergantButton;
    }
}