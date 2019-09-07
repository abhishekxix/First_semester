//The following C++ program is used to print various patterns that I practised as an exercise
#include<iostream>


using namespace std;

void triangle(int);
void triangle2(int);
void char_box();
void char_box2();
void num_box(int);
void num_box2(int);
void char_triangle();
void char_triangle2();
void num_triangle_inverted(int);
void char_triangle_inverted();
int main()
{ 
    int n;
    cout<<"Enter the size of pattern :: ";
    cin>>n;
    triangle(n);
    triangle2(n);
    char_box();
    char_box2();
    num_box(n);
    num_box2(n);
    char_triangle();
    char_triangle2();
    num_triangle_inverted(n);
    char_triangle_inverted();
    return 0;
}

void triangle(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
        //system("clear");
    }
}

void triangle2(int n)
{
    cout<<endl;
    int count=1;
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {   
                cout<<count;
                count++;
            }
            cout<<endl;
            
        } 
}

void char_box()
{   
    cout<<endl;
    for(int i = 0; i < 6; i++)
    {
        for(char j = 'A'; j <= 'F'; j++)
        {
            cout<<j;
        }cout<<endl;
    }
}

void char_box2()
{   
    cout<<endl;
    for(char i = 'A'; i <= 'F'; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            cout<<i;
        }cout<<endl;
    }
}

void num_box(int n)
{   
    cout<<endl;
    for(int i = n; i > 0; i--)
    {
        for(int j = 1; j <= n; j++)
        {
            cout<<i;
        }cout<<endl;
    }
}

void num_box2(int n)
{   
    cout<<endl;
    for(int i = n; i > 0; i--)
    {
        for(int j = n; j > 0; j--)
        {
            cout<<j;
        }cout<<endl;
    }
}

void char_triangle()
{   
    cout<<endl;
    for(char i = 'A' ; i <= 'E'; i++)
    {
        for(char j = 'A'; j <= i; j++)
        {
            cout<<i;
        }cout<<endl;
    }
}

void char_triangle2()
{   
    cout<<endl;
    for(char i = 'A' ; i <= 'E'; i++)
    {
        for(char j = 'A'; j <= i; j++)
        {
            cout<<j;
        }cout<<endl;
    }
}

void num_triangle_inverted(int n)
{
    cout<<endl;
    for(int i=n;i>0;i--)
        {
            for(int j=1;j<=i;j++)
            {   
                cout<<j;
            }
            cout<<endl;
            
        } 
}

void char_triangle_inverted()
{
    cout<<endl;
    for(char i = 'E' ; i >= 'A'; i--)
    {
        for(char j = 'E'; j >= i; j--)
        {
            cout<<j;
        }cout<<endl;
    }
}

