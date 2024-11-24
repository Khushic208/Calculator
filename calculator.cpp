#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
void addition();
void subtraction();
void multiplication();
void division();
void factorial();
void power();
void square();
void squareroot();

int main()
{
    cout <<"\t\t\t Here is your scientific calculator\n";
    cout << "*******Press 0 to quit the program*******" << endl;
    cout << "Enter 1 for Addition \n";
    cout << "Enter 2 for Subtraction \n";
    cout << "Enter 3 for Multiplication \n";
    cout << "Enter 4 for Division \n";
    cout << "Enter 5 for Power \n";
    cout << "Enter 6 for Factorial \n";
    cout << "Enter 7  for square \n";
    cout << "Enter 8 for squareroot\n\n";

    int choice;
    while(1){
        cout<<"enter your choice";
        cin>>choice;
        switch(choice)   
        {
         case 1:
             addition();
            break;
         case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            power();
            break;
        case 6:
            factorial();
            break;
        case 7:
            square();
            break;
        
        case 8:
            squareroot();
            break;
            case 0:
            exit(0);
            break;
            default:
            cout<<"invalid choice\n";
        }
         }
    return 0;

}

void addition(){
    int a,b;
    cout<<"Enter the numbers you want to add:";
    cin>>a>>b;
    cout<<"The addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}
void subtraction(){
    cout<<"Enter the numbers you want to subtract: ";
    int a,b;
    cin>>a>>b;
    cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
}
void multiplication(){
    cout<<"Enter the numbers you want to multiply: ";
    int a,b;
    cin>>a>>b;
    cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
}
void division(){
    cout<<"Enter the numbers you want to divide: ";
    int a,b;
    cin>>a>>b;
    cout<<"The division of "<<a<<" and "<<b<<" is "<<(float)a/(float)b<<endl;
}
void factorial(){
    cout<<"Enter the number you want the factorial of: ";
    int n;
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"The factorial of "<<n<<" is "<<fact<<endl;
}
void power()
{
    double b,e;
    cout<<"Enter the base and exponent";
    cin>>b>>e;
   double power=pow(b,e);
    cout<<"The answer for base "<<b<<" and exponent "<<e<<" is "<<power<<endl;
}
    void square(){
        cout<<"enter the number you want square of:";
        double n;
        cin>>n;
        double square=pow(n,2);
        cout<<"The sqaure of"<<n<<"is"<<square<<endl;

            }
void squareroot(){
    cout<<"Enter the number you want the square root of:";
    double n;
    cin>>n;
    double squareroot=sqrt(n);
    cout<<"The square root of"<<n<<"is"<<squareroot<<endl;
}
