#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	srand(time(nullptr));
	
	//General Formula: int Random_Num = rand()%(max-min+1)+min;
	int random_num = rand()%10+1;
	cout<<"random number: "<<random_num<<endl;
	
	//********* Logic for Pattern *************
	int up = random_num;
	
	//Upper Triangle
	while (up>0){
	for(int i=0;i<up;i++){
		cout<<" ";
		if (i==(up-1)){
			cout<<"*";
		}
	}
	for(int j=0;j<2*(random_num-up)-1;j++){
		cout<<"+";
		if (j==(2*(random_num-up)-2)){
			cout<<"*";
		}
	}
	up--;
	cout<<endl;
}
	
	//Lower Triangle
	while(up<random_num){
		for(int i=0;i<up+1;i++){
		cout<<" ";
		if (i==(up)){
			cout<<"*";
		}
	}
		for(int j=0;j<2*(random_num-up-1)-1;j++){
		cout<<"+";
		if (j==(2*(random_num-up-1)-2)){
			cout<<"*";
		}
	}
		cout<<endl;
		up++;
	}
	return 0;
}
