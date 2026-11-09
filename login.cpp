#include <iostream>
using namespace std;
int main ()
{
  string password;
   string emails;
    string LoginPassord;
     string LginEmiails;
      cout<<"createAccount"<<endl;
       cout<<"enturEmails";
        cin>>emails;
         cout<<"EnturPassword"<<endl;
          cin>>password;

            cout<<"\nAccountCreatedSuccessfuiiy";
  

             cout<<"login"<<endl;
              cout<<"AnturEmails"<<endl;
               cin>>emails;
                cout<<"EnturPasswrd"<<endl;
                 cin>>password;
                  if("passwrd==LoginPasswrd&&emails==Loginemails"){
                    cout<<"\nWelcome_loginsuccessful";
                 }
                else{ cout<<"\ninvalidEmails_orPassword";

                }
          
    return 0;
}