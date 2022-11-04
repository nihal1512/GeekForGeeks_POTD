class Solution {
  public:
    int maxGroupSize(int arr[], int N, int K) {
      unordered_map<int,int>mp;

        int cnt=0;

        for(int i=0;i<N;i++){

            mp[arr[i]%K]++;

        }

        for(int i=1;i<K;i++){

            if(K%2==0 && i==K/2) continue;

            if(mp[i]>mp[K-i]) cnt+=mp[i];

            else cnt+=mp[K-i];

        }

        cnt/=2;

        if(K%2==0 && mp[K/2]>0) cnt++;

        if(mp[0]>0) cnt++;

      

        return cnt;
    }
};
