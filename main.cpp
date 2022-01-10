#include <iostream>
#include <string>
using namespace std;
int i,j=0;

struct person
{
  int accNo;
  float balance;
  char name[10];
};

struct person p[10];
void read_data()
{
  for(i=j;i<=j;i++)
  {
    cout <<"Enter Name: "<<endl;
    cin >>p[i].name;
    cout <<"Enter Account Number: "<<endl;
    cin >>p[i].accNo;
    cout <<"Enter Balance: "<<endl;
    cin >>p[i].balance;
  }

}

void show_data()
{
  cout<<"****Data from System****"<<endl;
  for(i=0;i<j;i++)
  {
    cout <<"Name: "<<p[i].name<<endl;
    cout <<"Account number: "<<p[i].accNo<<endl;
    cout <<"Balance: "<<p[i].balance<<endl;
    cout <<"................................"<<endl;
  }
}

void find_data()
{
  int rec,f=0;
  cout <<"There are record "<<j<<" in the system"<<endl;
  cout <<"Enter record no. to search: "<<endl;
  cin >>rec;
  for(i=1;i<=j;i++)
  {
    if(rec==i)
    {
      cout <<"Name: "<<p[i-1].name<<endl;
      cout <<"Account number: "<<p[i-1].accNo<<endl;
      cout <<"Balance: "<<p[i-1].balance<<endl;
      f=1;
      break;
    }
  }
  if(f==1)
    cout<<".........................."<<endl;
  else
    cout<<"Record number not found"<<endl;
}

void edit_data()
{
  int rec,i,f=0;
  show_data();
  cout <<"Enter record no. to edit: "<<endl;
  cin >>rec;
  for(i=1;i<=j;i++)
  {
    if(rec==i)
    {
      cout<<"Enter Name: "<<endl;
      cin >>p[i-1].name;
      cout <<"Enter Account number: "<<endl;
      cin >>p[i-1].accNo;
      cout <<"Enter Balance";
      cin >>p[i-1].balance;
      f=1;
      break;
    }
  }
  if(f==1)
    cout <<".........................."<<endl;
  else
    cout <<"Record number not found"<<endl;
}

void del_data()
{
  int rec,i;
  show_data();
  cout <<"Enter record number to be deleted: "<<endl;
  cin >>rec;
  if(rec==j)
  {
    for (i=rec-1;i<j;i++)
    {
      p[i]=p[i+1];
    }
  }
  else
    cout <<"Record number not found"<<endl;  
}

int main() {
  int n;
  cout <<"***Account Information System***"<<endl;
  while(true)
  {
    cout <<"Select Any Option Below...."<<endl;
    cout <<"1- Add Record to file"<<endl;
    cout <<"2- Show Record from file"<<endl;
    cout <<"3- Search record from file"<<endl;
    cout <<"4- Update Record"<<endl;
    cout <<"5- Delete Record"<<endl;
    cout <<"6- Quit"<<endl;
    cout << "Enter your choice"<<endl;
    cin >>n;
    switch(n)
    {
      case 1:
        read_data();
        j++;
        break;
      case 2:
        show_data();
        break;
      case 3:
        find_data();
        break;
      case 4:
        edit_data();
        break;
      case 5:
        del_data();
        j--;
        break;
      case 6:
        exit(0);
        break;
      default:
        cout <<"Enter correct choice";
        exit(0);
    } 
  }
} 
