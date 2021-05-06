#include<iostream>
#include<vector>

std::vector<int> selctionSort(std::vector<int> vec){
    std::vector<int> result=vec;
    if(vec.empty()){
        return result;
    }
    for(int i=0; i<vec.size(); i++){
        int temp=vec[i];
        int tempid=i;
        for(int j=i; j< vec.size(); j++){
            if(result[tempid]>result[j]){
                tempid=j;
            }
        }
        std::cout<<"最小值 "<<result[tempid]<< std::endl;
        temp = result[i];
        result[i] = result[tempid];
        result[tempid] = temp;
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
    std::vector<int> result = selctionSort(vec);
    printVector(vec);
    printVector(result);
    
    return 0;
}