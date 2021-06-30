void swap_max(int arr[], int l, int n ){

	int i, large = arr[n], pos = n, t = 0;
	for(i=n; i<l; i++){

		if(arr[i]>large){
			large = arr[i];
			pos = i;
		}
	}
	t = arr[n];
	arr[n] = large;
	arr[pos] = t;
}

void ssort(int arr[], int l){

	int i;
	for(i=0; i<l; i++){
	
		swap_max(arr,l,i);
	}
}
