class PrefixTree {
public:
    class Node{
        public:
        Node*children[26];
        bool isend;
        Node(){
            isend=false;
            for(int i=0;i<26;i++){
                children[i]=nullptr;
            }
        }
    };
    Node *root;
    PrefixTree() {
        root=new Node();
    }
    
    void insert(string word) {
        Node *curr=root;
        for(int i=0;i<word.size();i++){
            char c=word[i];
            int index=c-'a';
            if(curr->children[index]==nullptr){
                curr->children[index]=new Node();
            }
            curr=curr->children[index];
        }
        curr->isend=true;
    }
    
    bool search(string word) {
        Node *curr=root;
        for(int i=0;i<word.size();i++){
            char c=word[i];
            int index=c-'a';
            if(curr->children[index]==nullptr){
                return false;
            }
            curr=curr->children[index];
        }
       if(curr->isend==true){
        return true;
       }
       return false;
    }
    
    bool startsWith(string prefix) {
        Node *curr=root;
        for(int i=0;i<prefix.size();i++){
            char c=prefix[i];
            int index=c-'a';
            if(curr->children[index]==nullptr){
                return false;
            }
          curr=curr->children[index];
        }
    return true;
    }
};
