#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

const int  SIZE= 5;

// display menu:
void displayMeu(){
    cout <<"\n1- fill array." <<endl;
    cout <<"\n2- print sorted array." <<endl;
    cout <<"\n3- add element." <<endl;
    cout <<"\n4- avareg of array ." <<endl;
    cout <<"\n5- reverse array." <<endl;
    cout <<"\n6- min number." <<endl;
    cout <<"\n7- max number." <<endl;
    //cout <<"\n8- main menu." <<endl;
}


//1- fill array:
void fillarray(int arr[], int SIZE){ //si =>size
   for(int i=0;i<SIZE;i++){
     cout << "Number" << i+1 <<":" <<endl;
        cin>> arr [i];
   }
}


//2-sort array:
void sortArr(int arr[],int SIZE){
    cout <<"the sorted array is " ;
    sort(arr,arr+SIZE);
     for(int i=0; i<SIZE;++i)
        cout << arr[i] <<" ";
}

//3-add element to array:
void addEl(int arr[],int SIZE){
   int addel,addele;;
   cin >> addele;
   arr[SIZE] = addele;
   cout <<"the new array is: " << endl;
   for(int i=0;i<SIZE+1;i++){
    cout << arr[i] << " ";
   }
}

//4- avg:
double avg(int arr[],int SIZE){
   double sum =0,
        avg =0;
   for (int i=0;i<SIZE;i++)
        sum+= arr[i];
    avg= sum / SIZE;
    return avg;
}

//5-reverse the array:
void reve(int arr[],int SIZE){
    cout<< "the reverse array is:";
    int temp;
    for(int i=0;i<SIZE/2;i++){
        temp = arr[i];
        arr[i] = arr[SIZE -i-1];
        arr[SIZE -i-1]= temp;
        }
    for(int i=0; i <SIZE;i++)
     cout  <<arr[i] << " ";
}

//6-min element in array:
int minNo(int arr[],int SIZE){
    int mini = arr[0];
    for (int i=1;i<SIZE;i++){
        if(arr[i]<mini)
            mini = arr[i];
    }
    return mini;
}

//7-max:
int  maxNo(int arr[],int SIZE){
    int maxi = arr[0];
    for (int i=1;i<SIZE;i++){
        if(arr[i]> maxi)
            maxi = arr[i];
    }
    return maxi;
}


int main()
{
    int input=0,
     arr[5]={5,3,1,2,4},

    addel =0,
    avarge=0,
    mini=0,
    maxi=0;

    //display and get the input from user:
    for (int i=0; i<8;i++ ){
    displayMeu();
    cin>> input;

    //comparing the input:
    switch(input){

        //fill
        case(1):{

                cout <<"please enter the numbers" << endl;
           fillarray(arr,5);

            //cout << "\nthe new array is" << fillarray(arr,5) << endl
            break;
        }
        //sort
        case(2):{
          sortArr(arr,5);
           // cout <<"\n the sorted array is" <<   sortArr(arr,5) << endl;
            break;
        }
        //add
        case(3):{
            cout <<"\nplease enter the added element" <<endl;

            addEl(arr,5);
             //cout <<"\n the array is" << addel(arr,5) << endl;
            break;
        }

        //avg:
        case(4):{
           avarge= avg(arr,5);
           cout <<"\n the avarge is:" <<avarge << endl;
            break;
        }
        //reverse:
        case(5):{
            reve(arr,5);
         //   cout <<"\nthe reverse array is" << reve(arr,5) << endl;
            break;
        }
        //min
        case(6):{
          mini=  minNo(arr,5);
          cout <<"\n the min number in the array is" << mini << endl;
          break;
        }

         //max
        case(7):{
           maxi= maxNo(arr,5);
            cout <<"\n the max number in the array is" << maxi << endl;
          break;
        }

        default:
            cout<<"\n ---not valid number---" << endl;
        };
    }



    return 0;
}
