# std::vector in C++

`std::vector` in C++ are implementated in a way that you have an **array** where you can access an element
by directly specifing the index, but size of it also grows, like a **linked list**. So you can think of a 
`std::vector` as a *linked list + array*. `std::vector` tries to take the best of both worlds to make a 
really useful container. No need to allocate memory manually and deallocate for a array that grows in size.
You can just create `std::vector` for that purpose.

But if you use dynamic arrays they have a big problem. If you want to increase their size, you will need to 
create a new array and copy the elements back from the old one. It is impossible(?) to resize a existing 
allocated array with data in it. To fix this, use `reserve()` method to allocate some space. If you want to
allocate and initialize the space, use `resize()` method.

Example: 

```cpp
#include <vector>

class Vector2D
{
public:
    int x, y;
    Vector2D(int pX, int pY) : x(pX), y(pY) {}
};

int main()
{
    std::vector<Vector2D> vectOfVector2D;
    vectOfVector2D.reserve(3);

    vectOfVector2D.push_back(Vector2D(0,1));
    vectOfVector2D.push_back(Vector2D(1,0));
    vectOfVector2D.push_back(Vector2D(1,1));
}
```

Do not use `push_back()` method though, this method constructs a object, than copies to the end of the `std::vector`.
If you want to directly insert a object into a `std::vector`, use `emplace_back()` method.   

Example:
```cpp
#include <vector>

class Vector2D
{
public:
    int x, y;
    Vector2D(int pX, int pY) : x(pX), y(pY) {}
};

int main()
{
    std::vector<Vector2D> vectOfVector2D;
    vectOfVector2D.reserve(3);

    vectOfVector2D.emplace_back(Vector2D(0,1));
    vectOfVector2D.emplace_back(Vector2D(1,0));
    vectOfVector2D.emplace_back(Vector2D(1,1));
}
```
### How to run this project
Open up a **Terminal**, then run this commands:

```shell
git clone https://github.com/ritchielrez/std_vectors
cmake -Bbuild -S.
cmake --build build
./build/main
```

On **Windows**, use the **Command Prompt**:

```
git clone https://github.com/ritchielrez/std_vectors
cmake -Bbuild -S.
cmake --build build
cd build
main
```
