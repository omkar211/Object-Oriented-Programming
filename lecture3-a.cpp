/// here we will learn how to make singlton class and what is the use of it .
/// lets discuss a problem 

/// creating a class of employee


class employees{
   
   sting name;
   string email;
   int emp_code;
   double salary;
   string department;
   string address;
   
   /// and employee have to pay taxes 
   /// create tax method 

   double tax_calculator()
   {
       /// some rules to calculate taxes 
       //// by using salary.
   }

};

/// question:- so the question is .....is that good practise to calculate tax in employee class?
/// ans :- no ,because tax is not something that  belongs employee class.
/// 1. if gov. announced some rules  or made some changes in Tax rule in that condition client have to make change in employee class
/// 2.  and also it is not holding singleton object principal .
/// 3. tax has different behaviour then employee class.


///               so the solution is create different class of Tax

class tax{
    public:
    double static calculate_tax(double salary)
    {
        ///some math 
        return tax_calculated;
    }
};
/// so simply create an object of employee class .
 employee tom =new employee("name",......);
 /// then calculate tax
 tom.calculate_tax(salary);

 /// there are some types of class 
 // 1. statefull class :- those classes holds real word entity or real world object example:- employee
 // 2. stateless class :- classes which do not holding real world entity eg:- tax class,creating objects are not necessary .



//// here is another question .
/// question is validate the address.

class Address{
    /// this class deals with structures of getters and setters seperately.
     string addressline [];
     string pincode;
     string houseNo;
     string state;
     string city;
     string country;


};
/// QUESTION:- so the queston should Address validate function is in Address class or should be in different class.
/// ANSWER:- Address validator class should be different.
/// but another question arises if pincode is not something that is need only for Address. it uses for checking  area wise delivery.
/// and gov change zip code also which is enforcing whole Address Validator classes.
/// its not necessary that pincode perform only for address it can be performed for different entities.
/// All the validtor are different.

///SOLUTUION:- solutuon is create different class for each address .




class AddressValidator{
    ///this class just check this address is valid or not .
    /// in it make changes if and only if attribute is added or removed.
    zipvalidator z;
    cityvalidator c;
    return (z.validator() && c.validator && ....);
};
/// lets create zipvalidator class 
 class Zipvalidator{
     public static bool validdator(zip)
     {
         //make conn
         //query 
         //fetch string in memory
         //check if valid or not 
         //// problem here is we can not make connection in this classs 
         ///because those who need maintaining the  connection can call connection  class. so thats whyy database
         ///connection class should be another one.
     }
 };



class resourceInitializer(RI){
    staic set<string>zip;
    static RI r;
    private RI()
    {
        //create connnection
        //db.query
        /// initialise things
        //connection close
        public static RI getInstance ()
        {
            if(r==NULL)
            {
                r=new RI();
            }
            return r;
        } 
    }
};

 /// at exact instant time this class has only 1 instance .
 /// to make singleton class make constructor private.