#include<stdio.h>

int main(){
	int n, burst_times[100], i, in_times[100], waiting_times[100], turn_around_times[100];
	float avg_waiting_time=0, avg_turn_around_time=0;

	printf("Enter the total number of processes : ");
	scanf("%d", & n);
	printf("Enter %d inputs for the burst times : ", n);
	for(i = 0; i<n; i++){
		scanf("%d", & burst_times[i]);
		
	}

	// put the values of the in_times

	for(i = 0; i < n; i++){
		in_times[i] = 0;
		
	}

	// calculate each of the processes' waiting time
	
	waiting_times[0] = in_times[0];
	for (i = 1; i < n; i++){
	
		waiting_times[i] = waiting_times[i-1] + burst_times[i-1];

	}
	
	// calulate the avg waiting time
	for(i=0; i<n; i++){
		avg_waiting_time += waiting_times[i];
	}	
	avg_waiting_time = avg_waiting_time/n;

	// calculate each process turn around time

	for(i=0; i<n; i++){
		turn_around_times[i] = waiting_times[i] + burst_times[i];
	}

	// calulate avg turn around time
	for(i=0; i<n; i++){
		avg_turn_around_time += turn_around_times[i];
	}
	avg_turn_around_time = avg_turn_around_time/n;


	printf("\n\nAvg waiting time = %f\n", avg_waiting_time);
	printf("Avg turn around time = %f\n\n", avg_turn_around_time);

	return 0;	
}

