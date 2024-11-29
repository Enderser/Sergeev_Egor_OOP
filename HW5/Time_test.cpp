#include "Time.h"
#include <gtest/gtest.h>

// Group 1: Constructors
TEST(TimeConstructors, DefaultConstructor) {
    Time t;
    EXPECT_EQ(t.ToSeconds(), 0);
}

TEST(TimeConstructors, ParameterizedConstructor) {
    Time t(10, 59, 59);
    EXPECT_EQ(t.ToSeconds(), 39599);
}

// Group 2: Operators
TEST(TimeOperators, AdditionOperator) {
    Time t(10, 0, 0);
    t += 3600; // Добавляем 3600 секунд (1 час)
    EXPECT_EQ(t.ToSeconds(), 39600); // Проверяем, что время правильно обновилось
}

TEST(TimeOperators, EqualityOperator) {
    Time t1(10, 30, 0);
    Time t2(10, 30, 0);
    EXPECT_TRUE(t1 == t2);
}

// Group 3: Methods
TEST(TimeMethods, Normalize) {
    Time t(25, 0, 0); // 25 часов — выходит за пределы
    EXPECT_EQ(t.ToSeconds(), 3600); // Ожидаем 1:00:00 (3600 секунд)
}

TEST(TimeMethods, FailingTest) {
    Time t(1, 0, 0);
    EXPECT_EQ(t.ToSeconds(), 3600); // Намеренно исправлено: теперь должно проходить
}
