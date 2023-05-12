#include <iostream>



class shape
{
    public:
        void set_width(int16_t width_in)
        {
            width_ = width_in;
        }
        void set_heigth(int16_t heigth_in)
        {
            heigth_ = heigth_in;
        }

    protected:
        int16_t width_ ;
        int16_t heigth_ ;
}; 

class Paint_cost
{
    public:
        auto get_cost(double area) -> int32_t
        {
            return (area * 70);
        }
};

class triangle : public shape, public Paint_cost
{
    public:
        auto get_area() -> int32_t
        {
            return ((width_ * heigth_) * (1.0/2.0));
        }
};




auto main() -> int
{
    triangle tri;

    tri.set_heigth(3);
    tri.set_width(9);
    double area = tri.get_area();


    std::cout << "the area of the triangle is: " << tri.get_area() << std::endl;
    std::cout << "the paint cost for the triangle is: " << tri.get_cost(area) << std::endl;
    return 0;
}
