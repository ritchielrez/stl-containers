#include <algorithm>
#include <deque>
#include <iostream>

class Vector2D
{
  public:
    int x, y;

    Vector2D(int pX, int pY) : x(pX), y(pY)
    {
        std::cout << "Contructed, x, y: " << x << ", " << y << "\n";
    }

    Vector2D(const Vector2D &old) : x(old.x), y(old.y)
    {
        std::cout << "Copied, x, y: " << x << ", " << y << "\n";
    }

    ~Vector2D()
    {
        std::cout << "Destructed, x, y: " << x << ", " << y << "\n";
    }
};

int main()
{
    auto printContainer = [](const auto &e) { std::cout << e << " "; };

    {
        std::deque<int> deq1;
        deq1.push_back(3);
        deq1.push_front(1);
        deq1.insert(++deq1.begin(), 2);

        std::for_each(deq1.begin(), deq1.end(), printContainer);
        std::cout << "\n";

        std::cout << "Size: " << deq1.size() << "\n";
        std::cout << "Maximum size: " << deq1.max_size() << "\n\n";
    }

    {
        std::deque<Vector2D> deqOfVector2D;

        std::cout << "\n";
        deqOfVector2D.push_back(Vector2D(1, 1));
        std::cout << "\n";
        deqOfVector2D.push_front(Vector2D(0, 1));
        std::cout << "\n";
        deqOfVector2D.insert(++deqOfVector2D.begin(), Vector2D(1, 0));
        std::cout << "\n";

        std::cout << "Size: " << deqOfVector2D.size() << "\n";
        std::cout << "Maximum size: " << deqOfVector2D.max_size() << "\n\n";
    }

    {
        std::deque<Vector2D> deqOfVector2D;

        std::cout << "\n";
        deqOfVector2D.emplace_back(1, 1);
        std::cout << "\n";
        deqOfVector2D.emplace_front(0, 1);
        std::cout << "\n";
        deqOfVector2D.insert(++deqOfVector2D.begin(), Vector2D(1, 0));
        std::cout << "\n";

        std::cout << "Size: " << deqOfVector2D.size() << "\n";
        std::cout << "Maximum size: " << deqOfVector2D.max_size() << "\n\n";
    }

    return 0;
}
