#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

void login();
void registration();
void forgot();

int main()
{
    int c;
    cout<<"\t\t\t\t\t Welcome User \t\t\t\t\t\t"<<endl<<endl;
    cout<<"\t\t | Press 1 to Login               "<<endl; 
    cout<<"\t\t | Press 2 to Registe             "<<endl; 
    cout<<"\t\t | Press 3 to Forgot password     "<<endl; 
    cout<<"\t\t | Press 4 to Exit                "<<endl; 

    cout<<"Please Enter choice : ";
    cin>>c;
    cout<<endl;

    switch(c)
    {
        case 1:
        login();
        break;

        case 2:
        registration();
        break;

        case 3:
        forgot() ;
        break;

        case 4:
        cout<<"\t\t\t Thank you! sir";

        default :
        system("cls");
        cout<<"Enter a valid choice"<<endl;
    }

    return 0;
}

void login()
{
    int count;
    string userId , password , id , pass;
    system("cls");
    cout<<"\t\t\t Please enter the username and passoword "<<endl;
    cout<<"\t\t\t UserName : ";
    cin>>userId;
    cout<<"\t\t\t Password : ";
    cin>>password;

    
}