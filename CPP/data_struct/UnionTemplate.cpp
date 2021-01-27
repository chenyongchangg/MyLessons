#include <vector>
#include <numeric>

class UnionTemplate{
public:
    std::vector<int> parent;
    std::vector<int> size;

    int setCount;
    UnionTemplate(int _n):parent(_n), size(_n, 1), setCount(_n){
        std::iota(parent.begin(), parent.end(), 0);
    }
public:
    int findSet(int root){
        return parent[root] == root ? root : findSet(parent[root]);
    }
    bool uniteSet(int x, int y){
        if(findSet(x) == findSet(y)){
            return false;
        }
        if(size[x]  > size[y]){
            std::swap(x, y);
        }
        parent[findSet(x)] = findSet(y);
        size[x] += size[y];
        setCount--;
        return true;
    }


};