#include<bits/stdc++.h>
using namespace std;


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	char str[100];
	cin.getline(str,100);

	int x=0;
	int y=0;

	for (int i = 0; str[i]!='\0'; ++i)
	{
		/* code */
		switch(str[i]){
			case 'N': y++;
			        break;
			case 'S': y--;
			        break;
			        
			case 'E': x++;
			        break;
			case 'W': x--;
			        break;                        

		}
	}

	cout<<x<<" , "<<y<<endl;


    // for first quadrant
	while(x>=0 and y>=0){
		while(y--){
			cout<<'N';
					}
		while(x--){
			cout<<'E';
			
		}
	}
	

	while(x<=0 and y>=0){
		while(y--){
			cout<<'N';
			
		}
		while(x++){
			cout<<'W';
			
		}
	}

	// while(x<=0 and y<=0){
	// 	while(y++){
	// 		cout<<'S';
			
	// 	}
	// 	while(x++){
	// 		cout<<'W';
			
	// 	}
	// }

	// while(x>=0 and y<=0){
	// 	while(y++){
	// 		cout<<'S';
			
	// 	}
	// 	while(x--){
	// 		cout<<'E';
			
	// 	}
	// }

	return 0;

}