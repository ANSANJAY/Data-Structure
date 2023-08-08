//#define PRINT
//#define DEBUG
typedef struct node{
    void * data;
    struct node * prev;
    struct node * next;
}node_t;


void * enter_data();
node_t * create_node(void * );
void print_dll_links(node_t *);
void add_node_start(node_t **);
void add_node_end(node_t ** );
void add_node_nth(node_t ** );
void delete_node(node_t **);
void search_node(node_t * head);

void print_dll_value(node_t * );
node_t * main_menu(node_t *);
