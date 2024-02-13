class Solution {
private:
    int helper(int l, int count){
        while(l!=1){
            if(l%2 == 0){
                l = l/2;
                count++;
            }
            else{
                l = 3 * l + 1;
                count++;
            }
        }
        return count;
    }
public:
    int getKth(int lo, int hi, int k) {
        vector<pair<int, int>> power(hi - lo + 1);
        for(int i=lo;i<=hi;i++){
            power[i-lo] = make_pair(helper(i, 0), i);
        }
        sort(power.begin(), power.end());
        return power[k-1].second;
    }
};