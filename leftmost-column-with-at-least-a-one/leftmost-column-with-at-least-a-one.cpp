/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int row, int col);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int min=99999;
    
    void binarySearch(BinaryMatrix &binaryMatrix,int i, int numCol){
        int high = numCol;
        int low=0;
        int firstOne=-1;
        while(low<high){
            int mid=(low+high)/2;
            if(binaryMatrix.get(i,mid)==1){
                high=mid;
                firstOne=mid;
            }
            else{
                low=mid+1;
            }
        }
        if(firstOne!=-1 && firstOne<min){
            min=firstOne;            
        }
        
    }
    
    
    
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int> dim=binaryMatrix.dimensions();
        for(int i=0;i!=dim[0];i++){
            binarySearch(binaryMatrix,i, dim[0]);
        }
        if(min==99999){
            return -1;
        }
        return min;
    }
};