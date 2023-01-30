class Solution {
public:
    static bool mycmp(pair<int,int> a,pair<int,int> b)
    {
        return a.first>b.first;
    }
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> car;
        for(int i=0;i<position.size();i++)
        {
            car.push_back(make_pair(position[i],speed[i]));
        }
        sort(car.begin(),car.end(),mycmp);

        float time = (float)(target - car[0].first)/car[0].second;
        int ans=1;
        for(int i=1;i<car.size();i++)
        {
            float tempTime = (float)(target - car[i].first)/car[i].second;
            if(tempTime>time){
                ans++;
                time = tempTime;
            }
        }


        return ans;
    }
};