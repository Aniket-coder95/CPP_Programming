class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        vector<int> vec;

        for(int i=0 ; i<numRows ; i++){
            for(int j=0 ; j<=i ; j++){
                if(j==0 && i==0){
                    vec.push_back(1);
                    cout<<"1 " << endl;
                    continue;
                }else if(j==0 || i==j){
                    vec.push_back(1);
                    cout << "1 "; 
                    if(i==j){
                        cout << endl;
                    }
                    continue;
                }else{
                    int x = result[i-1][j-1] + result[i-1][j]; 
                    vec.push_back(x);
                    cout << x << " ";
                }
            }
            result.push_back(vec);
            vec.clear();
        }
        return result;

    }
};
