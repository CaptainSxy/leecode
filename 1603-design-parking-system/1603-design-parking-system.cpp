class ParkingSystem {
public:
    int big_num, med_num, small_num;
    ParkingSystem(int big, int medium, int small) {
        big_num = big;
        med_num = medium;
        small_num = small;
    }
    
    bool addCar(int carType) {
        // cout<<big<<" "<<medium<<" "<<small<<endl;
        if(carType==1){
            if(big_num>0){
                big_num--;
                return true;
            }
            else
                return false;    
        }
        else if(carType==2){
            if(med_num>0){
                med_num--;
                return true;
            }
            else
                return false;    
        }
        else if(carType==3){
            if(small_num>0){
                small_num--;
                return true;
            }
            else
                return false;    
        }
        else 
            return false;
    }
};


/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */