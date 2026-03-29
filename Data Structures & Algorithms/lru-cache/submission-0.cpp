class Node {
public:
    int key;
    int val;
    Node* prev;
    Node* next;

    Node(int k, int v): key(k), val(v), prev(nullptr), next(nullptr) {}
};

class LRUCache {
private:
    int cap;
    unordered_map<int, Node*> cache;
    Node* left; //dummy pointer -> least recently used
    Node* right; // dummy pointer -> most recently used

    void remove(Node* node) {
        //remove from dll
        //removes from wherever the node is in dll
        Node* prev = node->prev;
        Node* nxt = node->next;
        prev->next = nxt;
        nxt->prev = prev;
    }

    void insert(Node* node) {
        //insert in dll
        //always inserts on most recently used side
        Node* prev = right->prev;
        prev->next = node;
        node->prev = prev;
        node->next = right;
        right->prev = node;
    }

public:
    LRUCache(int capacity) {
        //constructor
        cap = capacity;
        cache.clear();
        left = new Node(0, 0); //need to assign values bcz left and right are pointers, not nodes
        right = new Node(0, 0);
        left->next = right;
        right->prev = left;
    }
    
    int get(int key) {
        //1. search in cache 2. move node to front of dll 3. return -1 if not present in cache
        if (cache.find(key) != cache.end()) {
            Node* node = cache[key];
            remove(node);
            insert(node);
            return node->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        //1. check if key present 2. if present, then delete node from dll, insert in cache and dll
        //3. if cache.size() > cap -> remove lru
        if (cache.find(key) != cache.end()) {
            remove(cache[key]);
        }
        cache[key] = new Node(key, value);
        insert(cache[key]);

        if (cache.size() > cap) {
            Node* lru = left->next;
            remove(lru);
            cache.erase(lru->key);
            delete lru;
        }
    }
};
