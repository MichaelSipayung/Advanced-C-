#include "main.h"

int main(int argc,char ** argv){
    std::cout<<"don't start if you can't finish it" <<std::endl;
    std::cout<<"number : " ;
    for(size_t i =0;i!=10;++i){
        std::cout<<count_calls()<<" "; //destroy the value after program terminate
    }
    std::cout<<std::endl;
    int x =12;
    std::cout<<"original value : " <<x <<std::endl;
    reset(&x);  //change x but not the address of x
    std::cout<<"reset x value : " << x <<std::endl;
    x=13;
    std::cout<<"pass by reference : " << x <<std::endl;
    resetByref(x);  //x is pass by reference
    std::cout<<"after pass the parameter by reference : " << x <<std::endl;
    std::string xVar ="axis", yVar ="ordinat";
    std::cout<<"1(true) : 0 (false), answer : "<< isShorter(xVar,yVar);
    //multiple value to return using reference 
    std::string name = "Michael Sipayung";
    char find= 'i';
    std::string::size_type occurs;
    std::cout<<"find charater : " <<find <<" in string : " << name<<std::endl;
    auto find_i  = find_char(name,find,occurs);
    std::cout<<"position : " << find_i <<" occurs : " << occurs <<"(times)"<<std::endl;
    int nonConstObj= 12;
    //passing to const object
    consParameter(nonConstObj);
    int passArr=12;
    passArray(&passArr);
    int numData[10] ={1,2,3,4,5,6,7,8,9,10};
    passArrayElement(numData);
    traverse(numData);
    char addr [] = "madison avenue street";
    printCStyleArr(addr);
    std::cout<<"using standart library convention to handle array as parameter"<<std::endl;
    auto begin = numData;
    auto end  = numData+10;
    printStantLibConv(begin,end);
    printExplicitSize(numData,N);
    arrayrefAsPar(numData); //make sure the dimension is equals
    std::cout<<"thinking, is it efficent ? "<<std::endl;
    int myMat[][N]  ={{1,2,3,4,5},{6,7,8,9,0},{2,3,4,5,6}};
    multDimen(myMat,3);
    int xGc = 121, yGc = 10;
    std::cout<<"find gcd (12,4) : " << gcdFind(xGc,yGc) <<std::endl;
    std::cout << "test no return value from a function" << std::endl;
    std::cout << "x: " << xGc << " y: " << yGc << std::endl;
    swap(xGc, yGc);
    std::cout << "x: " << xGc << " y: " << yGc << std::endl;
    const std::string mName = "michael sipayung", bName = "berlian s";
    const std::string& compareName = shorterString(mName, bName);
    std::cout << "compare : " << compareName << std::endl;
    std::string s("a value");
    std::cout << "reference return are lvalues : " << s << std::endl;
    getValue(s, 0) ='A'; //changes s[0]  = to A
    std::cout << "reference return are lvalues : " << s << std::endl;
    std::vector<int> naturalNum = { 0,1,2,3,4,5,6,7,8 };
    print(naturalNum, naturalNum.begin());
    return 0;
}
