//header vecotor type ,name input values 
//the first line contains the return value type, the function name optionally we have place for arguments
//body actually defines the action to be taken by the function 
//function can return type and value 
//a function  can return only one value .the value can be any expression matching the return tyoe but it might contain more than one return statement


//in a void function 
/*return is optional at the end of the function body 
return may also be used to terminate execution of the function explicitly
no return values hsould appear following return
*/

//calling a function every program starts from main function utilize other functions in the main function we call any other function in main function
#include<iostream>
using namespace std;
/*void printstuff(){ //there are no parameters
    cout<<"Writing my first function";
}*/

int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}
int main(){
    // printstuff();
    int a,b;
    int add;
    cin>>a>>b;
    
    add=sum(a,b);
    cout<<add;
    return 0;

}