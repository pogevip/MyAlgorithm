#include<iostream>
#include<vector>

std::vector<int> bubbleSort(std::vector<int> vec){
    std::vector<int> result=vec;
    if(vec.empty()){
        return result;
    }
    int temp;
    for(int i=0; i<vec.size()-1; i++){
        for(int j=0; j< vec.size()-1-i; j++){
            if(result[j]>result[j+1]){
                temp = result[j];
                result[j] = result[j+1];
                result[j+1] = temp;
            }
        }
    }
    return result;
}

int printVector(std::vector<int> vec){
    for(int i=0; i<vec.size(); i++){
        std::cout<< "vector["<< i<< "] == "<<vec[i]<<std::endl;
    }
    return 0;
}

int main(){
    std::vector<int> vec = {6,5,1,3,7,2};
    std::vector<int> result = bubbleSort(vec);
    printVector(vec);
    printVector(result);
    
    return 0;
}