// #include<iostream>
// // #include<queue>
// using namespace std;

// int tour(int *p , int n){
//     int petrol , distance;
    
//    int arr[petrol][distance];
   
//    int balence = 0;
//    int start = 0;
//    int front , back ;
//    front = back =  start;

//    for(int i=0;i<n;i++){
//     petrol = p[i];
//     distance = p[i+n];
//     balence = balence+petrol-distance;
//     if(balence>=petrol-distance){
//         back++;
//     }
//     else{
//         start = back+1;
//     }
//     if(front == back){
//         return 1;
//     }
//    }

// }
// int main(){
//     int p;
//    int petrol , distance;
//    int arr[petrol][distance] = {(6,5),(7,6),(4,7),(10,8),(6,6),(5,4)};
//    cout<<tour(p,6);
//     return 0;
// }

#include <iostream>
using namespace std;

int tour(int *p, int n) {
    int petrol, distance;  //   6 5 7 6 4 7 10 8 6 6 5 4 
    int balence = 0;
    int start = 0;
    int front, back;
    front = back = start;

    for (int i = 0; i < n; i++) {
        for(int j=0;j<n;j++){
        petrol = p[i]; 
        distance = p[j]; 

        balence = balence + petrol - distance;

        if (balence < 0) {
            balence = 0;
            start = i + 1;
            front = back = start;
        } else {
            back++;
            
        }
    }

    if (front == n) {
        return -1; // No valid tour possible
    }

    return front+1;
}
}


int main() {
    int petrol_pump;
    int distance;
    cout << "Enter the number of petrol pumps: ";
    cin >> petrol_pump;
    cout<<"Enter distance between petrol pump: ";
    cin>>distance;

    // int *p[][] = new int[petrol_pump][distance];
    int arr[petrol_pump][distance];

    cout << "Enter petrol and distance values for each petrol pump:" << endl;
    for (int i = 0; i < petrol_pump; i++) {
        for(int j=0;j < distance; j++){
        cin >> arr[i][j];
    }
    }

   

    int result = tour(*arr, distance);

    if (result == -1) {
        cout << "No valid tour possible." << endl;
    } else {
        cout << "Start from petrol pump #" << result + 1 << endl;
    }

    

    return 0;
}