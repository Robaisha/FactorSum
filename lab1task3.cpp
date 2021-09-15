#include<iostream>
using namespace std;
class Numbers{
	public:
	int val;
	int sum=0;
	void factors(){
	int d;
	d=1;
	while (d <= val)
    {
        if (!(val % d))
            cout << d << " ";
            sum=sum+d;
        d++;
     }
     cout<<"\nSUM IS "<<sum;
   }
};
int main(){	
    Numbers obj;
	cout<<"Enter a positive integer to find its factors : ";
	cin>>obj.val;
	if(obj.val==-1){
		cout<<"Sorry ! The program has stopped";
		return 0;
	}
	obj.factors();
    
}

