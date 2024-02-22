/*
# DESCRIPTION :
    In a town, there are n people labeled from 1 to n. 
    There is a rumor that one of these people is secretly the town judge.
    If the town judge exists, then:

        1) The town judge trusts nobody.
        2) Everybody (except for the town judge) trusts the town judge.
        3) There is exactly one person that satisfies properties 1 and 2.

    You are given an array trust where trust[i] = [ai, bi] representing that,
    the person labeled ai trusts the person labeled bi. 
    If a trust relationship does not exist in trust array, 
    then such a trust relationship does not exist.

# APPROACH :
    STEP 1 : Initialize a vector v1 of size (n+1) with all elements set to false.
             This vector will keep the track of those elements which trust other elements.
             "Note that the array is 0 - indexed, and the values will be accessed from index 1."

    STEP 2 : Iterate all the 1st element in trust array and mark the corresponding index to true,
             as these elements trust atleast one element.

    STEP 3 : Now, according to the rule, the TOWN JUDGE do not trust any one. So iterate v1 from index 1
             and find the index with value false. Store that index value in any integer variable k.
             If you dont find any index witj value false, return -1 as the first rule didn't meet.
    
    STEP 4 : Now, according to the second rule, the TOWN JUDGE is trusted by all the other individuals.
             Therefore, iterate all the 2nd value of the trust array and count all the appearances of value k.
             If k == n - 1, that means k is trusted by all other individuals, therefore return k.
            Else return -1;

# TIME COMPLEXITY : 
    The time complexity of this approach will be = Updation of v1 array + Iteration of v1 array + Iteration of trust array.
    => T(n) = O(n)
*/
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> v1(n+1, false);
        for(int i=0;i<trust.size();i++)
            v1[trust[i][0]] = true;
        int k = -1;
        for(int i=1;i<=n;i++) if(v1[i] == false) {k = i;}
        if(k == -1) return -1;
        int count = 0;
        for(int i=0;i<trust.size();i++)
            if(trust[i][1] == k) count++;
        if(count == n-1) return k;
        return -1;
    }
};