class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int i,x;
        long int area,maxarea=0;
        for(i=0;i<heights.size();i++){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                x=s.top();
                s.pop();
                if(s.empty()) area=heights[x]*i;
                else area=heights[x]*(i-s.top()-1);
                if(area>maxarea) maxarea=area;
            }
            if(s.empty() || heights[s.top()]<heights[i]) s.push(i);
        }
        while(!s.empty()){
            x=s.top();
            s.pop();
            if(s.empty()) area=heights[x]*i;
            else area=heights[x]*(i-s.top()-1);
            if(area>maxarea) maxarea=area;
        }
        return maxarea;
    }
};
