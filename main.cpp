#include <bits/stdc++.h>
using namespace std;
int main()
{
    int start;
    cout<<"Ahlan ya user ya habibi."<< endl;
    cout<<"What do you like to do today?"<<endl;
    cout<<"1- Cipher a message."<<endl;
    cout<<"2- Decipher a message."<<endl;
    cout<<"3- End."<<endl;
    cin>>start;
    while (true)
    {
        while (start!=1&&start!=2&&start!=3)
        {
            cout<<"Please enter 1 or 2 or 3"<<endl;
            cin>>start;
        }
        if (start==1)
        {
            string message , railmessage;
            int key , i , j , row=0 , col=0 , k=-1;
            cout<<"Please enter the message to cipher:"<<endl;
            cin.ignore();
            getline(cin,message);
            cout<<"Please enter the key:";
            cin>>key;
            for(int i=0 ; i<=message.length();i++)
            {
                if(message[i]!= ' ')
                {
                    railmessage+=message[i];
                }
            }
            int length;
            length=railmessage.size();
            char railmatrix[key][length];
            for(i=0;i<key;i++ )
            {
                for(j=0;j<length;j++)
                    railmatrix[i][j]='-';
            }
            for(i=0;i<length;i++)
            {
              railmatrix[row][col]=message[i];
              if(row==0||row==key-1)
              {
                  k=k*(-1);
              }
              row+=k;
              col++;
            }
            cout<<"\nCipher message:";
            for(i=0;i<key;i++)
            {
                for(j=0;j<length;j++)
                {
                    if(railmatrix[i][j]!='-')
                        cout<<railmatrix[i][j];
                }
            }
            break;

        }
        else if (start==2)
        {
            string message;
            int key ,length ,i,j,row=0,col=0,k=-1,w=0;
            cout<<"Please enter the message to Decipher:";
            cin.ignore();
            getline(cin,message);
            cout<<"Please enter the key:";
            cin>>key;
            length=message.size();
            char railmatrix[key][length];
            for (i=0;i<key;i++)
            {
                for(j=0;j<length;j++)
                    railmatrix[i][j]='-';

            }
            for (i=0;i<length;i++)
            {
                railmatrix[row][col]='@';
                if(row==0||row==key-1)
                {
                    k=k*(-1);
                }
                row+=k;
                col++;
            }

            cout<<"Dechiper message:";
            for(i=0;i<length;i++){
                cout<<railmatrix[row][col++];
                if(row==0||row==key-1)
                    k=k*(-1);
                row+=k;
            }
            break;

        }
        else if (start==3)
        {
            break;
        }

    }

    return 0;
}
