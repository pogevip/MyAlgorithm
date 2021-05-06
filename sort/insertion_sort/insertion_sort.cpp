#include<iostream>
#include<vector>


int printVector(std::vector<int> vec){
    if(vec.size()==0){
        std::cout<<"NONE"<<std::endl;
    }
    for(int i=0; i<vec.size(); i++){
        std::cout<< "vector["<< i<< "] == "<<vec[i]<<std::endl;
    }
    return 0;
}

std::vector<int> insertionSort(std::vector<int> vec){
    std::vector<int> result=vec;
    if(vec.empty()){
        return result;
    }
    for(int i=1; i<vec.size(); i++){
        int temp=result[i];
        // std::cout<< i<<"\t";
        // std::cout<< "temp: "<<temp<<std::endl;
        int j=i;
        while(temp<result[j-1]){
            // std::cout<< temp << "<"<< result[j-1] <<std::endl;
            result[j] = result[j-1];
            j =j-1;
        }
        // for(j=i; j>0;j--){
        //     if(temp<result[j-1]){
        //         std::cout<< temp << "<"<< result[j-1] <<std::endl;
        //         result[j] = result[j-1];
        //     }else{
        //         break;
        //     }
        // }
        result[j] = temp;
        // printVector(result);
    }
    return result;
}



int main(){
    std::vector<int> vec = {6,5,1,3,7,2};
    std::vector<int> result = insertionSort(vec);
    printVector(vec);
    printVector(result);
    
    return 0;
}