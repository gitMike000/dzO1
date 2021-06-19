#include <iostream>
#include <cmath>

#include <cstdint>

class Power
{
  private:
    double a=4,b=3;

  public:
    Power(float x1=4, float x2=3) : a(x1), b(x2)
    { }

    float getA() { return a;}
    void setA(float x) {a=x;}

    float getB() { return b;}
    void setB(float x) {b=x;}

    void setAB(float x, float y) {a=x; b=y;}

    void calculate()
    {
        std::cout << pow(a,b) << '\n';
    }
};

class RGBA
{
 std::uint8_t m_red,
              m_green,
              m_blue,
              m_alpha;
 public:
  RGBA( std::uint8_t red=0,
        std::uint8_t green=0,
        std::uint8_t blue=0,
        std::uint8_t alpha=255 ) : m_red(red),
                                   m_green(green),
                                   m_blue(blue),
                                   m_alpha(alpha)
  { }

  void print()
  {
      std::cout << "RGBA(" << (int) m_red << "," << (int) m_green << "," << (int) m_blue << "," << (int) m_alpha << ")" << '\n';
  }

};

class Stack
{

#define T int
#define SIZE 10

private:
 int cursor = -1;
 T stack[SIZE];

public:
 void push(T data)
  {
    if (cursor < SIZE)
    {
        stack[++cursor] = (data);
//        return true;
    }
    else
    {
//        printf("Stack overflow\n");
//        return false;
    }
  }

  T pop()
   {
    if (cursor != -1)
        return stack[cursor--];
    else
    {
//        printf("Stack is empty\n");
        return -1;
    }
   }

   void reset()
    {
       cursor = -1;
    };

   void print()
    {
       std::cout << "( ";
       for (int i=0;i<=cursor;i++) std::cout << stack[i] << ' ';
       std::cout << ')' << '\n';
    };

};


int main()
{
    // Task 1
    std::cout << "Task 1\n";
    Power s;
    s.calculate();
    std::cout << "pow(1,10)=";
    s.setA(1); s.setB(10);
    s.setAB(1,10);
    s.calculate();

    // Task 2
    std::cout << "\nTask 2\n";
    RGBA r;
    r.print();
    RGBA r1(12,30,56,200);
    r1.print();

    // Task 3
    std::cout << "\nTask 3\n";

    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();

    return 0;
}
