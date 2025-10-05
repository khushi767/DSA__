struct Node{
    Node * links[26];
    bool flag=false;

    //check if current node has a link for character
    bool containkey(char ch){
        return (links[ch-'a']!=NULL);
    }

    //create/assign a link for a character
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }

    //get next node corresponding to character
    Node* get(char ch){return links[ch-'a'];}

    //mark this node as the end of the word
    void setEnd(){flag=true;}

    //check if this node is marked as end of word
    bool isEnd(){
        return flag;
    }
};

class Trie {
    private:
    Node* root;
public:

    Trie() {
       root=new Node(); 
    }
    
    void insert(string word) {
       Node* node=root;
       for(auto ch:word){
        //if link for this character doesn't exist,create it
        if(!node->containkey(ch)){
            node->put(ch,new Node());
        }
        //move to the next node character
        node=node->get(ch);

       } 
       //after inseting all characters,mark end of word
       node->setEnd();
    }
    //search if word exist in string
    bool search(string word) {
        Node* node=root;
        for(auto ch:word){
            if(!node->containkey(ch)){
                return false;
            }
            node=node->get(ch);
        }
        return node->isEnd();
    }
    
    bool startsWith(string prefix) {
       Node* node=root;
       for(auto ch:prefix){
        if(!node->containkey(ch)){
            return false;
        }
        node=node->get(ch);
       } 
       return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */