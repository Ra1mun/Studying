#include <iostream>
#include <string>
#include <vector>
class StSkills {
public:
    StSkills();
    StSkills& operator=(const StSkills& other);
    bool operator==(StSkills& other);
};
using namespace std;
class Person {
protected:
    string fio_;
    string adress_;
    int age_;
public:
    Person() {
        fio_ = '/0';
        adress_ = '/0';
        age_ = 0;
    }
    Person(const char* fio, const char* adress, const int age) {
        fio_ = fio;
        adress_ = adress;
        age_ = age;
    }
    void Input() {
        cout << "Введите Фамилию Имя Отчество: " << endl;
        cin >> fio_;
        cout << "Введите адрес проживания: " << endl;
        cin >> adress_;
        cout << "Сколько вам полных лет?: " << endl;
        cin >> age_;
    }
    void Show() {
        cout << "Информация о пользователе: " << endl;
        cout << fio_ << endl;
        cout << adress_ << endl;
        cout << age_ << endl;
    }
    string GetFIO() {
        return fio_;
    }
    string GetAdress() {
        return adress_;
    }
    int GetAge() {
        return age_;
    }
    bool operator==(Person& other) {
        return (fio_ == other.fio_ && adress_ == other.adress_ && age_ == other.age_);
    }
    bool operator!=(Person& other) {
        return !(*this == other);
    }
    bool operator> (Person& other) {
        return age_ > other.age_;
    }
    bool operator< (Person& other) {
        return age_ < other.age_;
    }
};

class TchSkills {
    TchSkills();
    TchSkills& operator=(const TchSkills& other);
    bool operator==(TchSkills& other);
};

using namespace std;
class Student : public Person {
private:
    int group_;
    int course_;
    string speciality_;
    StSkills* skills_;
public:
    Student() {
        fio_ = '/0';
        adress_ = '/0';
        age_ = 0;
        group_ = 0;
        course_ = 0;
        speciality_ = '/0';
        skills_ = new StSkills();
    }
    Student(const char* fio, const char* adress, const int age, int group, int course, const char* speciality, const StSkills& skills) {
        fio_ = fio;
        adress_ = adress;
        age_ = age;
        group_ = group;
        course_ = course;
        speciality_ = speciality;
        //skills_ = skills;
    }

    void Input() {
        cout << "Введите Фамилию Имя Отчество: " << endl;
        cin >> fio_;
        cout << "Введите адрес проживания: " << endl;
        cin >> adress_;
        cout << "Сколько вам полных лет?: " << endl;
        cin >> age_;
        cin >> group_;
        cin >> course_;
        cin >> speciality_;
    }
    void Show() {
        cout << "Информация о пользователе: " << endl;
        cout << fio_ << endl;
        cout << adress_ << endl;
        cout << age_ << endl;
        cout << group_ << endl;
        cout << course_ << endl;
        cout << speciality_ << endl;
    }

    int GetGroup() {
        return group_;
    }
    int GetCourse() {
        return course_;
    }
    string GetSpeciality() {
        return speciality_;
    }
    StSkills GetSkills(){
        return *skills_;
    }

    bool operator==(Student& other) {
        return (fio_ == other.fio_ && adress_ == other.adress_ && age_ == other.age_ && group_ == other.group_ && course_ == other.course_ && speciality_ == other.speciality_ && skills_ == other.skills_);
    }
    bool operator!= (Student& other) {
        return !(*this == other);
    }

    friend istream& operator>>(istream& stream, Student& object){
        cout << "Введите Фамилию Имя Отчество: " << endl;
        stream >>  object.fio_;
        cout << "Введите адрес проживания: " << endl;
        stream >> object.adress_;
        cout << "Сколько вам полных лет?: " << endl;
        stream >> object.age_;
        stream >> object.group_;
        stream >> object.course_;
        stream >> object.speciality_;
    }
    friend ostream& operator<<(ostream& stream, Student& object) {
        stream << "Информация о пользователе: " << endl;
        stream << object.fio_ << endl;
        stream << object.adress_ << endl;
        stream << object.age_ << endl;
        stream << object.group_ << endl;
        stream << object.course_ << endl;
        stream << object.speciality_ << endl;
    }
};

class Teacher : public Person {
private:
    string department_;
    string function_;
    TchSkills* skills_;
public:
    Teacher() {
        fio_ = '/0';
        adress_ = '/0';
        age_ = 0;
        department_ = '/0';
        function_ = '/0';
        skills_ = new TchSkills();
    }
    Teacher(const char* fio, const char* adress, const int age, const char* departament, const char* function, const TchSkills& skills) {
        fio_ = fio;
        adress_ = adress;
        age_ = age;
        department_ = departament;
        function_ = function;
        //skills_ = skills;
    }

    void Input() {
        cout << "Введите Фамилию Имя Отчество: " << endl;
        cin >> fio_;
        cout << "Введите адрес проживания: " << endl;
        cin >> adress_;
        cout << "Сколько вам полных лет?: " << endl;
        cin >> age_;
        cin >> department_;
        cin >> function_;
    }
    void Show() {
        cout << "Информация о пользователе: " << endl;
        cout << fio_ << endl;
        cout << adress_ << endl;
        cout << age_ << endl;
        cout << department_ << endl;
        cout << function_ << endl;
    }

    string GetDepartament() {
        return department_;
    }
    string GetFunction() {
        return function_;
    }
    TchSkills GetSkills() {
        return *skills_;
    }

    bool operator==(Teacher& other) {
        return (fio_ == other.fio_ && adress_ == other.adress_ && age_ == other.age_ && department_ == other.group_ && function_ == other.course_ && speciality_ == other.speciality_ && skills_ == other.skills_);
    }
    bool operator!= (Teacher& other) {
        return !(*this == other);
    }

    friend istream& operator>>(istream& stream, Teacher& object) {
        cout << "Введите Фамилию Имя Отчество: " << endl;
        stream >> object.fio_;
        cout << "Введите адрес проживания: " << endl;
        stream >> object.adress_;
        cout << "Сколько вам полных лет?: " << endl;
        stream >> object.age_;
        stream >> object.department_;
        stream >> object.function_;
    }
    friend ostream& operator<<(ostream& stream, Teacher& object) {
        stream << "Информация о пользователе: " << endl;
        stream << object.fio_ << endl;
        stream << object.adress_ << endl;
        stream << object.age_ << endl;
        stream << object.department_ << endl;
        stream << object.function_ << endl;
    }
};

class Faculty{
private:
    vector<Student> s;
    vector<Teacher> t;
    string long_name;
    string short_name;
public:
    Faculty() {
        long_name = '/0';
        short_name = '/0';
    }
    Faculty(const vector<Student> students, const vector<Teacher> teachers, const string longName, const string shortName) {
        for (int i = 0; i < students.size(); i++) {
            s.push_back(students[i]);
        }
        for (int i = 0; i < teachers.size(); i++) {
            t.push_back(teachers[i]);
        }
        long_name = '/0';
        short_name = '/0';
    }
    void AddStudent(Student student) {
        s.push_back(student);
    }
    void AddTeacher(Teacher teacher) {
        t.push_back(teacher);
    }
    void RemoveStudent(Student student) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == student) {
                s.erase(s.begin() + i);
            }
        }
    }
    void RemoveTeacher(Teacher teacher) {
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == teacher) {
                t.erase(t.begin() + i);
            }
        }
    }
    void Show() {
        for (int i = 0; i < s.size(); i++) {
            s[i].Show();
        }
        for (int i = 0; i < t.size(); i++) {
            t[i].Show();
        }
    }
    void Show(int group) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i].GetGroup() == group) {
                s[i].Show();
            }
        }
    }
    void Show(int course) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i].GetCourse() == course) {
                s[i].Show();
            }
        }
    }
    void Show(string departament) {
        for (int i = 0; i < t.size(); i++) {
            if(t[i].GetDepartament() == departament)
                t[i].Show();
        }
    }
    void Show(StSkills stSkills, TchSkills tchSkills) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i].GetSkills() == stSkills)
                cout << s[i].GetFIO() << endl;
        }
        for (int i = 0; i < t.size(); i++) {
            if (t[i].GetSkills() == tchSkills) {
                cout << t[i].GetFIO() << endl;
            }
        }
    }
    void ShowCount() {
        cout << "Студентов: " << s.size() << endl;
        cout << "Преподавателей: " << t.size() << endl;
    }
    
};

int main()
{
    std::cout << "Hello World!\n";
}
