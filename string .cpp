//simple way to declare string

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"enter the value of string:"<<endl;
    cin>> str;
    cout <<str;
    
}

// 2nd way to declare string

#include<iostream>
#include<string>
using namespace std;

int main(){
  
    string str1(100,'A');
    cout<< str1 << endl;
    return 0;
    
}

//3rd way to output in string

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="AlbinzerAbs";
    cout << str;
    return 0;
}


//spacing string input & output 

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    cout << str << endl;;
    return 0;
}

// process to append in  string

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1="Albinzer";
    string str2="Abs";
    
    str1.append(str2);
    
    cout << str1 << endl;;
    return 0;
}

// arithmatic adding string

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1="Albinzer";
    string str2="Abs";
    
    
    
    cout << str1 + str2 << endl;;
    return 0;
}

//clear string function 

#include<iostream>
#include<string>
using namespace std;

int main()
{
    
    string str1="Albinzer";
    string str2="Abs";
    string str3;
    
    str3=str1+str2;
    str3.clear();
    
    cout << str3 << endl;;
    return 0;
}

// 
