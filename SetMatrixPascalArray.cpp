#include <stdlib.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
	
				int a[8];
				int b[8];
				int c[16];
				int d[16];
				int c1[16];
	int uno, dos;
	int eks,way,en=0,bilang=0;
	bool out=true, in1=true, in2=true;
	
	int a1[4][4], b1[4][4], sag[16][16];
	int yo1,yo,ang,ang1,scal;
	
	int pasrow;
int x,y,z;	
	string oohindi;
	

	while(out){
int awts,ins1,ins2;
		cout<<"______________________________"<<endl;
        cout<<"|         -MAIN MENU-        |"<<endl;
        cout<<"|         -----------        |"<<endl;
        cout<<"| [1]SET                     |"<<endl;
        cout<<"| [2]MATRIX                  |"<<endl;
		cout<<"| [3]PASCAL TRIANGLE         |"<<endl;
        cout<<"|____________________________|"<<endl;

        cout<<"PLEASE SELECT NO. : ";
		cin>>awts;

		switch(awts){

		case 1:{//SET
				
			cout<<"Enter number of elements for set A: ";
			cin>>uno;
			cout<<"Enter number of elements for set B: ";
			cin>>dos;
			for(int i=0; i<uno; i++){
				cout<<"Set A["<<i<<"]: ";
				cin>>a[i];
			}
			cout<<endl;
			for(int j=0; j<dos; j++){
				cout<<"Set B["<<j<<"]: ";
				cin>>b[j];
			}
			
			system("cls");
			for(int i=0; i<uno; i++){
					c[i]=a[i];
				}

				
		do{
		cout<<"______________________________"<<endl;
        cout<<"|     -SET OPERATION MENU-   |"<<endl;
        cout<<"|         -----------        |"<<endl;
        cout<<"| [1]UNION                   |"<<endl;
        cout<<"| [2]INTERSECTION            |"<<endl;
		cout<<"| [3]DIFFERENCE              |"<<endl;
        cout<<"|____________________________|"<<endl;

        cout<<"PLEASE SELECT NO. : ";
		cin>>ins1;
		
			switch(ins1){

		

			case 1:{
				
					for(eks=0; eks<=uno; eks++){
					for(way=0, en=0; way<=dos; way++){
						if(c[way]==b[eks])
							en=1;
					}
					if(en==0){
						c[eks+1]=b[eks];
					}
				}
				
				cout<<"Union of Set A and B"<<endl;

				for(int i=0; i<=c[i]; i++){
					cout<<c[i]<<" ";
				}
				cout<<endl;
				   }
				   en=0;
				   eks=0;
				   way=0;
				   break;

			case 2:{
				
				
				for(eks=0; eks<=uno; eks++){
					for(way=0, en=0; way<=dos; way++){
						if(a[way]==b[eks])
							en=1;
					}
					 if(en==1) {
					d[eks]= b[eks];
						bilang++;

					}
				}
				
				cout<<"The intersection of Set A and B is: "<<endl;
				for(int i=0; i<bilang; i++){
					cout<<d[i]<<" ";
				}
				cout<<endl;
				bilang=0;
				   }
				   en=0;
				   eks=0;
				   way=0;
				   break;

			case 3:{

				for(eks=0; eks<=uno; eks++){
		for(way=0,en=0; way<=dos; way++){
			if(a[eks]==b[way])
					en=1;
					
		     
			}
				if(en==0){
					c1[eks]=a[eks];
						bilang++;
					
				}
				}

				cout<<"The Difference of Set A and B is: "<<endl;
				
				for(eks=0; eks<bilang; eks++){
					
					cout<<c1[eks]<<" ";
				
					}
				cout<<endl;
				bilang=0;
				en=0;
				eks=0;
				way=0;
				   }
				   break;


			}
			cout<<"Do you want to go back to Set Menu? [Y/N]: ";
			cin>>oohindi;
			if(oohindi=="Y"||oohindi=="y"){
				in1=true;
				
			}else{
				in1=false;
				
			}
			system("cls");
			}while(in1);
			   }

			   break;

		case 2:{ // MATRIX

			cout<<"Enter number of row of first matrix: ";
			cin>>ang;
			cout<<"Enter number of column of first matrix: ";
			cin>>yo;
			cout<<"Enter number of row of second matrix: ";
			cin>>ang1;
			cout<<"Enter number of column of second matrix: ";
			cin>>yo1;
			system("cls");

do{
	cout<<"______________________________"<<endl;
        cout<<"|  -MATRIX OPERATION MENU-   |"<<endl;
        cout<<"|         -----------        |"<<endl;
        cout<<"| [1]ADDITION OF MATRIX      |"<<endl;
        cout<<"| [2]MULTIPLICATION OF MATRIX|"<<endl;
		cout<<"| [3]SCALAR MULTIPLICATION   |"<<endl;
        cout<<"| [4]TRANSPOSITION           |"<<endl;
		cout<<"|____________________________|"<<endl;

        cout<<"PLEASE SELECT NO. : ";
		cin>>ins2;
			switch(ins2){
		

			
			
			case 1:{// ADDITION
				if(ang!=ang1||yo!=yo1){
			cout<<"\"Can't Perform Addition of Matrix\""<<endl;

				
				}else{

				for(int i=0; i<ang; i++){
					for(int k=0; k<yo; k++){
						cout<<"Matrix 1:["<<i<<"]["<<k<<"]";
						cin>>a1[i][k];
					}
					}
				cout<<endl;
					for(int i=0; i<ang1; i++){
					for(int k=0; k<yo1; k++){
						cout<<"Matrix 2:["<<i<<"]["<<k<<"]";
						cin>>b1[i][k];
					}
					}

				cout<<"MATRIX 1"<<endl;
				for(int i=0; i<ang; i++){
					for(int k=0; k<yo; k++){
						cout<<a1[i][k]<<" ";
				}
					cout<<endl;
				}
				cout<<"MATRIX 2"<<endl;
				for(int i=0; i<ang1; i++){
					for(int k=0; k<yo1; k++){
						
						cout<<b1[i][k]<<" ";
				}
					cout<<endl;
				}

				for(int i=0; i<2; i++){
					for(int k=0; k<2; k++){
						sag[i][k]=a1[i][k]+b1[i][k];
				}
				}
				cout<<"The Addition of Matrix 1 and 2\n";
				for(int i=0; i<2; i++){
					for(int k=0; k<2; k++){
						cout<<sag[i][k]<<" ";
						
				}
					cout<<endl;
				}

				}
				   }
				   break;




			case 2:{ //MULTIPLICATION OF MATRIX
				if(ang!=ang1||yo!=yo1){
					cout<<"\"Can't Perform Multiplication of Matrix\""<<endl;
	
				}else{
					

					for(int i=0; i<ang; i++){
					for(int k=0; k<yo; k++){
						cout<<"Matrix 1:["<<i<<"]["<<k<<"]";
						cin>>a1[i][k];
					}
					}
				cout<<endl;
					for(int i=0; i<ang1; i++){
					for(int k=0; k<yo1; k++){
						cout<<"Matrix 2:["<<i<<"]["<<k<<"]";
						cin>>b1[i][k];
					}
					}

				for(x=0; x<ang; x++){

					for(y=0; y<yo1; y++){
						sag[x][y]=0;

					}
				}

				for(x=0; x<2; x++){
					for(y=0; y<2; y++){
						for(z=0; z<yo; z++){
						sag[x][y]+=a1[x][z]*b1[z][y];
						
				}
				}
				}
				cout<<"The Multiplication of Matrix 1 and 2\n";
				for(x=0; x<ang; x++){
					for(y=0; y<yo1; y++){
						cout<<sag[x][y]<<" ";
				}
					cout<<endl;
				}
				}

				   }
				   break;

			case 3:{//SCALAR MULTIPLICATION
				if(ang!=ang1||yo!=yo1){
					cout<<"\"Can't Perform Sacalar Multiplication of Matrix\""<<endl;

				}else{
					

					
				for(int i=0; i<ang; i++){
					for(int k=0; k<yo; k++){
						cout<<"Matrix 1:["<<i<<"]["<<k<<"]";
						cin>>a1[i][k];
					}
					}
				cout<<"Enter Number: ";
				cin>>scal;

				
				for(int i=0; i<2; i++){
					for(int k=0; k<2; k++){
						sag[i][k]=a1[i][k]*scal;
						
				}
				}
				cout<<"The Scalar is: \n";
				for(int i=0; i<2; i++){
					for(int k=0; k<2; k++){
						cout<<sag[i][k]<<" ";
				}
					cout<<endl;
				}
				}

				   }
				   break;

			case 4:{//TRANSPOSITIION 
					if(ang!=ang1||yo!=yo1){
						cout<<"\"Can't Perform Transposition of Matrix\""<<endl;

				}else{
					

					
				for(int i=0; i<ang; i++){
					for(int k=0; k<yo; k++){
						cout<<"Matrix 1:["<<i<<"]["<<k<<"]";
						cin>>a1[i][k];
					}
					}
				
				
				cout<<"The Transposition is: \n";
				for(int i=0; i<2; i++){
					for(int k=0; k<2; k++){
						cout<<a1[k][i]<<" ";
				}
					cout<<endl;
				}
				
				}

				   }
				   break;
			}
			 cout<<"Do you want to go back to Matrix Menu? [Y/N]: ";
			cin>>oohindi;
			if(oohindi=="Y"||oohindi=="y"){
				in1=true;
				
			}else{
				in1=false;
				
			}
			system("cls");
			}while(in1);
			  }

		break; 

		case 3:{//PASCAL
			do{
			system("cls");
		cout<<"________________________"<<endl;
        cout<<"|  -PASCAL TRIANGLE-   |"<<endl;
        cout<<"|      -----------     |"<<endl;
		cout<<"|______________________|"<<endl;

		cout<<"Enter rows: ";
		cin>>pasrow;
		cout<<endl;

		for(int q=0; q<pasrow; q++){
			int lacsap=1;
			for(int w=1; w<(pasrow-q); w++){
			cout<<"   ";
			}
			for(int e=0; e<=q; e++){
				cout<<"      "<<lacsap;
				lacsap=lacsap*(q-e)/(e+1);

		}
			cout<<endl<<endl;
		}
		cout<<endl;
		 cout<<"Do you want to go back to Pascal Menu? [Y/N]: ";
			cin>>oohindi;
			if(oohindi=="Y"||oohindi=="y"){
				in1=true;
				
			}else{
				in1=false;
				
			}
			system("cls");
			}while(in1);
			   }
			   break;

		
		
}
	}

	system("pause");
}

