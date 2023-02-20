#include <vector>

class Shape;

class Application
{
public:

    Application();
    ~Application();

    void calculateAreas();

private:

    std::vector<Shape*> _shapes;

};