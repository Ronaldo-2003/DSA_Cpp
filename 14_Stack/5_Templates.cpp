// class Pair{
//     int x;
//     int y;

//     public:

//     void setX(int x){
//         this->x = x;
//     }

//     int getX(){
//         return x;
//     }

//     void setY(int y){
//         this->y =y;
//     }

//     int getY(){
//         return y;
//     }
// };

template<typename T>

class Pair{
    T x;
    T y;

    public:

    void setX(T x){
        this->x = x;
    }

    T getX(){
        return this->x;
    }

    void setY(T y){
        this->y =y;
    }

    T getY(){
        return this->y;
    }
};