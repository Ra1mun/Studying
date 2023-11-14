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
            LoadGraphicForm = new Button();
            GraphicBox = new PictureBox();
            IntervalLabel = new Label();
            StartIntervalTextBox = new TextBox();
            label1 = new Label();
            label2 = new Label();
            label3 = new Label();
            EndIntervalTextBox = new TextBox();
            StepIntervallabel = new Label();
            StepIntervalTextBox = new TextBox();
            StartLabel = new Label();
            StartTextBox = new TextBox();
            label8 = new Label();
            SolutionLabel = new Label();
            IntervalListBox = new ListBox();
            IntervalButton = new Button();
            SolutionButton = new Button();
            NewtonLabel = new Label();
            ShodimLabel = new Label();
            ShodButton = new Button();
            MethodListBox = new ListBox();
            ShodListBox = new ListBox();
            ((System.ComponentModel.ISupportInitialize)GraphicBox).BeginInit();
            SuspendLayout();
            // 
            // LoadGraphicForm
            // 
            LoadGraphicForm.Location = new Point(886, 427);
            LoadGraphicForm.Name = "LoadGraphicForm";
            LoadGraphicForm.Size = new Size(112, 40);
            LoadGraphicForm.TabIndex = 0;
            LoadGraphicForm.Text = "График";
            LoadGraphicForm.UseVisualStyleBackColor = true;
            LoadGraphicForm.Click += CreateGraphicButton_Click;
            // 
            // GraphicBox
            // 
            GraphicBox.BackColor = SystemColors.Control;
            GraphicBox.Location = new Point(528, 193);
            GraphicBox.Name = "GraphicBox";
            GraphicBox.Size = new Size(463, 228);
            GraphicBox.TabIndex = 1;
            GraphicBox.TabStop = false;
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
            // StartLabel
            // 
            StartLabel.AutoSize = true;
            StartLabel.Location = new Point(12, 139);
            StartLabel.Name = "StartLabel";
            StartLabel.Size = new Size(166, 15);
            StartLabel.TabIndex = 11;
            StartLabel.Text = "Введите начальное значение";
            // 
            // StartTextBox
            // 
            StartTextBox.Location = new Point(12, 157);
            StartTextBox.Name = "StartTextBox";
            StartTextBox.Size = new Size(166, 23);
            StartTextBox.TabIndex = 10;
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
            SolutionLabel.Location = new Point(12, 115);
            SolutionLabel.Name = "SolutionLabel";
            SolutionLabel.Size = new Size(110, 15);
            SolutionLabel.TabIndex = 17;
            SolutionLabel.Text = "Решить уравнение";
            // 
            // IntervalListBox
            // 
            IntervalListBox.FormattingEnabled = true;
            IntervalListBox.ItemHeight = 15;
            IntervalListBox.Location = new Point(654, 78);
            IntervalListBox.Name = "IntervalListBox";
            IntervalListBox.Size = new Size(337, 109);
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
            SolutionButton.Location = new Point(184, 157);
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
            NewtonLabel.Location = new Point(309, 139);
            NewtonLabel.Name = "NewtonLabel";
            NewtonLabel.Size = new Size(213, 15);
            NewtonLabel.TabIndex = 27;
            NewtonLabel.Text = "Модифицированный метод Ньютона";
            // 
            // ShodimLabel
            // 
            ShodimLabel.AutoSize = true;
            ShodimLabel.Location = new Point(12, 196);
            ShodimLabel.Name = "ShodimLabel";
            ShodimLabel.Size = new Size(145, 15);
            ShodimLabel.TabIndex = 29;
            ShodimLabel.Text = "Проверка на сходимость";
            // 
            // ShodButton
            // 
            ShodButton.Location = new Point(163, 211);
            ShodButton.Name = "ShodButton";
            ShodButton.Size = new Size(120, 26);
            ShodButton.TabIndex = 31;
            ShodButton.Text = "Проверить";
            ShodButton.UseVisualStyleBackColor = true;
            ShodButton.Click += ShodButton_Click;
            // 
            // MethodListBox
            // 
            MethodListBox.FormattingEnabled = true;
            MethodListBox.ItemHeight = 15;
            MethodListBox.Location = new Point(309, 162);
            MethodListBox.Name = "MethodListBox";
            MethodListBox.Size = new Size(213, 49);
            MethodListBox.TabIndex = 32;
            // 
            // ShodListBox
            // 
            ShodListBox.FormattingEnabled = true;
            ShodListBox.ItemHeight = 15;
            ShodListBox.Location = new Point(12, 226);
            ShodListBox.Name = "ShodListBox";
            ShodListBox.Size = new Size(145, 109);
            ShodListBox.TabIndex = 33;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = SystemColors.GradientInactiveCaption;
            ClientSize = new Size(1003, 473);
            Controls.Add(ShodListBox);
            Controls.Add(MethodListBox);
            Controls.Add(ShodButton);
            Controls.Add(ShodimLabel);
            Controls.Add(NewtonLabel);
            Controls.Add(SolutionButton);
            Controls.Add(IntervalButton);
            Controls.Add(IntervalListBox);
            Controls.Add(SolutionLabel);
            Controls.Add(label8);
            Controls.Add(StartLabel);
            Controls.Add(StartTextBox);
            Controls.Add(StepIntervallabel);
            Controls.Add(StepIntervalTextBox);
            Controls.Add(label3);
            Controls.Add(EndIntervalTextBox);
            Controls.Add(label2);
            Controls.Add(label1);
            Controls.Add(StartIntervalTextBox);
            Controls.Add(IntervalLabel);
            Controls.Add(GraphicBox);
            Controls.Add(LoadGraphicForm);
            Name = "Form1";
            Text = "Модифицированный метод Ньютона";
            ((System.ComponentModel.ISupportInitialize)GraphicBox).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Button LoadGraphicForm;
        private PictureBox GraphicBox;
        private Label IntervalLabel;
        private TextBox StartIntervalTextBox;
        private Label label1;
        private Label label2;
        private Label label3;
        private TextBox EndIntervalTextBox;
        private Label StepIntervallabel;
        private TextBox StepIntervalTextBox;
        private Label StartLabel;
        private TextBox StartTextBox;
        private Label label8;
        private Label SolutionLabel;
        private ListBox IntervalListBox;
        private Button IntervalButton;
        private Button SolutionButton;
        private Label NewtonLabel;
        private Label ShodimLabel;
        private Button ShodButton;
        private ListBox MethodListBox;
        private ListBox ShodListBox;
    }
}