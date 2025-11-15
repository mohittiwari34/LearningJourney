class Solution {
public:
    unordered_map<int,Employee*>m;
    int helper(int id)
    {
        Employee* e=m[id];
        int count=e->importance;
        for(int i:e->subordinates){
            count+=helper(i);
        }
        return count;
    }
    int getImportance(vector<Employee*> employees, int id) {
        //cout<<employees[0]->id;
        //unordered_map<int,Employee*>m;
        for(auto r:employees){
            m[r->id]=r;
        }
        return helper(id);
        
        
    }
};
