#include <cstdio>
#include <algorithm>

using namespace std;

int main(){

	int i,j;

	while(scanf("%d %d", &i, &j) != EOF){
		int temp_i = i;
		int temp_j = j;

		if(i > j){
			swap(i,j);
		}

		int max_cycle_length = 0;
		int cycle_length;

		while(i <= j){
			cycle_length = 1;
			unsigned int n = i;
			while(n != 1){
				if(n%2 != 0){
					n = 3*n + 1;
				}
				else{
					n = n/2;
				}
				cycle_length += 1;
			}
			if(cycle_length > max_cycle_length){
				max_cycle_length = cycle_length;
			}
			i += 1;
		}
		printf("Max cycle length is: %d\n", max_cycle_length);

	}

	return 0;
}