#include<iostream>
#include<time.h>

using namespace std;

void Alg_grd_002a(int a, int b, int q)
{
	struct timespec start, end;
	clock_gettime(CLOCK_REALTIME, &start);
	//time_t start = time(0);
	//Validate all inputs
	if (b < a || (b-a+1)%q !=0){
		return ;
	}
	
	int cycle_sum;
	int overall_sum = 0;
	for (int i=a; i<b; i+=q){
		cycle_sum =0;
		
		for (int k=i; k<i+q; k++){
			cycle_sum +=k;
		}
		
		overall_sum += cycle_sum;
		
		
		cout <<"Sum from "<<i<<" to "<<i + (q-1)<<" : "<<cycle_sum<<endl;
		cout <<"Sum from "<< a <<" to "<<i + (q-1)<<" : "<<overall_sum<<endl<<endl;
	}
	
	
	clock_gettime(CLOCK_REALTIME, &end);
	cout<<"It takes "<<double ((end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec)/1000000000.0)<<endl;
}

/*void summing(int a, int b, int q)
{
	struct timespec tart, nd;
	clock_gettime(CLOCK_REALTIME, &tart);
	//Validate all inputs
	if (b < a || (b-a+1)%q !=0){
		return ;
	}
	
	int cycle_sum;
	int overall_sum = 0;
	
	for (int i=a; i<b; i+=q){
		cycle_sum = ((2*i + (q-1) * 1) *q) / 2;
	    overall_sum += cycle_sum;
	    
	    cout <<"Sum from "<<i<<" to "<<i + (q-1)<<" : "<<cycle_sum<<endl;
		cout <<"Sum from "<< a <<" to "<<i + (q-1)<<" : "<<overall_sum<<endl<<endl;
	}
	
	clock_gettime(CLOCK_REALTIME, &nd);
	cout<<"It takes "<<double ((nd.tv_sec - tart.tv_sec) + (nd.tv_nsec - tart.tv_nsec)/1000000000.0)<<endl;
}*/

int main(){
	
	//summing(101,500,40);
	
	Alg_grd_002a(101,500,40);
	
	
	
	system("pause");
	return 0;
}
