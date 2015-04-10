#include<iostream>
#include<cstdlib>

#define SIZE 999
using namespace std;

class IntStack{
private:
    int num[SIZE];
    int n=0;
public:
    void add(int a){
        num[n]=a;
        n++;
    }
    void sum(){
        int sum=0;
        int i;
        for(i=0;i<n;i++)
        {
            sum+=num[i];
        }
        cout<<"sum ="<<sum<<endl;
    }
    void out(){
        int i;
        for(i=0;i<n;i++)
        {
            cout<<"num["<< i<<"]="<<num[i] <<endl;
        }
    }
};

int main(){
    bool isPrime = true;
    int control;
    int number;
    IntStack stack;
    while(isPrime)
    {
        system("cls");
        cout<<"1.add number"<<endl<<"2.to sum them"<<endl<<"3.print all of them"<<endl<<"and other number to quit"<<endl;
        cin>>control;
        switch(control){
        case 1:
            cout<<"input an number"<<endl;
            cin>>number;
            stack.add(number);
            system("pause");
            break;
        case 2:
            stack.sum();
            system("pause");
            break;
        case 3:
            stack.out();
            system("pause");
            break;
        default:
            isPrime=false;
            break;
        }
    }
	return 0;
}
