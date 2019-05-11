class Solution {
public:
    struct TireNode
    {
        string str;
        TireNode* child[26];
        TireNode(){
            str="";
            for(auto& a:child){
                a=NULL;
            }
        }
    };

    struct Tire
    {
    public:
        TireNode* root;
        Tire(){
            root=new TireNode();
        }
        void insert(string word){
            TireNode* p=root;
            for(auto a:word){
                int c=a-'a';
                if(!p->child[c])p->child[c]=new TireNode();
                p=p->child[c];
            }
            p->str=word;
        }
    };
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        vector<string> res;
        if(board.empty()||board[0].empty())return res;
        int m=board.size(), n=board[0].size();
        Tire T;
        for(auto word:words)T.insert(word);
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j< board[i].size();j++){
                if(T.root->child[board[i][j]-'a'])check(board,T.root->child[board[i][j]-'a'],i,j,visited,res);
            }
        }
        return res;
    }
    
    void check(vector<vector<char>>& board, TireNode* p, int row, int col, vector<vector<bool>> &visited, vector<string>& res){
        if(!p->str.empty()){
            res.push_back(p->str);
            p->str.clear();
        }
        int m=board.size(), n=board[0].size();
        int dir[4][2]={{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        visited[row][col]=true;
        for(int i=0;i<4;i++){
            int new_r=row+dir[i][0];
            int new_c=col+dir[i][1];
            if(new_r>=0&&new_r<m&&new_c>=0&&new_c<n&&!visited[new_r][new_c]&&p->child[board[new_r][new_c]-'a'])
            check(board,p->child[board[new_r][new_c]-'a'],new_r,new_c,visited,res);
        }
        visited[row][col]=false;
    }
};
