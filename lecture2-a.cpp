///static function used for basically memory management .
///it is declare only once in the given programm.


///                         STATIC
// 1. static Block
// 2. static method 
// 3. static variablestatic Function
// 4. static class


// 1. static block --> It start to execute first when program handover to JVM.
//                     Static block has priority to execute before get execute any other program.

class B
{
    int temp=0;
    ///static block 
    staic {
        cout <<"This Block Run first";
          }
};

/// 2. static method --> 

class A{
    private string  name;
    void setname( string name)
    {
        this.name=name;
    }
    
    public int get_year()
    {
        return year;
    }
    // To call this method we have to declare an object which will occupy the memory .and
    /// load whole class in the memory for just get_year .
};
/// memory efficient .
class A{
    private string name;
    void setname(string name)
    {
        this.name=name;
    }
    /// static method
     public static int get_year()
     {
         return year;
     } 
};
user.get_year();

/// here no need to allocate the object to access the get_year() method.
/// static method can call directly from outside of the class.

/// 3.      static Variable
class A{

    int temp=10;
    //to use the variable without declare the object , from out of the class .make it static.
};
class A{
    //static variable 
    static int temp =10;
};
int main()
{
    cout<<++i<<" ";
}

/// 4.                        static class 
     
     // understand with example
     
     class outer {
         int temp;

      public class inner{
            int var=10;
           string str ="abcd";
         };
     };
     /// if we here access the inner class then we have to first make object like this 
         outer.inner obj=new outer().new inner();


         /// if we make inner class statics then the inner class is same for all objects.
         /// mean it  behaves like global class  or like global variable. 
       class outer {
           int temp;
           public static class inner{
               int var=10;
               string str="abcd";
           };
       };
       /// object created of inner class 
       outer.inner obj= new outer.inner();
       /// any utility ,calculation,validation things can be in a static