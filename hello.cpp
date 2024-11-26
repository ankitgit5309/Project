#include <iostream>
#include <string>
using namespace std;

//  f(x) = x^2 + 2;
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int main()
{
    // int a, b, c;
    // short sa=9;

    /*This code will give an error because variables can't be defined
     using numbers inthe first palce it should be done after alphabets.*/

    // short 1_sa = 9;
    // cout << 1_sa;
    /*This is also a valid format*/
    // short s2323a = 9;
    // cout<< s2323a;

    // camelCase Notations
    // int marksInMaths=83;
    // cout<<marksInMaths <<endl;
    // cout<<"the marks of student in maths is "<<marksInMaths;

    // short a;
    // int const b=98;
    // long c;
    // long long d;
    // float const score =45.32;
    // // float score = 45.32;
    // /*jitna prescise chahie us hisab se variable define karna padega*/
    // double score2 = 45.332;
    // long double score3 = 45.332;
    // cout<<"The score is" <<score;
    // int a, b;
    // cout<<"enter first number"<<endl;
    // cin>>a;

    // cout<<"Enter second number"<<endl;
    // cin>>b;

    // cout <<"a+b is  " <<a+b <<endl;
    // cout <<"a-b is " <<a-b <<endl;
    // cout <<"a*b is " <<a*b <<endl;
    // cout <<"a/b is " <<(float)a/b <<endl;
    //     // cout<<"hello world Ankit"<<endl;
    //     // cout<<"Next  line";
    // int age;

    // cout << "Enter your age" << endl;
    // cin >> age;
    // Learning of if-else loop
    //  if(age>150 || age<1)
    //  {
    //      cout<<"invalid age";
    //  }

    // else if (age>= 18)
    // {
    //     cout<<"you can vote";
    // }

    // else
    // {
    //     cout<<"you cannot vote";
    // }

    // // Switch statements

    // switch (age)
    // {
    // case 12:
    //     cout << "You are 12 years of age" <<endl;
    //     break;

    // case 18:
    //     cout << "You are 18 years old" <<endl;
    //     break;

    // default:
    //     cout << "you are neither 12 nor 18 years old" <<endl;
    //     break;
    // }
    // LOOPS
    int index = 0;
    //  while (index<34)
    //  {
    //    cout<<"we are the index number"<<index<<endl;
    //    index = index+1;
    //  }
    //     do
    //     {
    //         cout << "we are the index number" << index << endl;
    //         index = index + 1;
    //     } while (index < 33);
    // for (int i = 0; i < 34; i++)
    // {
    //     cout<<"The value of i is " <<endl;
    // }
    // int a, b;
    // cout<<"Enter first number" <<endl;
    // cin>>a;

    // cout<<"Enter second number"<<endl;
    // cin>>b;
    // cout<<"The function returned "<< add(a,b);

    //  ARRAYS : collection of same types of data
    //     int arr[] = { 1,3,5};
    // // Array index     0 1 2
    //     cout<<arr[2];

    // int marks[6];
    // for(int i=0; i<6;i++)
    // {
    //     cout<<"enter the marks of"  <<i<<"th student"<<endl;
    //     cin >> marks[i];
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"Marks of "<<i<<"th student is"<<marks[i]<<endl;

    // } 

    // int arr2d[2][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6}};
    // // Double for loop 
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "The value at " << i << ", " << j << " is" << arr2d[i][j] << endl;
    //     }
    // }

    // int a = 343;
    // float b = 87.34; 
    // cout<<(float) a/34;
    // cout<<(int) b;

    // string name = "Ankit";
    // cout<<"The name is " <<name<<endl;
    // cout<<"The length of name is " <<name.length()<<endl;
    // cout<<"The name is " <<name.substr(0,3)<<endl;
    // cout<<"The name is " <<name.substr(2,3);
    
    // int a = 34;
    // int* ptra;
    // // & means adress of the  given thing. 
    // ptra = &a;
    // // print the address.
    // cout<<ptra;
    // // print the value of a the value to which  the ptr is pointing.
    // cout<<*ptra;

    class Employee;{
        public:
          string name;
          int salary;

          Employee(string name, int salary)

          {
            this->name = n;
            this-> salary = s;
          }
          
    }


    void printDetails()
   {
    cout<<"The name of our first  employee is"<< this.anme <<"and his salary is "<<this->salary<<" Dollars "<<endl;
   }

        

    return 0;
}