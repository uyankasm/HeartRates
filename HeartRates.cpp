#include<iostream>
using namespace std;

class HeartRates{
	public:
		HeartRates(){	
			setname();
			setbirthday();	
			getage(yil);
			getMaxiumumHeartRate(yas);
			setTargetHeartRate();
			print();
		}
		
		void setname(){
			cout<<"\n\nLutfen isminizi giriniz:";
			cin>>name;
			cout<<"\nLutfen soyisminizi giriniz:";
			cin>>soyname;
		}
		
		void setbirthday(){
			cout<<"\nLutfen dogum gununuzu giriniz:";
			cin>>gun;
			while(gun<=0){
			cout<<"\nBoyle bir deger giremezsiniz.Lutfen tekrar giriniz:";
			cin>>gun;
			}
			cout<<"\nLutfen dogum ayinizi giriniz:";
			cin>>ay;
			while(ay<=0){
			cout<<"\nBoyle bir deger giremezsiniz.Lutfen tekrar giriniz:";
			cin>>ay;
			}
			cout<<"\nLutfen dogum yilinizi giriniz:";
			cin>>yil;
			while(yil<=0){
			cout<<"\nBoyle bir deger giremezsiniz.Lutfen tekrar giriniz:";
			cin>>yil;
			}
		}
		
		int getage(int t){
			yas=2020-t;
			return yas;
		}
		
		int getMaxiumumHeartRate(int y){
			maxatis=220-y;
			return maxatis;
		}
		
		void setTargetHeartRate(){
		aralikmin=maxatis/2;
		aralikmax=maxatis*85/100;
				
		}
		
		void print(){
		cout<<"\nIsminiz:"<<name<<" "<<soyname<<"\nDogum tarihiniz:"<<gun<<"."<<ay<<"."<<yil<<"\nYasiniz:"<<yas;
		cout<<"\nMaksimum kalp atis hiziniz:"<<maxatis<<"\nHedef kalp atis hizi araliginiz:"<<aralikmin<<"-"<<aralikmax<<"\n\n";
		cout<<"#HAYATEVESIGAR\n\n";
		}
	private:
	string name,soyname;
	int gun,ay,yil,yas,maxatis,aralikmin,aralikmax;
};

int main(){
	cout<<"#EVDEKAL";
	HeartRates person1;
	return 0;
}


