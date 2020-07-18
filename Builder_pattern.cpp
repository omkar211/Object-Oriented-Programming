#include<bits/stdc++.h>
using namespace std;

class leopard{
    public:
    string color;
    string name;
    string gender;
   
    leopard(X obj)
    {
       this->color=obj.color;
       this->name=obj.name;
       this->gender=obj.gender;
    }
/// inner class 
 

    class static builder{
    public:
    string color;
    string name;
    string gender;
    
    void set_color(string color)
    {
        this->color=color;
    }
    void set_name(string name)
    {
        this->name=name;
    }
    void set_gender(string gender)
    {
        this->gender=gender;
    }
     leopard build()
     {
         leopard l=new leopard(this);
         return l;
     }
};


};
int main()
{
  builder obj=new leopard.builder().set_name("lea").set_color("green").build();
  
  
}
