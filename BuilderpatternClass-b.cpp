// before discussing a good example. let's see some terminology.

// What is CLIENT:
// there are lots of meaning of client but here we are using  lets say for backend there is another team and for front-end 
// there is another but front-end team wants to use the  back-end's written APIs .so front-end is basically client of back_-end.
// example:- there are so many entities like search team use the APIs of seach product team .



class leopard{
    private string color;
    private char gender ;
    private  string name;

    leopard(string color,char gender,string name )
    {
        this.color=color;
        this.gender =gender;
        this.name=name;
        /// paramenters are more than 10 here 
        /// more than 10 proprties .
    }
}

int main()
{
    leopard obj=new leopard('Black',"M",'name');
}



///                               issues are here  
// 1. dirty code(>10 parameters)
// 2. enforcing the client to remember the order of parameters.
// 3. backward compatibility.


///                                solution

/// cover point no 3 . backward compatibility.
/// construct more than one constructor in a class but there 1 and 2 issue can not be resolved.
/// and also generate any type of pattern to pass parameters in constructors.
/// example

class leopard{
    private string color;
    private char gender ;
    private  string name;

  leopard(string color)
  {
      this.color=color;
  }

  leopard(string color , char gender)
  {
      this.color=color;
      this.gender=gender;
  }
  leopard(string color , char gender,string name)
  {
      this.color=color;
      this.gender=gender;
      this.name=name;
  }
};
//so here 1. and 2. are not covered 

////    solution 
/// declare another class which contains all the information about leopard and siply then pass the
/// lets say any how if we get the  inbuild object of leopard.
/// object into leopard class  this will resolved the all issue.
class X{
    string name ;
    string color;
    sting gender;
          .
          .
          .
          .
          .
          .


   public set_name( string name)
   {
       this.name=name;
   }
   public set_color(string color)
   {
          this.color=color;
   }


};
class leopard{
    private string color;
    private char gender ;
    private  string name;
    
    public leopard(X obj){
        this.color=obj.color;
        this.name=obj.name;
        this.gender =obj.gender;
    }

};
int main()

{
    x obj=new();
    obj.set_color('yellow');
    obj.set_gender("F");
    obj.set_name('abc');

    leopard l=new leopard(obj);

}
/// 1. dirty code is resolved here but
/// 2. client is enforcing here  bcoz client have to create an object of X class.
  

   /////               solution      //////

/// we will return the object from every // setter function so that client does not need to learn  insertion of pattern .


////                         single line object is created.



class X{
    string name ;
    string color;
    sting gender;
          .
          .
          .
          .
          .
          .


   public X set_name( string name)
   {class X{
    string name ;
    string color;
    sting gender;
          .
          .
          .
          .
          .
          .


   public X set_name( string name)
   {
       this.name=name;
       return this;
   }
   public X  set_color(string color)
   {
       this.color=color;
       return this;
   }


};
class leopard{
    private string color;
    private char gender ;
    private  string name;class X{
    string name ;
    string color;
    sting gender;
          .
          .
          .
          .
          .
          .


   public set_name( string name)
   {
       this.name=name;
   }
   public set_color(string color)
   {
          this.color=color;
   }


};
class leopard{
    private string color;
    private char gender ;
    private  string name;
    
    public leopard(X obj){
        this.color=obj.color;
        this.name=obj.name;
        this.gender =obj.gender;
    }

};
int main()

{
    x obj=new();
    obj.set_color('yellow');
    obj.set_gender("F");
    obj.set_name('abc');

    leopard l=new leopard(obj);

}
    
    public leopard(X obj){
        this.color=obj.color;
        this.name=obj.name;
        this.gender =obj.gender;
    }

};
int main()

{
    X obj=new();
    obj.set_color('yellow');
    obj.set_gender("F");
    obj.set_name('abc');
   ////single line object created .....
    X.obj=X().set_color("yellow").set_gende("M").set_name("abc");
    leopard l=new leopard(obj);
    
    }e;
       return this;
   }
   public X  set_color(string color)
   {
       this.color=color;
       return this;
   }


};
class leopard{
    private string color;
    private char gender ;
    private  string name;class X{
    string name ;
    string color;
    sting gender;
          .
          .
          .
          .
          .
          .


   public set_name( string name)
   {
       this.name=name;
   }
   public set_color(string color)
   {
          this.color=color;
   }


};
class leopard{
    private string color;
    private char gender ;
    private  string name;
    
    public leopard(X obj){
        this.color=obj.color;
        this.name=obj.name;
        this.gender =obj.gender;
    }

};
int main()

{
    x obj=new();
    obj.set_color('yellow');
    obj.set_gender("F");
    obj.set_name('abc');

    leopard l=new leopard(obj);

}
    
    public leopard(X obj){
        this.color=obj.color;
        this.name=obj.name;
        this.gender =obj.gender;
    }

};
int main()

{
    X obj=new();
    obj.set_color('yellow');
    obj.set_gender("F");
    obj.set_name('abc');
   ////single line object created .....
    X.obj=X().set_color("yellow").set_gende("M").set_name("abc");
    leopard l=new leopard(obj);
    
    }

    /// 2. client is enforcing here  bcoz client have to create an object of X class.
class X{
    string name ;
    string color;
    sting gender;
          .
          .
          .
          .
          .
          .


   public X set_name( string name)
   {
       this.name=name;
       return this;
   }
   public X  set_color(string color)
   {
       this.color=color;
       return this;
   }

/// func function help to create an object .
 public leopard func()
 {
     leopard l=new leopard(this);
     return l;
 }

};
class leopard{
    private string color;
    private char gender ;
    private  string name;class X{
    string name ;
    string color;
    sting gender;
          .
          .
          .
          .
          .
          .


   public set_name( string name)
   {
       this.name=name;
   }
   public set_color(string color)
   {
          this.color=color;
   }


};
class leopard{
    private string color;
    private char gender ;
    private  string name;
    
    public leopard(X obj){
        this.color=obj.color;
        this.name=obj.name;
        this.gender =obj.gender;
    }

};
int main()

{
    x obj=new();
    obj.set_color('yellow');
    obj.set_gender("F");
    obj.set_name('abc');

    leopard l=new leopard(obj);

}
    
    public leopard(X obj){
        this.color=obj.color;
        this.name=obj.name;
        this.gender =obj.gender;
    }

};
int main()

{
    X obj=new();
    obj.set_color('yellow');
    obj.set_gender("F");
    obj.set_name('abc');
   ////single line object created .....
    X.obj=X().set_color("yellow").set_gende("M").set_name("abc");
    //// v=created object of leopard in one line 
    leopard l=X().set_color("yellow").set_gende("M").set_name("abc").func();

    }
    /// but problem here is client is encforcing to create an object.
    // so replace "X class" to familiar class name like "Builder"and "func " method to "built" and also related to leopard class then no problem. so that client now 
    // do not think this is another class .somake it inner class.

    /// now there is no problem here so far .

class leopard{
    private string color;
    private char gender ;
    private  string name;
    
    public leopard(X obj){
        this.color=obj.color;
        this.name=obj.name;
        this.gender =obj.gender;
    }
/// inner class 
/// to get the object of inner class  without creating object of outer class make it static
static class builder{
    string name ;
    string color;
    sting gender;
          .
          .
          .
          .
          .
          .


   public builder set_name( string name)
   {
       this.name=name;
       return this;
   }
   public builder  set_color(string color)
   {
       this.color=color;
       return this;
   }

/// func function help to create an object .
 public leopard build()
 {
     leopard l=new leopard(this);
     return l;
 }

};
};
int main()
{
    /// after making X to builder ,static,inner object be like 
    leopard l=new leopard.builder().set_color("yellow").set_name("abc").build();
    /// this will resolve the all issue .
}
/// here benfits of inner class 
//1. there are lot of animal class like lion ,tiger leopard so  do not make builder class to inner class then how will be checking which builder clas belongs to which class.
//2. easy to use for client .

    ////question :- if lets say some parameteror some properties and actions  must be present in the object.
    /// like eg:- color,name should have with leopard else throw an error.
    /// what if there are few argument to mandatory to set?
//// solution is pass the mandatory agument in the constructor of builder() class.

//// THIS WHOLE THINGH IS CALLED BUILDER PATTER.
