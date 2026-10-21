class ParkingSystem {
private:
    int b;
    int med;
    int sm;
public:
    ParkingSystem(int big, int medium, int small) {b=big;med=medium;sm=small;}
    
    bool addCar(int carType) {
        if(carType==1){
            if(b){
                b--;
                return true;
            }
        }else if(carType==2){
            if(med){
                med--;
                return true;
            }
        }else if(carType==3){
            if(sm){
                sm--;
                return true;
            }
        }return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */