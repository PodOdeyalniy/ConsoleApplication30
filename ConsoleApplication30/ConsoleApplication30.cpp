#include <iostream>

// ����������� ����� Food, ������� ����� �������������� ��� ����������� ������ Person
class Food {
public:
    virtual void prepare() = 0; // ����������� ����� prepare, ������� ����� ���������� � ������ ���������� ����������
};

// ���������� ����� Breakfast, ����������� ����������� ����� Food
class Breakfast : public Food {
public:
    void prepare() override {
        std::cout << "Preparing breakfast...\n";
        // ����� ����� ���� ���������� ���������� ��������
    }
};

// ���������� ����� Lunch, ����������� ����������� ����� Food
class Lunch : public Food {
public:
    void prepare() override {
        std::cout << "Preparing lunch...\n";
        // ����� ����� ���� ���������� ���������� �����
    }
};

// ���������� ����� Dinner, ����������� ����������� ����� Food
class Dinner : public Food {
public:
    void prepare() override {
        std::cout << "Preparing dinner...\n";
        // ����� ����� ���� ���������� ���������� �����
    }
};

// ����� Person, ������� ������� �� ���������� ������ Food
class Person {
public:
    void eat(Food& food) {
        food.prepare(); // �������� ����� prepare, ������� ����� ���������� � ���������� ���������� ������ Food
        std::cout << "Eating...\n";
    }
};

// ������ ������������� ������� Person � Food
int main() {
    Person person;
    Breakfast breakfast;
    Lunch lunch;
    Dinner dinner;
    person.eat(breakfast); // Person ��� �������
    person.eat(lunch); // Person ��� ����
    person.eat(dinner); // Person ��� ����
    return 0;
}