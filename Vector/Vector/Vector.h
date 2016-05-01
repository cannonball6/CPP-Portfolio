
#ifndef __Vector__Vector__
#define __Vector__Vector__

template <class T>
class Vector{
public:
    ////////////////////////////////////////
    ////////constructs & destructors////////
    Vector<T>();
    ~Vector();

    ////////////////////////////////
    ////////getters & setters///////
    
    T getX()const{return position[0]; }
    float getY()const{return position[1]; }
    float getZ()const{return position[2]; }
    void setX(T x){ position[0] = x; }
    void setY(float y){ position[1] = y; }
    void setZ(float z){ position[2] = z; }
    
    //////////////////////////////////
    ////////Operator Overloads////////
    
    // = overlaod (assignment)
    Vector<T>& operator=(const Vector<T>& v);
    // + overload
    Vector<T>& operator+(const Vector<T>& right);
    
    /////////////////////////
    ////////Member Functions////////
    
    bool checkBounds(int n);
    void setPosition(T x, T y, T z);
    void printVector();
    
    
private:
    T *position;
    
};

#endif /* defined(__Vector__Vector__) */
