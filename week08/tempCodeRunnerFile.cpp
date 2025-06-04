void merge(int* arr,int s,int e){

    int mid=s+(e-s)/2;
    //find size of both the array
    int len1= mid-s+1;
    int len2= e-mid;

    //dynamic memory allocation 

    int* left=new int[len1];
    int* right=new int[len2];
    //index number

    int leftindex=0;
    int rightindex=0;
    int mainarrayindex=s;

    while(leftindex < len1 && rightindex <len2 ){
        if(left[leftindex] <right[rightindex]){
            arr[mainarrayindex] =left[leftindex];
            cout<<arr[mainarrayindex]<<" ";
            mainarrayindex++;
            leftindex++;
            
        }
        else{
            arr[mainarrayindex] =right[rightindex];
            mainarrayindex++;
            rightindex++;
            }
    }
    //copy logic for left element
    while(len1 > leftindex){
        arr[mainarrayindex] =left[leftindex];
            mainarrayindex++;
            leftindex++;

        }
    //copy logic for right element
    while(len2 > rightindex){
        arr[mainarrayindex] =right[rightindex];
            mainarrayindex++;
            rightindex++;
        }
}