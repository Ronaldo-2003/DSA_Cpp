template<typename A , typename B>

class Pair{
    A X;
    B Y;

    public:

    void setX(A X){
        this->X = X;
    }

    A getX(){
        return this->X;
    }

    void setY(B Y){
        this->Y = Y;
    }

    B getY(){
        return this->Y;
    }
};