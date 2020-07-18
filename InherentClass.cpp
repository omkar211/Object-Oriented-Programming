// This concept is all about how to manage class with different perspective .

#include<iostream>
using namespace std;
class Bird()
{
    public:
    //Birds have PROPERTIOES and ACTIONS.
    double weight,height;
    void fly(string Btype , string Wings,string Feathers)
    {
        string wings;
        string feathers;
        string type;
   
        if(Btype=="hen")
        {
            type = "low";

        }
        else if(Btype == "eagle"){
              type = "high";
        }
        /// for every bird ,here have to different fly type if condition 
        /// same for eat() method,walk() method and eggs()
    }
    void eat(){
        if()
        {

        }
        else
        {
            /* code */
        }
        
    }
    void walk()
    {
        if()
        {

        }
        else
        {
            /* code */
        }
    }
    void eggs()
    {hen.fly("high")
        }
        else
        {
            /* code */
        }
    }


};
int main()
{
   Bird hen=new Bird();
   Bird eagle =new Bird();
}
//                  PROBLEMS with this above code


//      1. hen.fly("high")               eagle.fly("low")  information filled by client is wrong which is not correct.
//      2. multiple   if-else statements ------> dirty code 
//      3. other methods also dirty 
//      4. hen.fly("eagle") which is wrong information about hen.
//      5.spelling mistakes hen.fly(han) 
//      6.Hard to test . lots of if else function responsible for different type of behavior.
//        each and every class is responsible for 1 type of behaviour  (SRP).
      


      ///               SOLUTION 
     ///       here is came concept of inheritance
                                     


    //         Hen and Eagle class have same some properties and Actions of Bird class.
    

    #include<iostream>
    using namespace std;
    class Bird{
        public:
   double weight,height;
    void fly()
    {
        bool flap_wings;
        bool take_off;
    };
    class hen extended Bird{
        void fly()
        {
            bool fly_hen=low;
            //flap_wings
            //takeoff
            super.fly();
        }
    };
    int main()
    {

    }
    // 1. point clear  .... no need to pass the value .......... like this  hen.fly("high")
    // 2. NO dirty code 
    // 3. No method contains if-else system.
    // 4. this point also clear no need to pass values.
    // 5. testing is quite level upgarded 


    //                     PROBLEMS
    // let say if class of  parrot created and extend to (super class) Bird class .
                           Bird p=new parrot();
    //                     call p.fly();  let say developer forget to implemented in parrot class
    //                     so here what happened is it will first find in local class if that function do not find in it 
    //                      then will search on parent class or super class .
    // so the problem is it will not give an error to and the parrot only  
       // flag_wings and take _off but never fly that type of objects are called silent killers.
 

 ///Then here is a concept come Abstract class.
 //in abstruct class all the methods od super class have to implement in the child class .
 // that is enforcing to the child class to implemented the all the methods.



 //                        Another concept 
 //              suppose there is a seller which is sell birds of  diffewewnt species.

//                          PROBLEM 
 //    is there need  to attach prices with every bird claass.aur develope differently .
 //  answer is seller must be different class bcoz there is GST which can be change on any time , taxes rules can be chabge any time
 //  if some thing modified in seller that will be enforcing to change in every Bird classes ,eg hen , eagle , crow
 // and there is some area wise price also ,color wise price also.
