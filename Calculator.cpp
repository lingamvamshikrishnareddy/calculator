#include<bits/stdc++.h>
using namespace std;
long long add_numbers(int,int);
long long sub_numbers(int,int);
long long div_numbers(int,int);
long long multi_numbers(int,int);
long long rem_of_two_numbers(int,int);
long long power_func(int,int);
long long factorial(int);
long long fact(int);

int main()
{
    long long int m{0};
    cout<<"Please enter two numbers: "<<endl;
    cin>>m;
    cout<<"If you want factorial  "<<m<<"!"<<"  please enter 0 next! "<<endl;
    long long int n{0};
    cin>>n;
    cout<<"Please enter a character "<<" + "<<" - "<< " % "<<" / "<<" ! "<<endl;
    char c;
    cin>>c;
    if(c=='+')
    {
        cout<<add_numbers(m,n)<<endl;
    }
    else if(c=='-')
    {
        cout<<sub_numbers(m,n)<<endl;
    }
    else if(c=='*')
    {
        cout<<multi_numbers(m,n)<<endl;
    }
    else if(c=='/')
    {
        cout<<div_numbers(m,n)<<endl;
    }
    else if(c=='%')
    {
        cout<<rem_of_two_numbers(m,n)<<endl;
    }
   
    else if(c=='!')
    {
        cout<<factorial(m)<<endl;
    }
    else
    {
        cout<<"Wrong Selection!! Please try again"<<endl;
    }
    return 0;
}

long long add_numbers(int m,int n)
{
    return m+n;
}

long long sub_numbers(int m,int n)
{
    return m-n;
}

long long div_numbers(int m,int n)
{
    return m/n;
}
long long multi_numbers(int m,int n)
{
    return m*n;
}
long long rem_of_two_numbers(int m,int n)
{
    return m%n;
}

long long factorial(int m)
{
    return fact(m);
}

long long int fact(int m)
{
    if(m==1)
    {
        return m;
    }
    return m*fact(m-1);
}