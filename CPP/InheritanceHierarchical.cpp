#include<iostream>
using namespace std;
class Artwork{
	public:
		char Artist[100];
		int Price;
		void ArtworkIn(){
			cout<<"\nEnter Artist Name : ";
			cin>>Artist;
			cout<<"Enter Price : ";
			cin>>Price;
		}
		void ArtworkDisp(){
			cout<<"\nArtist : "<<Artist<<"\t"<<" Price : "<<Price<<"\t";
		}
};
class Painting:public Artwork{
	public:
		int MediumOpt;
		void PaintIn(){
			do{
				cout<<"\nEnter Medium used to Paint : 1.Oil 2.Canvas : ";
				cin>>MediumOpt;
			}while(MediumOpt<0 or MediumOpt>2);
		}
		void PaintDisp(){
			cout<<"Painting is Done Using : ";
			if(MediumOpt==1){
				cout<<"oil\n";
			} 
			else{
				cout<<"Canvas\n";
			}
		}
};
class Sculpture:public Artwork{
	public:
		int Weight;
		void SculptureIn(){
			cout<<"Enter Weight of Sculpture(kg) : ";
			cin>>Weight;
		}
		void SculptureDisp(){
			cout<<"Material used is Marble. "<<"\t"<<"Weight is : "<<Weight<<"\n";
		}
};
int main(){
	Sculpture s1;
	s1.ArtworkIn();
	s1.SculptureIn();
	s1.ArtworkDisp();
	s1.SculptureDisp();

	Painting p1;
	p1.ArtworkIn();
	p1.PaintIn();
	p1.ArtworkDisp();
	p1.PaintDisp();
	return 0;
}