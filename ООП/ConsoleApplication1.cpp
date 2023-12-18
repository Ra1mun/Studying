#include <iostream>
#include <fstream>
#include <random>
#include <map>

// Абстрактный базовый класс SBase
class SBase {
public:
    virtual int Get() = 0; // Виртуальная функция Get
};

// Класс SFile
class SFile : public SBase {
private:
    std::ifstream inputFile; // Поток для чтения из файла
public:
    SFile(const std::string& filename) {
        inputFile.open(filename);
    }

    ~SFile() {
        inputFile.close();
    }

    int Get() override {
        int number;
        if (inputFile >> number) {
            return number;
        }
        else {
            return -1; // Возвращаем отрицательное значение при достижении конца файла
        }
    }
};

// Класс SKbrd
class SKbrd : public SBase {
public:
    int Get() override {
        int number;
        std::cin >> number;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore();
            return -1; // Возвращаем отрицательное значение при завершении ввода с клавиатуры
        }
        return number;
    }
};

// Класс SQueue
class SQueue : public SBase {
private:
    std::vector<int> queue;
    int index;
public:
    SQueue(int length) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, 100);
        for (int i = 0; i < length; i++) {
            queue.push_back(dis(gen));
        }
        index = 0;
    }

    int Get() override {
        if (index < queue.size()) {
            return queue[index++];
        }
        else {
            return -1; // Возвращаем отрицательное значение при исчерпании очереди
        }
    }
};

// Класс Freq
class Freq {
private:
    std::map<int, int> frequencyMap;
    int sum;
public:
    virtual void Calc(SBase& provider) {
        int number;
        sum = 0;
        while ((number = provider.Get()) >= 0) {
            frequencyMap[number]++;
            sum += number;
        }
    }

    friend std::ostream& operator<<(std::ostream& os, const Freq& freq) {
        for (const auto& pair : freq.frequencyMap) {
            os << pair.first << ": " << pair.second << std::endl;
        }
        os << "Sum: " << freq.sum << std::endl;
        return os;
    }
};

// Класс Diap
class Diap : public Freq {
public:
    void Calc(SBase& provider) override {
        int number;
        int minNumber = INT_MAX;
        int maxNumber = INT_MIN;
        int count = 0;
        while ((number = provider.Get()) >= 0) {
            if (number < minNumber) {
                minNumber = number;
            }
            if (number > maxNumber) {
                maxNumber = number;
            }
            count++;
        }
        std::cout << "Min Number: " << minNumber << std::endl;
        std::cout << "Max Number: " << maxNumber << std::endl;
        std::cout << "Count: " << count << std::endl;
    }
};

int main() {
    // Примеры вызова Calc

    // Использование класса SFile
    SFile fileProvider("input.txt");
    Freq freq;
    freq.Calc(fileProvider);
    std::cout << freq << std::endl;

    // Использование класса SKbrd
    SKbrd keyboardProvider;
    Diap diap;
    diap.Calc(keyboardProvider);

    // Использование класса SQueue
    SQueue queueProvider(10);
    Freq freq2;
    freq2.Calc(queueProvider);
    std::cout << freq2 << std::endl;

    return 0;
}