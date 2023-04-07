#include <iostream>

// Абстрактный класс Food, который будет использоваться как зависимость класса Person
class Food {
public:
    virtual void prepare() = 0; // Виртуальный метод prepare, который будет реализован в каждом конкретном наследнике
};

// Конкретный класс Breakfast, наследующий абстрактный класс Food
class Breakfast : public Food {
public:
    void prepare() override {
        std::cout << "Preparing breakfast...\n";
        // Здесь может быть реализация подготовки завтрака
    }
};

// Конкретный класс Lunch, наследующий абстрактный класс Food
class Lunch : public Food {
public:
    void prepare() override {
        std::cout << "Preparing lunch...\n";
        // Здесь может быть реализация подготовки обеда
    }
};

// Конкретный класс Dinner, наследующий абстрактный класс Food
class Dinner : public Food {
public:
    void prepare() override {
        std::cout << "Preparing dinner...\n";
        // Здесь может быть реализация подготовки ужина
    }
};

// Класс Person, который зависит от абстракции класса Food
class Person {
public:
    void eat(Food& food) {
        food.prepare(); // Вызываем метод prepare, который будет реализован в конкретном наследнике класса Food
        std::cout << "Eating...\n";
    }
};

// Пример использования классов Person и Food
int main() {
    Person person;
    Breakfast breakfast;
    Lunch lunch;
    Dinner dinner;
    person.eat(breakfast); // Person ест завтрак
    person.eat(lunch); // Person ест обед
    person.eat(dinner); // Person ест ужин
    return 0;
}