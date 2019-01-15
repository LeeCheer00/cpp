/*************************************************************************
	> File Name: 5.1.2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月14日 星期一 12时06分29秒
 ************************************************************************/

#include<iostream>
using namespace std;


/*军队
 */
  
class Troops{
    public:
    virtual void fight(){ cout<<"Strike back!"<<endl; }
};


class Army: public Troops{
    public:
    void fight(){ cout<<"--Army is fighting!"<<endl; }
};

class _99A: public Army{
    public:
    void fight(){ cout<<"--99A(Tank)is fighting!"<<endl; }
};
class WZ_10: public Army{
    public:
    void fight(){ cout<<"--WZ-10(Helicopter) is fighting!"<<endl; }
};

class CJ_10: public Army{
    public:
    void fight(){ cout<<"--CJ-10(Missile) is fighting!"<<endl; }
};

class Leecheer: public Army{
    public:
    void fight(){ cout<<"--Leecheer(best soidlers) are fighting!"<<endl; }
};



class AirForce: public Troops{
    public:
    void fight(){ cout<<"--AirForce is fighting!"<<endl; }
};


class J_20: public AirForce{
    public:
    void fight(){ cout<<"--J-20(Fighter Plane) is fighting!"<<endl; }
};


class CH_5: public AirForce{
    public:
    void fight(){ cout<<"--CH-5(UAV) is fighting!"<<endl; }
};

class H_6K: public AirForce{
    public:
    void fight(){ cout<<"--H-6K(Bomber) is fighting!"<<endl; }
};


int main(){
    Troops *p = new Troops;
    p -> fight();


    // Army
    
    p = new Army;
    p -> fight();
    
    p = new _99A;
    p -> fight();

    p = new WZ_10;
    p -> fight();

    p = new CJ_10;
    p -> fight();

    p = new Leecheer;
    p -> fight();

    p = new AirForce;
    p -> fight();
    
    p = new J_20;
    p -> fight();

    p = new CH_5;
    p -> fight();


    p = new H_6K;
    p -> fight();

    return 0;
}

