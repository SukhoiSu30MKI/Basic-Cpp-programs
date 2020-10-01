#include<iostream>
using namespace std;
const int size=3;
class ArrayDmeo{
	
	int arr[size][size],counto,counte;
	public:
void accept(){
	counto=counte=0;
	for(int r=0;r<size;r++){
   for(int c=0;c<size;c++){
   	cout<<"Enter Element : ";
	cin>>arr[r][c];
	}
	}
}
void sumOfD(){
	int sum=0;
for(int r=0;r<size;r++){
   for(int c=0;c<size;c++){
   		if((r==c) ||(r+c==size-1))
		  	sum+=arr[r][c];
	}
	}
	cout<<"Sum of  D "<<sum<<endl;	
}
	
void lowerTriangle{
for(r=0;r<size;++r)
	{
		for(c=0;c<size;++c)
		{
			if(c<r)
				cout<<a[r][c]<<" ";
			else
				cout<<" ";
		}
		cout<<"\n";
	}
}
	void upperTriangle(){
		

	
for(int r=0;r<size;r++){
   for(int c=0;c<size;c++){
   		if(!(r==c))
		{
			cout<<arr[r][c]<<" ";
		}
		else{
			cout<<"- ";
		}
	}
	cout<<"\n";
	}
	
	}
	
void displayTranspose(){

	for(int r=0;r<size;r++){
   for(int c=0;c<size;c++){
   	cout<<" "<<arr[c][r]<<" ";
	}
	cout<<"\n";
	}
	}



void display(){

	for(int r=0;r<size;r++){
   for(int c=0;c<size;c++){
   	cout<<" "<<arr[r][c]<<" ";
	}
	cout<<"\n";
	}
}	
void findOddEven(){
	for(int r=0;r<size;r++){
   for(int c=0;c<size;c++){
   		if(arr[r][c]%2==0)
   		counte++;
   		else
   		counto++;
	}
	}
	cout<<"No of Odd "<<counto<<endl;
	cout<<"No of Even "<<counte<<endl;
	
}

void findNumber(){
	int num,flag=0;
	cout<<"Enter A Number : ";
	cin >>num;
	for(int r=0;r<size;r++){
   for(int c=0;c<size;c++){
   		if(arr[r][c]==num)
   		flag++;
	}
	}
	if(flag>0){
		cout<<num<<" found "<<flag<<" times";
	}
	
}
	
};



int main(){

ArrayDmeo ad;
ad.accept();
//ad.displayTranspose();
ad.display();
ad.sumOfD();
ad.upperTriangle();
//ad.findOddEven();
//ad.findNumber();



return 0;
}

