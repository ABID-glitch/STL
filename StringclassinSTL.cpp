* STRING CLASS:
#include<iostream>
#include<string.h>
using namespace std;
int main(){
  char s1[10]="ABID"; //or it can be written as
  strcpy(s1,"ABID"); // ABID is assigned to s1
  s2=s1; //it's wrong it can be written as
  strcpy(s2,s1);
  s2>s1 //It's wrong it can be written as
  strcmp(s2,s1) //comparison can be done in this form
  char s3[30];
  s3=s1+s2;
  strcpy(s3,strcat(s1,s2));

-------------------------------------------------------------------------------
* USE OF STRING CLASS :
string s2="HELLO"; // It means a constuctor named s2 of class string calls hello as an argument can also be written as
string s2("HELLO");
string s2=string("HELLO");

* CONSTRUCTOR MAKING:
char str[]="HELLO";
string s2=str; //str=constructor and s2 is an object
string s3=s2; //passing reference or can be written as s3(s2);


string s1;
s1="HELLO";
string s2="STUDENTS";
string s3;
s1+=s2; //s1+s2
if(s1==s2)
--------------------------------------------------------------------------------
#include<iostream>
#include<string>
using namespace std;
int main(){
  string s1;
  s1="HELLO";
  string s2="STUDENTS";
  string s3;
  s3=s1+s2;
  cout<<s1<<endl<<s2<<endl<<s3<<endl;
}
--------------------------------------------------------------------------------
#include<iostream>
#include<string>
using namespace std;
int main(){
  string s1;
  cout<<"Enter your name:";
  cin>>s1;
  cout<<" HELLO "<<s1;
}
--------------------------------------------------------------------------------
#include<iostream>
#include<string>
using namespace std;
int main(){
  string s1="HELLO";
  char str[]=" STUDENTS ";
  string s2;
  s2=s1+str;
  cout<<s2;
}
--------------------------------------------------------------------------------
#include<iostream>
#include<string>
using namespace std;
int main(){
  string s1="HELLO";
  char str[]="STUDENTS";
  string s2;
  s2=s1+'A';
  cout<<s2;
}
--------------------------------------------------------------------------------
* ASSIGN():
#include<iostream>
#include<string>
using namespace std;
int main(){
  string s1;
  s1.assign("HELLO");
  cout<<s1;
}
--------------------------------------------------------------------------------
* APPEND():
#include<iostream>
#include<string>
using namespace std;
int main(){
  string s1="HELLO";
  s1.append("STUDENTS");
  cout<<s1;
}
--------------------------------------------------------------------------------
* INSERT:
#include<iostream>
#include<string>
using namespace std;
int main(){
  string s1="HELLO";
  s1.insert(2,"123");
  cout<<s1;
}
--------------------------------------------------------------------------------
* REPLACE:
#include<iostream>
#include<string>
using namespace std;
int main(){
  string s1="HELLO";
  s1.replace(2,2,'A'); //first 2 is index and last 2 is length from where to where
  cout<<s1;
}
--------------------------------------------------------------------------------
* ERASE:
#include<iostream>
#include<string>
using namespace std;
int main(){
  string s1="HELLO";
  s1.erase();
  cout<<s1;
}
--------------------------------------------------------------------------------
* FIND():
#include<iostream>
#include<string>
using namespace std;
int main(){
  string s1="HELLO ABID";
  int i=s1.find("ABID");
  cout<<i;
}

OUTPUT:6 //and if the string doesn't maches then it will return -1
--------------------------------------------------------------------------------
* rfind():
#include<iostream>
#include<string>
using namespace std;
int main(){
  string s1="HELLO BABY BABY";
  int i=s1.rfind("BABY");
  cout<<i<<" ";
}
--------------------------------------------------------------------------------
* COMPARE():
#include<iostream>
#include<string>
using namespace std;
int main(){
  string s1,s2;
  s1="ABID";
  s2="ALISHA";
  int i=s1.compare(s2);
  cout<<i;
}

OUTPUT: -1 //if the string maches the number 0 will be returned
// If the output is :
// 0: the strings are same
// -1: In dictionary order(like amar then amit)
// 1: Not in dictionary order
--------------------------------------------------------------------------------
* C_STR():
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main(){
  string s1="HELLO";
  char str[10];
  strcpy(str,s1.c_str()); //copying the value of string into character array must include string.h
  cout<<str;
}
--------------------------------------------------------------------------------
* SIZE():
#include<iostream>
#include<string>
using namespace std;
int main(){
  string s1="HELLO";
  int i=s1.size();
  cout<<i;
}
