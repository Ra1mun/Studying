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
            SuspendLayout();
            // 
            // IntervalLabel
            // 
            IntervalLabel.AutoSize = true;
            IntervalLabel.Location = new Point(12, 30);
            IntervalLabel.Name = "IntervalLabel";
            IntervalLabel.Size = new Size(128, 15);
            IntervalLabel.TabIndex = 2;
            IntervalLabel.Text = "Проверка интервалов";
            // 
            // StartIntervalTextBox
            // 
            StartIntervalTextBox.Location = new Point(12, 78);
            StartIntervalTextBox.Name = "StartIntervalTextBox";
            StartIntervalTextBox.Size = new Size(166, 23);
            StartIntervalTextBox.TabIndex = 3;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(12, 60);
            label1.Name = "label1";
            label1.Size = new Size(0, 15);
            label1.TabIndex = 4;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(12, 60);
            label2.Name = "label2";
            label2.Size = new Size(166, 15);
            label2.TabIndex = 5;
            label2.Text = "Введите начальное значение";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(184, 60);
            label3.Name = "label3";
            label3.Size = new Size(160, 15);
            label3.TabIndex = 7;
            label3.Text = "Введите конечное значение";
            // 
            // EndIntervalTextBox
            // 
            EndIntervalTextBox.Location = new Point(184, 78);
            EndIntervalTextBox.Name = "EndIntervalTextBox";
            EndIntervalTextBox.Size = new Size(166, 23);
            EndIntervalTextBox.TabIndex = 6;
            // 
            // StepIntervallabel
            // 
            StepIntervallabel.AutoSize = true;
            StepIntervallabel.Location = new Point(356, 60);
            StepIntervallabel.Name = "StepIntervallabel";
            StepIntervallabel.Size = new Size(135, 15);
            StepIntervallabel.TabIndex = 9;
            StepIntervallabel.Text = "Введите значение шага";
            // 
            // StepIntervalTextBox
            // 
            StepIntervalTextBox.Location = new Point(356, 78);
            StepIntervalTextBox.Name = "StepIntervalTextBox";
            StepIntervalTextBox.Size = new Size(166, 23);
            StepIntervalTextBox.TabIndex = 8;
            // 
            // NearbyValueLabel
            // 
            NearbyValueLabel.AutoSize = true;
            NearbyValueLabel.Location = new Point(12, 141);
            NearbyValueLabel.Name = "NearbyValueLabel";
            NearbyValueLabel.Size = new Size(191, 15);
            NearbyValueLabel.TabIndex = 11;
            NearbyValueLabel.Text = "Введите приближенное значение";
            // 
            // NearbyValueTextBox
            // 
            NearbyValueTextBox.Location = new Point(12, 159);
            NearbyValueTextBox.Name = "NearbyValueTextBox";
            NearbyValueTextBox.Size = new Size(166, 23);
            NearbyValueTextBox.TabIndex = 10;
            // 
            // label8
            // 
            label8.AutoSize = true;
            label8.Location = new Point(424, 9);
            label8.Name = "label8";
            label8.Size = new Size(98, 15);
            label8.TabIndex = 16;
            label8.Text = "Функция 2.2-2^x";
            // 
            // SolutionLabel
            // 
            SolutionLabel.AutoSize = true;
            SolutionLabel.Location = new Point(12, 117);
            SolutionLabel.Name = "SolutionLabel";
            SolutionLabel.Size = new Size(110, 15);
            SolutionLabel.TabIndex = 17;
            SolutionLabel.Text = "Решить уравнение";
            // 
            // IntervalListBox
            // 
            IntervalListBox.FormattingEnabled = true;
            IntervalListBox.ItemHeight = 15;
            IntervalListBox.Location = new Point(654, 60);
            IntervalListBox.Name = "IntervalListBox";
            IntervalListBox.Size = new Size(198, 124);
            IntervalListBox.TabIndex = 18;
            // 
            // IntervalButton
            // 
            IntervalButton.Location = new Point(528, 75);
            IntervalButton.Name = "IntervalButton";
            IntervalButton.Size = new Size(120, 26);
            IntervalButton.TabIndex = 19;
            IntervalButton.Text = "Поиск интервала";
            IntervalButton.UseVisualStyleBackColor = true;
            IntervalButton.Click += IntervalButton_Click;
            // 
            // SolutionButton
            // 
            SolutionButton.Location = new Point(184, 159);
            SolutionButton.Name = "SolutionButton";
            SolutionButton.Size = new Size(120, 23);
            SolutionButton.TabIndex = 20;
            SolutionButton.Text = "Решить уравнение";
            SolutionButton.UseVisualStyleBackColor = true;
            SolutionButton.Click += MethodButton_Click;
            // 
            // NewtonLabel
            // 
            NewtonLabel.AutoSize = true;
            NewtonLabel.Location = new Point(12, 196);
            NewtonLabel.Name = "NewtonLabel";
            NewtonLabel.Size = new Size(213, 15);
            NewtonLabel.TabIndex = 27;
            NewtonLabel.Text = "Модифицированный метод Ньютона";
            // 
            // MethodListBox
            // 
            MethodListBox.FormattingEnabled = true;
            MethodListBox.ItemHeight = 15;
            MethodListBox.Location = new Point(12, 219);
            MethodListBox.Name = "MethodListBox";
            MethodListBox.Size = new Size(213, 184);
            MethodListBox.TabIndex = 32;
            // 
            // Method2ListBox
            // 
            Method2ListBox.FormattingEnabled = true;
            Method2ListBox.ItemHeight = 15;
            Method2ListBox.Location = new Point(231, 219);
            Method2ListBox.Name = "Method2ListBox";
            Method2ListBox.Size = new Size(213, 184);
            Method2ListBox.TabIndex = 33;
            // 
            // NewthonMethodlabel
            // 
            NewthonMethodlabel.AutoSize = true;
            NewthonMethodlabel.Location = new Point(231, 196);
            NewthonMethodlabel.Name = "NewthonMethodlabel";
            NewthonMethodlabel.Size = new Size(95, 15);
            NewthonMethodlabel.TabIndex = 34;
            NewthonMethodlabel.Text = "Метод Ньютона";
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = SystemColors.GradientInactiveCaption;
            ClientSize = new Size(859, 415);
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
    }
}