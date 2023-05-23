#include <iostream>
#include <vector>

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
    {
        std::vector<Vector2D> vectOfVector2D;

        std::cout << "Length of the std::vector: " << vectOfVector2D.size() << "\n";

        std::cout << "\n";
        vectOfVector2D.push_back(Vector2D(0, 1));
        std::cout << "\n";
        vectOfVector2D.push_back(Vector2D(1, 0));
        std::cout << "\n";
        vectOfVector2D.push_back(Vector2D(1, 1));
        std::cout << "\n";
    }


    {
        std::vector<Vector2D> vectOfVector2D;
        vectOfVector2D.reserve(3);

        std::cout << "\nLength of the std::vector: " << vectOfVector2D.size() << "\n";

        std::cout << "\n";
        vectOfVector2D.push_back(Vector2D(0, 1));
        std::cout << "\n";
        vectOfVector2D.push_back(Vector2D(1, 0));
        std::cout << "\n";
        vectOfVector2D.push_back(Vector2D(1, 1));
        std::cout << "\n";
    }

    {
        std::vector<Vector2D> vectOfVector2D;

        std::cout << "\nLength of the std::vector: " << vectOfVector2D.size() << "\n";

        std::cout << "\n";
        vectOfVector2D.emplace_back(0, 1);
        std::cout << "\n";
        vectOfVector2D.emplace_back(1, 0);
        std::cout << "\n";
        vectOfVector2D.emplace_back(1, 1);
        std::cout << "\n";
    }

    {
        std::vector<Vector2D> vectOfVector2D;
        vectOfVector2D.reserve(3);

        std::cout << "\nLength of the std::vector: " << vectOfVector2D.size() << "\n";

        std::cout << "\n";
        vectOfVector2D.emplace_back(0, 1);
        std::cout << "\n";
        vectOfVector2D.emplace_back(1, 0);
        std::cout << "\n";
        vectOfVector2D.emplace_back(1, 1);
        std::cout << "\n";
    }

    return 0;
}
